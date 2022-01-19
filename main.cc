#include "linkedlist.hpp"
#include <iostream>

int main () {
    linkedlist<char> list;
    std::cout << list.size() << std::endl;
    list.push_front('c');
    list.push_front('d');
    list.push_front('e');

    list.displayList ();

    std::cout << "Value at the head of the list: " << list.front() << std::endl;
    std::cout << "Value at the tail of the list: " << list.back() << std::endl;
    std::cout << list.valueAt(1) << std::endl;
    list.push_back('f');
    list.displayList ();

    std::cout << "Value at the head of the list: " << list.front() << std::endl;
    std::cout << "Value at the tail of the list: " << list.back() << std::endl;
    std::cout << list.size() << std::endl;
    std::cout << list.pop_front() << std::endl;
    list.displayList ();
    std::cout << "Value at the head of the list: " << list.front() << std::endl;
    std::cout << "Value at the tail of the list: " << list.back() << std::endl;
    std::cout << list.pop_back() << std::endl;
    list.displayList ();
    std::cout << list.size() << std::endl;
    std::cout << list.valueAt(1) << std::endl;

    std::cout << list.front() << std::endl;
    std::cout << list.back() << std::endl;
    

    list.insert(1, 'x');

    std::cout << "Value at the head of the list: " << list.front () << std::endl;
    std::cout << "Value in the middle of the list: " << list.valueAt (1) << std::endl;
    std::cout << "Value at the tail of the list: " << list.back () << std::endl;


    list.erase (1);

    //list.displayList ();
    list.displayList ();

    std::cout << "Value at the 1st position from the last node is: " << list.value_n_from_end(1) << std::endl;

    list.push_back('c');
    list.push_front('d');
    list.push_back('e');
    list.push_front('g');
    list.push_back('x');
    list.push_front('e');

    list.displayList();

    list.remove_value ('e');

    list.displayList();

    list.remove_value ('c');

    list.displayList();
    
    return 0;
}
