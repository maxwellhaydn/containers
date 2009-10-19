// Implementation of a singly-linked list

#include "slist.h"

#include <iostream>

SList::SList(const SList& other) {
  // Initialize head
  head = 0;

  // If other list is empty, do nothing
  if (other.isEmpty()) {
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
  }
  else {
    // Find the last node in the list
    Node *current = head;
    while (current->hasNext()) {
      current = current->getNext();
    }

    // Append newNode to the last node
    current->setNext(newNode);
  }
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
  }
  else {
    Node *current = head;
    std::cout << current->getValue() << std::endl;

    while (current->hasNext()) {
      current = current->getNext();
      std::cout << current->getValue() << std::endl;
    }
  }
}

