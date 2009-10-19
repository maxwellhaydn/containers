#include <iostream>
#include "slist.h"

int main(int argc, char* argv[]) {
  SList list;
  list.append(1);
  list.append(2);
  list.append(7); 
  SList list2(list);

  return 0;
}

