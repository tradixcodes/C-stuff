#include <stdio.h>

int main(){
  int arr[5];
  
  // here the array decays to an int pointer
  int *ptr = arr;
  // here the array doesn't decay and an operation points to the next int arr pointer
  int (*ptr_2)[5] = &arr;

  printf("%p\n", ptr);
  printf("%p\n", ptr_2);
  
  // here the difference becomes clear
  printf("%p\n", ptr + 1);
  printf("%p\n", ptr_2 + 1);
  
  printf("%zu\n", sizeof(*ptr));
  printf("%zu\n", sizeof(*ptr_2));

  return 0;
}
