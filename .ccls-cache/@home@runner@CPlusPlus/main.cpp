#include <iostream>
#include <string>
#include <stdlib>


int main(void) {
 
  int* arr = new int(10);

  for (int i = 0; i < 10; i++) {
    arr[i] = i;
    std::cout << arr << std
  }


  delete arr;
  return 0;
}