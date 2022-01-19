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

        // Removes tail node and returns the value in the node
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
            while(tmp->next->next) {
                tmp = tmp->next;
            }
            T val = tail->data;
            delete tail;
            tail = tmp;
            tail->next = NULL;
            numNodes--;
            return val;
        }

        // Get the value stored in the head node
        T front() {
            if (numNodes == 0) {
                std::cout << "ERROR: LinkedList is empty." << std::endl;
                return -1;
            }
            return head->data;
        }

        // Return the value stored in the tail of the LinkedList
        T back() {
            if (numNodes == 0) {
                std::cout << "ERROR: LinkedList is empty." << std::endl;
                return -1;
            }
            return tail->data;
        }

        void insert (int index, T val) {
            if (index < 0 || index > numNodes) {
                std::cout << "ERROR: Invalid index" << std::endl;
                return;
            } else if (index == 0) {
                push_front (val);
                return;
            } else if (index == numNodes) {
                push_back (val);
                return;
            }
            node<T> * iter = head;

            while (--index > 0) {
                iter = iter->next;
            }

            node<T> * newNode = new node<T>;
            newNode->data = val;
            newNode->next = iter->next;
            iter->next = newNode;
            numNodes++;
            return;
        }

        // Removes node at given index
        void erase (int index) {
            if (index < 0 || index >= numNodes) {
                std::cout << "ERROR: Invalid index provided." << std::endl;
                return;
            } else if (index == 0) {
                node<T> * tmp = head;
                head = head->next;
                delete tmp;
                numNodes--;
                return;
            }
            node<T> * iter = head;
            
            while (--index > 0) {
                iter = iter->next;
            }

            node<T> * tmp = iter->next;

            iter->next = iter->next->next;

            delete tmp;

            numNodes--;
            return;
        }

        // Displays contents of LinkedList
        void displayList () {
            node<T> * iter = head;
            
            while (iter != NULL) {
                std::cout << iter->data << " ";
                iter = iter->next;
            }

            std::cout << std::endl;
            return;
        }

        // Returns the value of the node at the nth position from the end of the list
        T value_n_from_end (int nth) {
            if (nth < 0 || nth >= numNodes) {
                std::cout << "ERROR: Invalid index provided." << std::endl;
                return 0;
            }

            return valueAt (numNodes-1-nth);
        }

        // Removes the first item in the list with the provided value
        void remove_value (T value) {
            node<T> * iter = head;

            if (iter->data == value) {
                head = head->next;
                numNodes--;
                delete iter;
                return;
            }

            // Go to the node right before the node containing desired value
            while (iter->next->data != value) {

                // If reached end of LinkedList, exit
                if (!iter) {
                    return;
                }

                // Iterate to next node
                iter = iter->next;
            }

            node<T> * tmp = iter->next;
            iter->next = iter->next->next;
            delete tmp;
            numNodes--;
            return;
        }
};

#endif
