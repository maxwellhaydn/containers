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
    void setNext(Node *n);

    /**
     * Set the value of this node.
     *
     * @param v the value
     */
    void setValue(int v);

    /**
     * Get the next pointer of this node.
     *
     * @return the next pointer
     */
    Node* getNext() const;

    /**
     * Get the value of this node.
     *
     * @return the value
     */
    int getValue() const;

    /**
     * Whether this node's next pointer points to another node (i.e. has a
     * non-null next pointer).
     *
     * @return whether the next pointer is non-null
     */
    bool hasNext() const;

  private:
    Node *next;
    int value;  // int for now, will be templated later
};

/* Inline function definitions */
inline void Node::setNext(Node *n) {
  next = n;
}

inline void Node::setValue(int v) {
  value = v;
}

inline Node* Node::getNext() const {
  return next;
}

inline int Node::getValue() const {
  return value;
}

inline bool Node::hasNext() const {
  return next != 0;
}

