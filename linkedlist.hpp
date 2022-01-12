#ifndef LINKEDLIST
#define LINKEDLIST

#include <iostream>

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
        node<T> * tail;
        
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
                tail = head;
                return;
            }
            node<T> * tmp = new node<T>;
            tmp->data = value;
            tmp->next = head;
            head = tmp;
            numNodes++;
            return;
        }

        // Adds node at the end of LinkedList
        void push_back(T value) {
            if (numNodes == 0) {
                head = new node<T>;
                head->data = value;
                numNodes++;
                tail = head;
                return;
            }

            node<T> * tmp = new node<T>;
            tmp->data = value;
            tail->next = tmp;
            tail = tmp;
            numNodes++;
            return;
        }

        // Remove front node and return its value
        T pop_front() {
            if (numNodes == 0) {
                std::cout << "ERROR: List is empty." << std::endl;
                return -1;
            }
            T val = head->data;
            node<T> * tmp = head;
            head = head->next;
            numNodes--;
            delete tmp;
            return val;
        }

        T pop_back() {
            if (numNodes == 0) {
                std::cout << "ERROR: LinkedList is empty." << std::endl;
            }
            else if (numNodes == 1) {
                T val = head->data;
                delete head;
                numNodes--;
                return val;
            }

            node<T> * tmp = head;
            while(!tmp->next->next) {
                tmp = tmp->next;
            }
            T val = tail->data;
            delete tail;
            tail = tmp;
            numNodes--;
            return val;
        }
};

#endif
