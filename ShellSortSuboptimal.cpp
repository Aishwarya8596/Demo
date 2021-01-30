#include "ShellSortSuboptimal.h"
//Reference: https://www.geeksforgeeks.org/shellsort/
//Reference: http://www.sanfoundry.com/cplusplus-program-implement-shell-sort/
void ShellSortSuboptimal::run_sort_algorithm() throw (string)
{
   int temp, i, j;
   for (temp = size / 2; temp > 0; temp= temp/2) 
   {
		for (i = temp; i < size; i += 1) 
		{
			Element count = data[i];
			for (j = i; j >= temp; j = j-temp) 
			{
				compare_count++;
				if (data[j - temp] > count) 
				{
					data[j] = data[j - temp];
					move_count++;
				} 
				else
					break;
			}
			data[j] = count;
		}
	}
}