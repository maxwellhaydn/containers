// Singly-linked list

#include "node.h"

class SList {
  public:
    /* Default constructor */
    SList() : head(0) { }

    /* Copy constructor */
    //SList(const SList& other);

    /* Destructor */
    ~SList();

    /* Assignment operator */
    //SList& operator=(const SList& other);

    bool append(int value);

    bool isEmpty() const { return head == 0; }

  private:
    /* Get the head of the list */
    Node *getHead() const { return head; }

    Node *head;
};
