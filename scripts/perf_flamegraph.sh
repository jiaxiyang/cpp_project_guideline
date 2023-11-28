#! /bin/bash
APP="$1"
[ -d flame_graph ] || git clone https://github.com/brendangregg/FlameGraph.git flame_graph

if [ -z "$APP" ]; then
	echo "[ERROR] APP name is empty."
	exit
fi

echo "[INFO ] APP name: ${APP}"
echo "ps -ef |grep "$APP" | grep -v grep | awk '{print $2}' |head -n 1"

#timeout $CAPDUR sudo perf record -e cpu-clock -g -p ${PID} -o $PERFDATA
# perf record -e cpu-clock -g -- $APP $CAPDUR
sudo perf stat -ddd -- $APP
# perf record -e cpu-clock -g -- $APP
sudo perf record --call-graph dwarf $APP
echo "to perf.unfold"
sudo perf script -i perf.data >perf.unfold
sudo chmod o+r perf.unfold
echo "to perf.folded"
./flame_graph/stackcollapse-perf.pl perf.unfold >perf.fold
echo "to svg"
./flame_graph/flamegraph.pl perf.fold >flame_graph.svg
echo "graph to dot"
cat perf.unfold | c++filt | gprof2dot -f perf | dot -Tpng -o graph2dot.png
sudo rm -f perf.*
