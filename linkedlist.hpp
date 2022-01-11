#ifndef LINKEDLIST
#define LINKEDLIST

template <typename T>

class node {
    public:
        T data;
        node * next;
};

template <typename T>

class linkedlist {
    private:
        int numNodes;

    public:
        node<T> * head;
        
        // Default constructor
        linkedlist () {
            numNodes = 0;
        }

        // Returns number of data elements in the list
        int size() {
            return numNodes;
        }

        // Boolean returns true if empty
        bool empty() {
            return numNodes == 0;
        }

        // Returns the value of the nth item (starting at 0 for first)
        T valueAt (int index) {
            if (index < 0 || index > numNodes) {
                return -1;
            }
            else if (index == 0) { 
                return head->data;
            }
            
            node<T> * tmp = head;
            for (int i = 0; i < index; ++i) {
                tmp = tmp->next;
            }

            return tmp->data;
        }

        // Adds an item to the front of the list
        void push_front(T value) {
            if (numNodes == 0) {
                head = new node<T>;
                head->data = value;
                numNodes++;
                return;
            }
            node<T> * tmp = new node<T>;
            tmp->data = value;
            tmp->next = head;
            head = tmp;
            numNodes++;
            return;
        }
};

#endif
