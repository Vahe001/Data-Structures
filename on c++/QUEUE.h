#ifndef Queuebyme
#define Queuebyme

namespace stdVahe{

#include <iostream>
#include <stdexcept>
#include <vector>
#include <cmath>

class queue
{
  int* arr;
  int first;
  int last;
  int max_size;
  int size;
public:
  queue(int);
  ~queue();
  void push(int);
  int read();
  int max_Size();
  int Size();
  bool empty();
};

}


#endif
