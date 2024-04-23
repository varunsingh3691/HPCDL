ubuntu commands to run HPC PRAC
<br/>
nano bfs.cpp <br/>
g++ -o bfs bfs.cpp -fopenmp <br/>
./bfs <br/>



if openmp is not installed then use the following command

sudo apt-get install libomp-dev
