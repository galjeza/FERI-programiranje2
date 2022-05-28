//
// Created by galje on 3/19/2022.
//

#ifndef NALOGA0302_TEXTUTILITY_H
#define NALOGA0302_TEXTUTILITY_H
#include <string>

class TextUtility {
private:
    TextUtility() = default;
public:
    static std::string capitalize(const std::string &str);
    static std::string toUpperCase(const std::string &str);
    static bool isNumeric(const std::string &str);
    static bool isAlphabetic(const std::string &str);
    static int contains(const std::string &str,const std::string &substr);
    static int countWords(const std::string &str);
    static std::string reverse(const std::string &str);


};


#endif //NALOGA0302_TEXTUTILITY_H
