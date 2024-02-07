#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t low, size_t high, int value);
int **allocate_map(int n, int m);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
void print_subarray(int *array, size_t low, size_t high);

#endif /* SEARCH_ALGOS_H */
