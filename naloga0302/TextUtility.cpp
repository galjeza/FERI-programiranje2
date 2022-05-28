//
// Created by galje on 3/19/2022.
//

#include "TextUtility.h"

std::string TextUtility::capitalize(const std::string &str) {
    std::string capitalized = str;
    for(int i=0;i<capitalized.length();i++){
        if(isalpha(capitalized[i])){
            capitalized[i]= toupper(capitalized[i]);
            break;
        }
    }
    //capitalized[0] = toupper(capitalized[0]);
    for(int i=0;i<(capitalized.length()-1);i++){
        if(capitalized[i]=='.' || capitalized[i]=='!' ||capitalized[i]=='?'){
            for(int j=i;j<(capitalized.length());j++){
                if(isalpha(capitalized[j])){
                    capitalized[j]= toupper(capitalized[j]);
                    break;
                }
            }
        }
    }
    return  capitalized;

}

std::string TextUtility::toUpperCase(const std::string &str) {
    std::string  upperCase = str;
    for(int i=0;i<upperCase.length();i++){
        if(isalpha(upperCase[i])){
            upperCase[i] = toupper(upperCase[i]);
        }
    }
    return upperCase;
}

bool TextUtility::isNumeric(const std::string &str) {
    for(int i=0;i<str.length();i++){
        if(!isdigit(str[i])){
            return false;
        }
    }
    return true;
}

int TextUtility::contains(const std::string &str,const std::string &substr) {
    for(int i=0;i<=str.length() - substr.length();i++){
        int j;
        for(j=0;j<substr.length();j++){
            if(str[i+j]!=substr[j]){
                break;
            }
        }
        if(j==substr.length()){
            return i;
        }
    }
    return -1;
}

std::string TextUtility::reverse(const std::string &str) {
    std::string reversed;
    reversed.resize(str.length());
    for (int i=(str.length()-1);i>=0;i--){
        reversed[str.length()-i-1] = str[i];
    }
    return reversed;
}

bool TextUtility::isAlphabetic(const std::string &str) {
    for(int i=0;i<str.length();i++){
        if(!(isalpha(str[i])||(str[i]==' '))){
            return false;
        }
    }
    return true;
}

int TextUtility::countWords(const std::string &str) {
    int count =0;
    std::string word = "";
    for (auto x : str) {
        if (x == ' ' ||x == '.' ||x == '?'||x == '!' ||x == ',') {
            if(word.length()>=3){
                count++;
                word = "";
            }
        } else {
            word += x;
        }
    }
    if(word.length()>=3){
        count++;
    }
    return count;
}
