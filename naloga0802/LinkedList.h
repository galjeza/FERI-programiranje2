//
// Created by galje on 4/25/2022.
//

#ifndef NALOGA0802_LINKEDLIST_H
#define NALOGA0802_LINKEDLIST_H

#include <iostream>
#include "Node.h"
template<typename T>
class LinkedList {
    Node<T> * head = nullptr;
public:
    bool isEmpty() const{return head== nullptr;};
    int getSize() const{
        int count =0;
        Node<T> * current = head;
        while(current!=nullptr){
            count++;
            current = current->getNext();
        }
        return count;
    };
    void add(T v){
        if(head==nullptr){
            head = new Node<T>(v);
        }else{
            Node<T> * current = head;
            while(current->getNext()!=nullptr){
                current = current->getNext();
            }
            current->setNext(new Node<T>(v));
        }

    };
    T at(unsigned int index) const{
      int counter =0;
      Node<T> * current = head;
      while(counter<index){
        current = current->getNext();
        counter = counter +1;
      };
      return current->getvalue();
    };
    void printList() const{
        Node<T> * current = head;
        while(current!=nullptr){
            std::cout<<current->getvalue()<<"->";
            current = current->getNext();
        }
        std::cout<<"\n";
    };

    void removeAt(int index){
        if (head == nullptr)
            return;
        Node<T>* temp = head;
        if (index == 0) {
            head = temp->getNext();
            delete temp;
            return;
        }

        for (int i = 0; temp != nullptr && i < index - 1; i++)
            temp = temp->getNext();
        if (temp == nullptr || temp->getNext() == nullptr)
            return;

        Node<T> * next = temp->getNext()->getNext();
        delete temp->getNext();
        temp->setNext(next);
    }

    ~LinkedList(){
        Node<T> * current = head;
        Node<T> * nextCurr = nullptr;
        while(current!=nullptr){
            nextCurr = current->getNext();
            delete current;
            current = nextCurr;
        }
        head = nullptr;
    };
};

#endif //NALOGA0802_LINKEDLIST_H
