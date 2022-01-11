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
        
        // Returns number of data elements in the list
        int size() {
            return numNodes;
        }

        // Boolean returns true if empty
        bool empty() {
            return numNodes == 0;
        }
};

#endif
