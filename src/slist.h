// Singly-linked list

#include "node.h"

class SList {
  public:
    /* Default constructor */
    SList() : head(0) { }

    /* Copy constructor */
    SList(const SList& other);

    /* Destructor */
    ~SList();

    /* Assignment operator */
    SList& operator=(const SList& other);

    Node *getHead() const { return head; }
    bool isEmpty() const { return head == 0; }

  private:
    Node *head;
};
