// Implementation of node class for a linked list

#include "node.h"

Node::~Node() {
  delete next;
}

