//
// Created by galje on 5/7/2022.
//

#ifndef NALOGA0901_SMARTPOINTER_H
#define NALOGA0901_SMARTPOINTER_H

template<typename T>
class SmartPointer {
private:
    T* pObject;
public:
    explicit SmartPointer(T *pObject) : pObject(pObject) {}
    ~SmartPointer() { delete (pObject); }
    T& operator*() {return *pObject;}
    T& operator->() {return pObject;}
};


#endif //NALOGA0901_SMARTPOINTER_H
