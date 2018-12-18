#! bin/bash

export OMP_NUM_THREADS=1
./parallel_snake tests/big_input output 20000
export OMP_NUM_THREADS=2
./parallel_snake tests/big_input output 20000
export OMP_NUM_THREADS=4
./parallel_snake tests/big_input output 20000
export OMP_NUM_THREADS=6
./parallel_snake tests/big_input output 20000
export OMP_NUM_THREADS=8
./parallel_snake tests/big_input output 20000
