# PIXI_PATH=$(git rev-parse --show-toplevel)/.pixi

# export LD_LIBRARY_PATH=${PIXI_PATH}/env/lib:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=${CONDA_PREFIX}/lib

# export CMAKE_PREFIX_PATH=${PIXI_PATH}/env/lib:$CMAKE_PREFIX_PATH
export CMAKE_PREFIX_PATH=${CONDA_PREFIX}/lib

# export PKG_CONFIG_PATH=${PIXI_PATH}/env/share/pkgconfig:${PIXI_PATH}/env/lib/pkgconfig:${PKG_CONFIG_PATH}
export PKG_CONFIG_PATH=${CONDA_PREFIX}/share/pkgconfig:${CONDA_PREFIX}/lib/pkgconfig

# export CC=${CONDA_PREFIX}/bin/clang
# export CXX=${CONDA_PREFIX}/bin/clang++
