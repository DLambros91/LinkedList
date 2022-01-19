#include "linkedlist.hpp"
#include <iostream>

int main () {
    linkedlist<char> list;
    std::cout << list.size() << std::endl;
    list.push_front('c');
    list.push_front('d');
    list.push_front('e');
    std::cout << "Value at the head of the list: " << list.front() << std::endl;
    std::cout << "Value at the tail of the list: " << list.back() << std::endl;
    std::cout << list.valueAt(1) << std::endl;
    list.push_back('f');
    std::cout << "Value at the head of the list: " << list.front() << std::endl;
    std::cout << "Value at the tail of the list: " << list.back() << std::endl;
    std::cout << list.size() << std::endl;
    std::cout << list.pop_front() << std::endl;
    std::cout << "Value at the head of the list: " << list.front() << std::endl;
    std::cout << "Value at the tail of the list: " << list.back() << std::endl;
    std::cout << list.pop_back() << std::endl;
    std::cout << list.size() << std::endl;
    std::cout << list.valueAt(1) << std::endl;

    std::cout << list.front() << std::endl;
    std::cout << list.back() << std::endl;

    list.insert(1, 'x');

    std::cout << "Value at the head of the list: " << list.front () << std::endl;
    std::cout << "Value in the middle of the list: " << list.valueAt (1) << std::endl;
    std::cout << "Value at the tail of the list: " << list.back () << std::endl;

    return 0;
}
