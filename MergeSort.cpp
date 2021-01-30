#include <string>
#include "MergeSort.h"

void MergeSort::run_sort_algorithm()
    throw (string)
{
    // Defensive programming: Make sure we end up
    // with the same size list after sorting.
    int size_before = data.get_size();

    mergesort(data);

    // Check sizes.
    int size_after = data.get_size();
    if (size_before != size_after)
    {
        string message = "***** Size mismatch: before " +
                         to_string(size_before) + ", size after " +
                         to_string(size_after);
        throw message;
    }
}

void MergeSort::mergesort(LinkedList& list)
{
   LinkedList sublist1, sublist2;
	int temp = list.get_size();
	if (temp > 1)
	    {
	       list.split(sublist1, sublist2);
	       move_count = move_count + 2;
	       mergesort(sublist1);
	       mergesort(sublist2);
	       merge(list, sublist1, sublist2);
	    }
}
//Reference: D.S.Malik text book.
//Reference: https://www.geeksforgeeks.org/merge-sort-for-linked-list/
void MergeSort::merge(LinkedList& list, LinkedList& sublist1, LinkedList& sublist2)
{
    Node *begin = sublist1.get_head();
    Node *end = sublist2.get_head();
    list.reset();
    while ((begin != nullptr) && (end != nullptr))
    {
        if (begin->element.get_value() <= end->element.get_value())
        {
            list.add(sublist1.remove_head());
            begin = sublist1.get_head();
        } else
        {
            list.add(sublist2.remove_head());
            end = sublist2.get_head();
        }
        compare_count++;
        move_count++;
    }
    if (begin !=nullptr)
    {
        list.concatenate(sublist1);
        move_count++;
    }

    if (end !=nullptr)
    {
        list.concatenate(sublist2);
        move_count++;
    }
}
void MergeSort::clear() { data.clear(); }