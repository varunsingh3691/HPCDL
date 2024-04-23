ubuntu commands to run HPC PRAC

nano bfs.cpp
g++ -o bfs bfs.cpp -fopenmp
./bfs



if openmp is not installed then use the following command

sudo apt-get install libomp-dev
