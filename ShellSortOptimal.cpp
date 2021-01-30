#include "ShellSortOptimal.h"

//Reference: https://www.geeksforgeeks.org/shellsort/
void ShellSortOptimal::run_sort_algorithm() throw (string)
{
   int i, j, temp = 0;
	while (temp < (size/3))
		temp = temp * 3 + 1;
	while (temp > 0) 
	{
		for ( i = temp; i < size; i++) 
		{
			Element count = data[i];
			for (j = i; j >= temp; j = j-temp) 
			{
				compare_count++;
				if (data[j - temp] > count) 
				{
					data[j] = data[j - temp];
					move_count++;
				} else
					break;
			}
			data[j] = count;
		}
		temp = (temp - 1) / 3;
	}
}