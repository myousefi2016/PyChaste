#!/bin/bash

export PETSC_DIR=$SRC_DIR
export PETSC_ARCH=arch-conda-c-opt

if [[ $(uname) == Darwin ]]; then
    SO=dylib
else
    SO=so
fi

$PYTHON ./configure \
  --with-fc=0 \
  --with-debugging=0 \
  --COPTFLAGS=-O3 \
  --CXXOPTFLAGS=-O3 \
  --LIBS=-Wl,-rpath,$PREFIX/lib \
  --with-blas-lapack-lib=libopenblas${SHLIB_EXT} \
  --with-hwloc=0 \
  --with-ssl=0 \
  --with-x=0 \
  --download-hypre \
  --download-f2cblaslapack \
  --download-hdf5 \
  --download-parmetis \
  --download-metis \
  --download-sundials \
  --with-shared-libraries \
  --with-clanguage=cxx \
  --prefix=$PREFIX

sedinplace() { [[ $(uname) == Darwin ]] && sed -i "" $@ || sed -i"" $@; }
for path in $PETSC_DIR $PREFIX; do
    sedinplace s%$path%\${PETSC_DIR}%g $PETSC_ARCH/include/petsc*.h
done

make
make install

rm -fr $PREFIX/bin
rm -fr $PREFIX/share
rm -fr $PREFIX/lib/lib$PKG_NAME.*.dylib.dSYM
rm -f  $PREFIX/lib/$PKG_NAME/conf/files
rm -f  $PREFIX/lib/$PKG_NAME/conf/*.py
rm -f  $PREFIX/lib/$PKG_NAME/conf/*.log
rm -f  $PREFIX/lib/$PKG_NAME/conf/RDict.db
rm -f  $PREFIX/lib/$PKG_NAME/conf/*BuildInternal.cmake
find   $PREFIX/include -name '*.html' -delete

#export LIBRARY_PATH=$PREFIX/lib

#./configure \
#  --prefix=$PREFIX \
#  --with-mpi-dir=$PREFIX \
#  --download-suitesparse \
#  --download-hypre \
#  --download-mumps \
#  --download-superlu_dist \
#  --download-f2cblaslapack \
#  --download-hdf5 \
#  --download-parmetis \
#  --download-metis \
#  --download-sundials \
#  --with-x=false \
#  --with-clanguage=cxx \
#  --with-shared-libraries
#make
#make install


