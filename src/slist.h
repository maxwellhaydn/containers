// Singly-linked list

#include "node.h"

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
    SList(const SList& other);

    /**
     * Destructor.
     */
    ~SList();

    /**
     * Assignment operator.
     *
     * @param other the list to assign from
     */
    //SList& operator=(const SList& other);

    /**
     * Append an item to the end of the list.
     *
     * @param value the value of the item to append
     */
    void append(int value);

    /**
     * Remove all items from the list.
     */
    void clear();

    /**
     * Check whether the list is empty.
     *
     * @return whether the list is empty
     */
    bool isEmpty() const { return head == 0; }

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
    Node *getHead() const { return head; } // Maybe this should be protected?

    Node *head;
};
