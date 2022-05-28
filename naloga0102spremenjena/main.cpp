#include <iostream>
#include <ctime>
#include <random>
#include <iomanip>

using namespace std;

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
    cout << "7...  PRINT GRAPH" << endl;
    cout << "0 ... EXIT" << endl;
    cout << "============================" << endl;
    cout << "Select: ";
}

float averageIntake(const float *array, const unsigned int size) {
    float sum = 0;
    for (unsigned int i = 0; i < size; i++) {
        sum += array[i];
    }
    cout << "Average intake per day: " << setprecision(2) << sum / (float) size << " l" << endl;
    return sum / (float) size;
}

void daysBellowAverageIntake(const float *array, const unsigned int size) {
    int count = 0;
    float average = averageIntake(array, size);
    for (int i = 0; i < size; i++) {
        if (array[i] < average) {
            count++;
        }
    }
    cout << "Days bellow average intake: " << count << endl;
}

void biggestWaterIntake(const float *array, const unsigned int size) {
    float biggestIntake;
    for (int i = 0; i < size; i++) {
        if (array[i] > biggestIntake) {
            biggestIntake = array[i];
        }
    }
    cout << "Biggest intake of watter per day: " << setprecision(2) << biggestIntake << endl;
}

void optimalWaterIntakeDays(const float* array, const unsigned int size){
    int count =0;
    for(int i=0;i<size;i++){
        if(array[i]<2.5&&array[i]>2.0){
            count++;
        }
    }
    cout<<"Number of days with optimal water intake: "<<count<<"."<<endl;



}

float randomFloat(float min, float max) {
    int minInt = min * 10;
    int maxInt = max * 10;
    int randomInt = minInt + (rand() % (maxInt - minInt + 1));
    return (float) (randomInt / 10.0);
}

void fillArray(float *array, const unsigned int size) {
    for (unsigned int i = 0; i < size; i++) {
        array[i] = randomFloat(1, 6.5);
    }
}

void printArray(const float *array, const unsigned int size) {
    for (unsigned int i = 0; i < size; i++) {
        cout << ((i > 0) ? ", " : "") << array[i];
    }
}
void printGraph(const float  *array,const unsigned int size){
    for(int i=0;i<size;i++){
        if(array[i]<2){
            cout<<"-";
        }
        if(array[i]>=4){
            cout<<"+";
        }
        if(array[i]>=2&&array[i]<4){
            cout<<"0";
        }
    }
    cout<<endl;
}

int main() {
    const unsigned int days = 30;
    float *waterIntakes = new float[days];

    srand(time(nullptr));

    bool running = true;
    int selection;

    do {
        menu();
        cin >> selection;
        switch (selection) {
            case 1:
                fillArray(waterIntakes, days);
                break;
            case 2:
                printArray(waterIntakes, days);
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
                printGraph(waterIntakes, days);
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

    delete[] waterIntakes;

    return 0;
}