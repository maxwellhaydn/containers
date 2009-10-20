// Node class for a linked list

template <typename T>
class Node {
  public:
    /**
     * Default constructor.
     */
    Node() : next(0) { }

    /**
     * Construct a node with the given value.
     *
     * @param v the value to be stored in this node
     */
    Node(T v) : next(0), value(v) { }

    /**
     * Destructor.
     */
    ~Node();

    /**
     * Set the next pointer of this node.
     *
     * @param n the next node
     */
    void setNext(Node<T> *n);

    /**
     * Set the value of this node.
     *
     * @param v the value
     */
    void setValue(T v);

    /**
     * Get the next pointer of this node.
     *
     * @return the next pointer
     */
    Node<T>* getNext() const;

    /**
     * Get the value of this node.
     *
     * @return the value
     */
    T getValue() const;

    /**
     * Whether this node's next pointer points to another node (i.e. has a
     * non-null next pointer).
     *
     * @return whether the next pointer is non-null
     */
    bool hasNext() const;

  private:
    Node<T> *next;
    T value;
};

template <typename T>
Node<T>::~Node() {
  delete next;
}

template <typename T>
inline void Node<T>::setNext(Node<T> *n) {
  next = n;
}

template <typename T>
inline void Node<T>::setValue(T v) {
  value = v;
}

template <typename T>
inline Node<T>* Node<T>::getNext() const {
  return next;
}

template <typename T>
inline T Node<T>::getValue() const {
  return value;
}

template <typename T>
inline bool Node<T>::hasNext() const {
  return next != 0;
}

