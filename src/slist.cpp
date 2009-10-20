// Implementation of a singly-linked list

#include "slist.h"

#include <iostream>

SList::SList(const SList& other) {
  head = 0;

  if (other.isEmpty()) {
    return;
  }

  Node *current = 0;  // Pointer to the node being copied from other list
  Node *last = 0; // Pointer to the last node added to this list

  // First copy head node of other list
  current = other.getHead();
  last = new Node(current->getValue());
  head = last;

  // Traverse other list, copying each node along the way
  while (current->hasNext()) {
    current = current->getNext();
    last->setNext(new Node(current->getValue()));
    last = last->getNext();
  }
}

SList::~SList() {
  // Calling the destructor for the head node will in turn call the
  // destructor for each node in the list
  delete head;
}

/*SList& SList::operator=(const SList& other) {
  // Check for self-assignment
  if (this != &other) {
        
  }

  return *this;
}*/

void SList::append(int value) {
  Node *newNode = new Node(value);

  if (isEmpty()) {
    head = newNode;
    return;
  }

  // Traverse the list to the last node
  Node *current = head;
  while (current->hasNext()) {
    current = current->getNext();
  }

  // Append new node to the last node
  current->setNext(newNode);
}

void SList::clear() {
  // Calling the destructor for the head node will in turn call the
  // destructor for each node in the list
  delete head;
  head = 0;
}

void SList::printContents() {
  if (isEmpty()) {
    std::cout << "Empty List" << std::endl;
    return;
  }

  Node *current = head;
  do {
    std::cout << current->getValue() << std::endl;
    current = current->getNext();
  } while (current != 0);
}

