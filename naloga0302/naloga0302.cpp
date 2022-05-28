#include <iostream>
#include "TextUtility.h"
int main() {
    std::string testString = "lorem ipsum dolor, adipiscing magna? facil isi 2.5 morbi tempus urna id. Gravida non tellus orci! molestieac sed lectus.";
    std::string numericString = "123123";
    std::cout<<testString<<std::endl;
    std::cout<<TextUtility::capitalize(testString)<<std::endl;
    std::cout<<TextUtility::toUpperCase(testString)<<std::endl;
    std::cout<<TextUtility::isNumeric(testString)<<std::endl;
    std::cout<<TextUtility::isNumeric(numericString)<<std::endl;
    std::cout<<TextUtility::contains("to je string","je")<<std::endl;
    std::cout<<TextUtility::contains("to je string","ni")<<std::endl;
    std::cout<<TextUtility::reverse("Hello world!")<<std::endl;
    std::cout<<TextUtility::isAlphabetic("Hello world")<<std::endl;
    std::cout<<TextUtility::isAlphabetic("Hello world1")<<std::endl;
    std::cout<<TextUtility::countWords("Hello my name is Gal");

    return 0;
}
