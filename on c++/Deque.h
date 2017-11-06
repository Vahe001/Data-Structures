#ifndef DEQUEBYME
#define DEQUEBYME

#include <iostream>
#include <cmath>

namespace stdVahe{

class deque
{
private:
    int *arr;
    unsigned int first_elem_index;
    unsigned int last_elem_index;
    unsigned int max_size;
    unsigned int size;
public:
    deque();
    void push_back(int);
    void pop_back();
    void push_front(int);
    void pop_front();
    void insert(int, int);
    void delete_index_val(int);
    void clear();
    void clear_unused_memory();
    int  Size();
    int  capacity();
    bool empty();
    int  operator [](int);
    void out();
    int  sum_all_items();
    int  max_item();
    int  min_item();
};

}
#endif
