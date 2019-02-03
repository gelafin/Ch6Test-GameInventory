#include <iostream>
#include "item.h"

int countTotalItems(int *arr, int length){
  int total {0};
  for (int index {0}; index < length; index++){
    total += arr[index];
  }
  return total;
}

/*make items a struct with int quantiy and string name to use this function
void printAllItemQuantities(int *arr, int length){
  for (int index {0}; index < length; index++){
  }
}
*/

int main(){

int inventory[item::MAX_ITEMS] {2, 5, 10};

std::cout << "Total inventory items: " << countTotalItems(inventory, item::MAX_ITEMS);
std::cout << std::endl;

/*
std::cout << "All item Quantities:\n";
printAllItemQuantities(inventory, item::MAX_ITEMS);
std::cout << std::endl;
*/

int sillyViewerVariable;
std::cin >> sillyViewerVariable;
  return 0;
}
