//
// Created by galje on 4/18/2022.
//

#ifndef NALOGA0701_VECTORUTIL_H
#define NALOGA0701_VECTORUTIL_H
#include <vector>
#include <iostream>
#include "Monitor.h"
#include <random>
#include <string>



template<int N, typename T>
void fillDefault(std::vector<T> &vec) {
    std::cout<<"Default\n";
    for (int i = 0; i < N; ++i) {
        vec.push_back(T());
    }
}

template<typename T>
std::vector<T> reverse(std::vector<T> vec) {
    std::vector<T> newVec(vec.size());
    for (int i = 0; i < vec.size(); ++i) {
        newVec[i] = vec[vec.size()-i-1];
    }
    return newVec;
}

template<typename T>
std::string toString(std::vector<T> vec) {
    std::string str = "";
    for (int i = 0; i < vec.size(); ++i) {
        str = str+ vec[i].toString()+", ";
    }
    str += "\n";

    return str;
}

template<typename T>
void print(std::vector<T> vec) {
    std::cout << toString(vec)<<"\n";

}

template<typename T>
std::vector<T> mergeLists(std::vector<std::vector<T>> vec){
    std::vector<T> result;
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            result.push_back(vec[i][j]);
        }
    }
    return result;
}

std::string mergeLists(std::vector<std::vector<std::string>> vec){
    std::string result;
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            result+=vec[i][j];
        }
    }
    return result;
}


int randomInteger(int min, int max){
    int i = rand() % max + min;
    return i;
}

template<int N>
void fillDefault(std::vector<Monitor> &vec) {
    for (int i = 0; i < N; ++i) {
        vec.push_back(Monitor(randomInteger(50,400), randomInteger(10,100)));
    }
}

#endif //NALOGA0701_VECTORUTIL_H
