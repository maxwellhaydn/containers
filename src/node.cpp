// Implementation of node class for a linked list

#include "node.h"

Node::Node(const Node& other) {
  next = other.next;
  value = other.value;
}

Node::~Node() {
  delete next;
}

Node& Node::operator=(const Node& other) {
  // Check for self-assignment
  if (this == &other) {
    return *this;
  }

  delete next; // Delete current value before overwriting
  next = new Node(*other.next);
  value = other.value;

  return *this;
}
