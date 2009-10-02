// Implementation of a singly-linked list

#include "slist.h"

SList::SList(const SList& other) {
  // If other list is empty, do nothing
  if (other.isEmpty()) {
    head = 0;
    return;
  }

  // First copy head node of other list
  Node *otherHead = other.getHead();
  head = new Node(otherHead->getValue());

  // Traverse other list, copying each node along the way
  Node *otherCurrent = otherHead;
  Node *current = head;
  while (otherCurrent->hasNext()) {
    otherCurrent = otherCurrent->getNext();
    Node *next = new Node(otherCurrent->getValue());
    current->setNext(next);
    current = next;
  }
}

SList::~SList() {
  delete head;
}

SList& SList::operator=(const SList& other) {
  // Check for self-assignment
  if (this != &other) {
    
  }

  return *this;
}