// Node class for a linked list

class Node {
  public:
    /* Default constructor */
    Node() : next(0), value(0) { }

    Node(int v) : next(0), value(v) { }

    /* Copy constructor */
    Node(const Node& other);

    /* Destructor */
    ~Node();

    /* Assignment operator */
    Node& operator=(const Node& other);

  private:
    Node *next;
    int value;  // int for now, will be templated later
};

