#include "labprog.h"

void swap (int * a, int * b) 
{
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}
 
int partition (int vec[], int left, int right) 
{
  int i, j;
 
  i = left;
  for (j = left + 1; j <= right; ++j) {
    if (vec[j] < vec[left]) {
      ++i;
      swap(&vec[i], &vec[j]);
    }
  }
  swap(&vec[left], &vec[i]);
 
  return i;
}

int binary_search(int a[], int low, int high, int target) 
{
    if (high < low)
        return -1;

    int middle = (low + high)/2;

    if (target < a[middle])
        return binary_search(a, low, middle-1, target);
    else if (target > a[middle])
        return binary_search(a, middle+1, high, target);
    else if (target == a[middle])
        return middle;
}

void quick_sort (int vec[], int left, int right)
{
	int r;
  	if (right > left) 
  	{
    	r = partition(vec, left, right);
    	quick_sort(vec, left, r - 1);
    	quick_sort(vec, r + 1, right);
  	}
}

void bubble_sort(int vec[], int length)
{

  int i;

  if(length > 0)
  {
    for(i = 0; i < length; i++)
    {
      int first = vec[i];
      int second = vec[i + 1]; 
 
      if(second < first)
      {
        swap(&vec[i], &vec[i + 1]);
      }
    }
    // Recursive call
    bubble_sort(vec,length - 1);
  }
}

void shell_sort (int vec[], int length) 
{
    int i , j , value;
    int gap = 1;
    do 
    {
        gap = 3*gap+1;
    } while(gap < length);
    
    do
    {
        gap /= 3;
        for(i = gap; i < length; i++) 
        {
            value = vec[i];
            j = i - gap;
            while (j >= 0 && value < vec[j]) 
            {
                vec [j + gap] = vec[j];
                j -= gap;
            }
            vec [j + gap] = value;
        }
    } while ( gap > 1);
}