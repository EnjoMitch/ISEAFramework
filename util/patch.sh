#!/bin/bash -e

PATCH=$(pwd)/patches/eigen/eigen3_SparseMatrix_fork.patch
cd /usr/include/eigen3/Eigen/src/SparseCore
echo "Patching '${PATCH}' in '$(pwd)'"
if patch -vp2 ${PATCH}; then
	echo "Patching successful."
else
	echo "Patching failed!"
fi


