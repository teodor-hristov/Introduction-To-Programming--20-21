#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int max(int a, int b);
int absolute(int number);
int pow(int num, int power);
int leastCommonDivisor(int a, int b);
int nThFibonacci(int n);
int isPrime(int n);
int aDivB(int a, int b);
double circleArea(unsigned radius);
unsigned input(unsigned n);
void print(unsigned n);

int main (){
    #pragma region task1
    // int a, b;
    // cin >> a >> b;

    // cout << max(a,b) << endl;
    #pragma endregion task1

    #pragma region task2
    // int n;
    // cin >> n;
    // cout << absolute(n);
    #pragma endregion task2

    #pragma region task3
    #pragma endregion task3

    #pragma region task4
    #pragma endregion task4

    #pragma region task5
    #pragma endregion task5

    #pragma region task6
    #pragma endregion task6

    #pragma region task7
    #pragma endregion task7


}

int max(int a, int b) {
    if(a > b){
        return a;
    } else {
        return b;
    }
}

int absolute(int a) { 
    if(a < 0) { 
        return -a;
    } else {
        return a;
    }
}

int pow(int num, int power) {
    int temp = 1;
    for(int i = 0; i < power; i++) {
        temp *= num;
    }
    
    return temp;
}

int leastCommonDivisor(int a, int b) {
    int maxNum = max(a,b);
    for(int i = 1; i <= maxNum; i++) {
        if((a % i == 0) && (b % i == 0)) {
            return i;
        }
    }

    return a*b;
}

int nThFibonacci(int n) {

}
int isPrime(int n);
int aDivB(int a, int b);
double circleArea(unsigned radius);
unsigned input(unsigned n);
void print(unsigned n);