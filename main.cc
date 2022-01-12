#include "linkedlist.hpp"
#include <iostream>

int main () {
    linkedlist<char> list;
    std::cout << list.size() << std::endl;
    list.push_front('c');
    list.push_front('d');
    list.push_front('e');
    std::cout << list.valueAt(1) << std::endl;
    list.push_back('f');
    std::cout << list.size() << std::endl;
    std::cout << list.pop_front() << std::endl;
    std::cout << list.pop_back() << std::endl;
    std::cout << list.size() << std::endl;
    std::cout << list.valueAt(1) << std::endl;
    return 0;
}
