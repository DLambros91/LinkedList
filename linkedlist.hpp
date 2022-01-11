#ifndef LINKEDLIST
#define LINKEDLIST

template <typename T>

class node {
    public:
        T data;
        node * next;
};

class linkedlist {
    private:
        int numNodes;

    public:
        int size() {
            return numNodes;
        }
        
};

#endif
