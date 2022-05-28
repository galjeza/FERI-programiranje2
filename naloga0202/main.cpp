#include <iostream>
#include <vector>
#include <ctime>
#include <iomanip>
#include <random>
#include "WaterIntake.h"
using namespace std;

void increaseIntake(vector<WaterIntake*> v,float procentage){
    for(unsigned int i =0;i<v.size();i++){
        v[i]->setQuantity(v[i]->getQuantity()+v[i]->getQuantity()*(procentage/100));
    }
}

vector<WaterIntake*> getMoreThan(const vector<WaterIntake*> &waterIntakes,float limit){
    vector<WaterIntake *> aboveLimitIntakes;
    for(int i=0;i<waterIntakes.size();i++){
        if(waterIntakes[i]->getQuantity()>limit){
            aboveLimitIntakes.push_back(waterIntakes[i]);
        }
    }
    return aboveLimitIntakes;
}

void menu() {

    cout << "============================" << endl;
    cout << "=========== MENU ===========" << endl;
    cout << "============================" << endl;
    cout << "1 ... GENERATE WATER INTAKES" << endl;
    cout << "2 ... PRINT WATER INTAKES" << endl;
    cout << "3 ... PRINT AVERAGE WATER INTAKE" << endl;
    cout << "4 ... PRINT NUMBER OF DAYS BELLOW AVERAGE WATER INTAKE" << endl;
    cout << "5 ... PRINT BIGGEST WATER INTAKE PER DAY" << endl;
    cout << "6 ... PRINT NUMBER OF DAYS WITH OPTIMAL WATER INTAKE(2-2.5 l/day)" << endl;
    cout << "7 ... INCREASE ALL INTAKES BY 10%" << endl;
    cout << "8 ... DELETE ALL DAYS BELOW LIMIT OF 2l / day" << endl;
    cout << "0 ... EXIT" << endl;
    cout << "============================" << endl;
    cout << "Select: ";
}

float randomFloat(float min, float max) {
    std::random_device rd;
    int minInt = min * 10;
    int maxInt = max * 10;
    int randomInt = minInt + (rd() % (maxInt - minInt + 1));
    return (float) (randomInt / 10.0);
}

void optimalWaterIntakeDays(const vector<WaterIntake *> &waterIntakes, const unsigned int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (waterIntakes[i]->getQuantity() < 2.5 && waterIntakes[i]->getQuantity() > 2.0) {
            count++;
        }
    }
    cout << "Number of days with optimal water intake: " << count << "." << endl;
}


void biggestWaterIntake(const vector<WaterIntake *> &waterIntakes, const unsigned int size) {
    float biggestIntake;
    for (int i = 0; i < size; i++) {
        if (waterIntakes[i]->getQuantity() > biggestIntake) {
            biggestIntake = waterIntakes[i]->getQuantity();
        }
    }
    cout << "Biggest intake of watter per day: " << setprecision(2) << biggestIntake << endl;
}

float averageIntake(const vector<WaterIntake *> &waterIntakes, const unsigned int size) {
    float sum = 0;
    for (unsigned int i = 0; i < size; i++) {
        sum += waterIntakes[i]->getQuantity();
    }
    cout << "Average intake per day: " << setprecision(2) << sum / (float) size << " l" << endl;
    return sum / (float) size;
}

void daysBellowAverageIntake(const vector<WaterIntake *> &waterIntakes, const unsigned int size) {
    int count = 0;
    float average = averageIntake(waterIntakes, size);
    for (int i = 0; i < size; i++) {
        if (waterIntakes[i]->getQuantity() < average) {
            count++;
        }
    }
    cout << "Days bellow average intake: " << count << endl;
}

void fillVector(vector<WaterIntake *> &waterIntakes, const unsigned int size) {
    if (waterIntakes.empty()) {
        for (unsigned int i = 0; i < size; i++) {
            waterIntakes.push_back(new WaterIntake(3, 3, 2022, randomFloat(0.5, 3.5)));
        }
    } else {
        for (unsigned int i = 0; i < size; i++) {
            waterIntakes[i]->setQuantity(randomFloat(0.5, 3.5));
        }
    }

}

void printVector(const vector<WaterIntake *> &waterIntakes) {
    for (unsigned int i = 0; i < waterIntakes.size(); i++)
        cout << waterIntakes[i]->toString() << ((i < waterIntakes.size() - 1) ? ", " : ".") << std::endl;
}

int main() {
    const unsigned int days = 30;
    vector<WaterIntake *> waterIntakes;
    srand(time(nullptr));
    bool running = true;
    int selection;

    do {
        menu();
        cin >> selection;
        switch (selection) {
            case 1:
                fillVector(waterIntakes, days);
                break;
            case 2:
                printVector(waterIntakes);
                break;
            case 3:
                averageIntake(waterIntakes, days);
                break;
            case 4:
                daysBellowAverageIntake(waterIntakes, days);
                break;
            case 5:
                biggestWaterIntake(waterIntakes, days);
                break;
            case 6:
                optimalWaterIntakeDays(waterIntakes, days);
                break;
            case 7:
                increaseIntake(waterIntakes, 10.0);
                break;
            case 8:
                waterIntakes = getMoreThan(waterIntakes, 2.0);
                break;
            case 0:
                running = false;
                break;
            default:
                cout << "Wrong selection!" << endl;
                break;
        }
        cout << endl;
    } while (running);

    return 0;
}