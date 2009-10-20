// Singly-linked list

#include "node.h"

template <typename T>
class SList {
  public:

    /**
     * Default constructor. Constructs an empty list.
     */
    SList() : head(0) { }

    /**
     * Copy constructor.
     *
     * @param other the list to be copied
     */
    SList(const SList<T>& other);

    /**
     * Destructor.
     */
    ~SList();

    /**
     * Assignment operator.
     *
     * @param other the list to assign from
     */
    SList<T>& operator=(const SList<T>& other);

    /**
     * Append an item to the end of the list.
     *
     * @param value the value of the item to append
     */
    void append(T value);

    /**
     * Remove all items from the list.
     */
    void clear();

    /**
     * Check whether the list is empty.
     *
     * @return whether the list is empty
     */
    bool isEmpty() const;

    /**
     * Print the contents of the list to stdout in order from first to
     * last.
     */
    void printContents();

  private:
    /**
     * Get the head of the list (i.e. get the first node).
     * 
     * @return the head node
     */
    Node<T>* getHead() const;  // Maybe this should be protected?

    Node<T> *head;
};

template <typename T>
SList<T>::SList(const SList<T>& other) {
  head = 0;

  if (other.isEmpty()) {
    return;
  }

  Node<T> *current = 0;  // Pointer to the node being copied from other list
  Node<T> *last = 0; // Pointer to the last node added to this list

  // First copy head node of other list
  current = other.getHead();
  last = new Node<T>(current->getValue());
  head = last;

  // Traverse other list, copying each node along the way
  while (current->hasNext()) {
    current = current->getNext();
    last->setNext(new Node<T>(current->getValue()));
    last = last->getNext();
  }
}

template <typename T>
SList<T>::~SList() {
  // Calling the destructor for the head node will in turn call the
  // destructor for each node in the list
  delete head;
}

/*template <typename T>
SList& SList<T>::operator=(const SList& other) {
  // Check for self-assignment
  if (this != &other) {
        
  }

  return *this;
}*/

template <typename T>
void SList<T>::append(T value) {
  Node<T> *newNode = new Node<T>(value);

  if (isEmpty()) {
    head = newNode;
    return;
  }

  // Traverse the list to the last node
  Node<T> *current = head;
  while (current->hasNext()) {
    current = current->getNext();
  }

  // Append new node to the last node
  current->setNext(newNode);
}

template <typename T>
void SList<T>::clear() {
  // Calling the destructor for the head node will in turn call the
  // destructor for each node in the list
  delete head;
  head = 0;
}

template <typename T>
inline bool SList<T>::isEmpty() const {
  return head == 0;
}

template <typename T>
void SList<T>::printContents() {
  if (isEmpty()) {
    std::cout << "Empty List" << std::endl;
    return;
  }

  Node<T> *current = head;
  do {
    std::cout << current->getValue() << std::endl;
    current = current->getNext();
  } while (current != 0);
}

template <typename T>
inline Node<T>* SList<T>::getHead() const {
  return head;
}

