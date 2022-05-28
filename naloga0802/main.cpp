#include <iostream>
#include "LinkedList.h"
int main() {
    LinkedList<int> list;
    std::cout << "List " << (list.isEmpty() ? "IS" : "IS NOT") << " empty." << std::endl << std::endl;
    list.add(1);
    list.add(2);
    list.add(3);
    list.printList();
    list.removeAt(1);
    std::cout<<"Value at index: 0: "<<list.at(0)<<std::endl;
    std::cout<<"Value at index: 1: "<<list.at(1)<<std::endl;
    std::cout<<"Value at index: 2: "<<list.at(2)<<std::endl;

    std::cout<<"Size of linked list: "<<std::to_string(list.getSize())<<std::endl;
    return 0;
}
