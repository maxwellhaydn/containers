#include <iostream>
#include "slist.h"

int main(int argc, char* argv[]) {
  SList list1;
  list1.append(1);
  list1.append(2);
  list1.append(7); 
  SList list2(list1);


  std::cout << "list1:" << std::endl;
  list1.printContents();
  std::cout << "list2:" << std::endl;
  list2.printContents();
  
  std::cout << "list2.clear()" << std::endl;
  list2.clear();

  std::cout << "list1:" << std::endl;
  list1.printContents();
  std::cout << "list2:" << std::endl;
  list2.printContents();

  return 0;
}

