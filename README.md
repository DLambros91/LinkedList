# LinkedList

## Description
Implementation of LinkedList data structure. LinkedList is implemented using templates, so the nodes is able to store any datatype.

For example, initializing a LinkedList of characters can be done as:

```linkedlist<char> list;```

Further, the list contains both a head node pointer ```node<T> * head``` and a tail node pointer ```node<T> * tail``` to assist with node access. 

## Space 
Space needed = (number of nodes which is = N) * item size resulting * size of node pointer which is O(N). 

## API

| Method      | Run Time        | Description|
| ----------- | --------------- | --------- |
| size ()                           | O(1) | Returns the number of nodes in the list | 
| empty ()                          | O(1) | Determines if the LinkedList is empty | 
| valueAt (index: int)              | O(N) | Returns the value of the nth node (starting at 0 for first, returns error if out of bounds |
| push_front (value: object)        | O(1) | Adds a node to the front of the list |
| push_back (value: object)         | O(1) | Adds a node to the end of the list |
| pop_front ()                      | O(1) | Removes front node from list and returns its value, returns error if list is empty |
| pop_back ()                       | O(N) | Removes tail node from list and returns its value, returns error if list is empty |
| front ()                          | O(1) | Returns the value stored in the head of the LinkedList, returns error if list is empty |
| back ()                           | O(1) | Returns the value stored in the tail of the LinkedList, returns error if list is empty |
| insert (index: int, value: object)| O(N) | Inserts node at given index in the linkedlist, so the current node at that index is pointed to by the new node at the index |
| erase (index: int)                | O(N) | Removes a node at provided index, returns error for invalid index |
| displayList ()                    | O(N) | Prints out the contents of the LinkedList |
| value_n_from_end (nth: int)       | O(N) | Returns the value of the node at the nth position from the end of the LinkedList, returns error for invalid index |
| remove_value (value: object)      | O(N) | Removes the first node in the LinkedList containing the provided value |
| reverse ()                        | O(N) | Reverses the LinkedList |
