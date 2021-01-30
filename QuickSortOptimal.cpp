#include "QuickSortOptimal.h"
//Reference: https://www.geeksforgeeks.org/quick-sort/
//Reference: https://stackoverflow.com/questions/12454866/how-to-optimize-quicksort

Element& QuickSortOptimal::choose_pivot_strategy(const int left, const int right)
{
   int middle = (left+right)/2;

    compare_count++;
    if ( data[middle] < data[left] )
       swap(left,middle);

    compare_count++;
    if ( data[right] < data[left] )
       swap(left,right);

    compare_count++;
    if ( data[right] < data[middle] )
       swap(middle,right);

    swap(left,middle);

    return data[left];
}