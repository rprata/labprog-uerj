#ifndef LABPROG_H
#define LABPROG_H

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct Point_st
{
	int x;
	int y;
} Point;

typedef struct Rect_st
{
	Point p1;
	Point p2;
	Point p3;
	Point p4;

} Rect;

long f[1000];

Point make_point (int x, int y);
int compare_point(Point p1, Point p2);
Point add_point (Point p1, Point p2);

Rect make_rect (Point p1, Point p2, Point p3, Point p4);

unsigned long fibonacci (unsigned int n);
unsigned long fibonacci_rec (unsigned int n);
void swap (int * a, int * b);
int partition (int vec[], int left, int right);
int binary_search (int a[], int low, int high, int target);
void quick_sort (int vec[], int left, int right);
void bubble_sort(int vec[], int length);
void shell_sort (int vec[], int length);

#endif