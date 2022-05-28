//
// Created by galje on 4/25/2022.
//

#ifndef NALOGA0802_NODE_H
#define NALOGA0802_NODE_H

template<typename T>
class Node {
private:
    T value;
    Node * next;
public:
    Node(T value,Node * next = nullptr):value(value),next(next){};
    void setValue(T v){value=v;};
    void setNext(Node * n){next=n;};
    T getvalue() const{return value;};
    Node * getNext() const{return next;};
};


#endif //NALOGA0802_NODE_H
