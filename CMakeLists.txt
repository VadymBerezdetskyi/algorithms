cmake_minimum_required(VERSION 3.14)
project(algorithms)

set(CMAKE_CXX_STANDARD 17)

add_executable(algorithms main.cpp src/utils/array.h src/utils/getGraph.h src/Search/linear.h src/utils/runner.h src/Search/binary.h src/utils/string.h src/Search/linearString.h src/Search/searchKMP.h src/Search/searchBM.h src/Sorting/linearInsert.h src/Sorting/shellSort.h src/Sorting/simpleChoice.h src/Sorting/bubbleSort.h src/Sorting/shakerSort.h src/Sorting/quickSort.h src/Sorting/countingSort.h src/Sorting/radixSort.h src/Sorting/heapSort.h src/Sorting/mergeSort.h src/Graph/kruskal.h src/Graph/prim.h src/Graph/dfs.h src/Graph/bfs.h)