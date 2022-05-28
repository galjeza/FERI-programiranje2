#include <iostream>
#include <string>
using namespace std;

int digitSum(int number){
    string stringNumber;int result,intDigit;
    stringNumber = to_string(number);
    result =0;
    for(int i=0; i < stringNumber.length(); i++){
        intDigit = (int)stringNumber[i] - 48;
        result += intDigit;
    }
    return result;
}

bool isPerfectNumber(int number){
    int divisorsSum = 0;
    for(int i=1;i<=number/2;i++){
        if(number%i==0){
            divisorsSum += i;
        }
    }
    return divisorsSum==number;
}

int countDivisors(int x){
    int count = 0;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            count++;
        }
    }
    return count;
}

int main() {
    int userInput,sum;
    userInput = -1;
    while(userInput<0){
        cout<<"Input a number: ";
        cin>>userInput;
    };
    sum = digitSum(userInput);
    cout<<endl<<"Sum of all digits in number "<<userInput<<" is "<<sum<<"."<<endl;

    if(isPerfectNumber(sum)){
        cout<<sum<<" is a perfect number.";
    }else{
        cout<<sum<<" is not a perfect number.";
    }
    cout<<"Divisor count for number "<<userInput<<" is "<<countDivisors(userInput)<<endl;


    return 0;
}
