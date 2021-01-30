#include "InsertionSort.h"
//Reference: https://www.tutorialspoint.com/data_structures_algorithms/insertion_sort_algorithm.htm
void InsertionSort::run_sort_algorithm() throw (string)
{
   int i, j;
   for (i = 1; i < size; i++)
   {
      for (j = i; j > 0; j--)
      {
         compare_count++;

         if (data[j] < data[j-1])
            swap(j, j-1);
         else
            break;
      }
   }
}