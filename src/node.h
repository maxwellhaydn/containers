// Node class for a linked list

class Node {
  public:
    /**
     * Default constructor.
     *
     * @param v the value to be stored in this node
     */
    Node(int v = 0) : next(0), value(v) { }

    /**
     * Destructor.
     */
    ~Node();

    /**
     * Set the next pointer of this node.
     *
     * @param n the next node
     */
    void setNext(Node *n) { next = n; }

    /**
     * Set the value of this node.
     *
     * @param v the value
     */
    void setValue(int v) { value = v; }

    /**
     * Get the next pointer of this node.
     *
     * @return the next pointer
     */
    Node* getNext() const { return next; }

    /**
     * Get the value of this node.
     *
     * @return the value
     */
    int getValue() const { return value; }

    /**
     * Whether this node's next pointer points to another node (i.e. has a
     * non-null next pointer).
     *
     * @return whether the next pointer is non-null
     */
    bool hasNext() const { return next != 0; }

  private:
    Node *next;
    int value;  // int for now, will be templated later
};

