#include <Deque.h>
using namespace stdVahe;

deque::deque()
{
    first_elem_index = last_elem_index = 0;
    size = 0;
    max_size = 1;
    arr = new int [max_size];
}
void deque::push_back(int val)
{
    if(size == max_size)
    {
        int *brr = arr;
		max_size *= 2;
		arr = new int [max_size];
		for (int i = first_elem_index, j = 0; i != last_elem_index, j < size;
            i = std::fmod(i+1, size), ++j)
		{
            arr[j] = brr[i];
        }
        delete[] brr;
		arr[size++] = val;
        return;
    }
    arr[size++] = val;
}
void deque::pop_back()
{
    arr[last_elem_index--] = 0;
}
void deque::push_front(int val)
