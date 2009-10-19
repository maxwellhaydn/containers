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
    //SList& operator=(const SList& other);

    void append(int value);

    bool isEmpty() const { return head == 0; }

    /* Print the contents of the list in order */
    void printContents();

  private:
    /* Get the head of the list */
    Node *getHead() const { return head; } // Maybe this should be protected?

    Node *head;
};
