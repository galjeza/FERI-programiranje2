#include <iostream>
#include "ColorCode.h"
#include "PrintUtility.h"
#include <algorithm>
#include <vector>
#include "VecPrintUtil.h"


int main() {

    system(("chcp " + std::to_string(65001)).c_str());
    srand(time(nullptr));
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    shuffleVector(numbers);
    for (int number: numbers) {
        std::cout << number << ",";
    }
    std::cout << "\n";


    std::vector<std::vector<int>> splicedNumbers = slice<5>(numbers);
    for (auto &splicedNumber: splicedNumbers) {
        for (int j: splicedNumber) {
            std::cout << j << ", ";
        }
        std::cout << "|";
    }


    std::vector<std::string> besedila = {"Ime mi je gal", "Sem iz ptuja", "Testni string"};
    printSelectedWordsInColor<ColorCode::Red>(besedila, {"mi", "gal"});
    return 0;


}
