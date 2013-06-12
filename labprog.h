#ifndef LABPROG_H
#define LABPROG_H

#include <stdio.h>
#include <stdlib.h>

void swap (int * a, int * b);
int partition (int vec[], int left, int right);
int binary_search (int a[], int low, int high, int target);
void quick_sort (int vec[], int left, int right);
void bubble_sort(int vec[], int length);
void shell_sort (int vec[], int length);

#endif