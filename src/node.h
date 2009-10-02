// Node class for a linked list

class Node {
  public:
    /* Default constructor */
    Node(int v = 0) : next(0), value(v) { }

    /* Destructor */
    ~Node();

    /* Modifiers */
    void setNext(Node *n) { next = n; }
    void setValue(int v) { value = v; }

    /* Accessors */
    Node* getNext() const { return next; }
    int getValue() const { return value; }

    bool hasNext() const { return next != 0; }

  private:
    Node *next;
    int value;  // int for now, will be templated later
};

