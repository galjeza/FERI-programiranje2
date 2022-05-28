//
// Created by galje on 4/19/2022.
//

#ifndef NALOGA0702_VECPRINTUTIL_H
#define NALOGA0702_VECPRINTUTIL_H
#include <iostream>
#include <algorithm>
#include "ColorCode.h"
#include "PrintUtility.h"
#include <vector>


int randNum(int min, int max) {
    int randnum = rand() % max + min;
    return randnum;
}

template<ColorCode clr = ColorCode::Green, typename T>
void printColor(std::vector<T *> vector) {
    for (int i = 0; i < vector.size(); ++i) {
        PrintUtility::print(clr, vector[i]->toString());
        std::cout << std::endl;
    }
}

template<int n, typename T>
std::vector<std::vector<T>> slice(std::vector<T> vec) {
    std::vector<std::vector<T>> output;
    std::vector<T> sliceVector;
    int count = 0;
    int i;
    while (count < vec.size()) {
        sliceVector.clear();
        i = 0;
        while (i < n && count < vec.size()) {
            sliceVector.push_back(vec[count]);
            i++;
            count++;
        }
        output.push_back(sliceVector);
    }
    return output;
}

std::string getCensoredWord(std::string s) {
    std::string str;
    for (int i = 0; i < s.length(); i++) {
        str += "*";
    }
    return str;
}

template<typename T>
void printWithoutWhiteSpace(T obj) {
    std::string res;
    res += obj.toString();
    res.erase(remove(res.begin(), res.end(), ' '), res.end());
    std::cout << res << "\n";
}

template<typename T>
std::string toSafeString(std::vector<T> objects, const std::vector<std::string> &badWords) {
    std::string string;
    for (int i = 0; i < objects.size(); i++) {
        string += objects.toString();
    }
    for (const auto &badWord: badWords) {
        while (string.find(badWord) != std::string::npos)
            string.replace(string.find(badWord), badWord.length(), getCensoredWord(badWord));
    }
    return string;
}



template<typename T>
void shuffleVector(std::vector<T> &vec) {
    int shuffles = randNum(5 * vec.size(), vec.size());
    for (int i = 0; i < shuffles; i++) {
        int m = randNum(0, vec.size());
        int k = randNum(0, vec.size());
        std::swap(vec[k], vec[m]);
    }
}

template<ColorCode clr = ColorCode::Green, typename T>
void printSelectedWordsInColor(const std::vector<T> vec, const std::vector<std::string> words) {
    std::string str;
    for (int i = 0; i < vec.size(); i++) {
        str += vec[i] + "\n";
    }
    int i = 0;
    std::cout << "\n";
    while (i < str.size()) {
        for (const auto &word: words) {
            if (str.substr(i, word.size()) == word) {
                PrintUtility::print(clr,word);
                i += word.size();
            } else {
                std::cout << str[i];
                i++;
            }
        }
    }
}




#endif //NALOGA0702_VECPRINTUTIL_H
