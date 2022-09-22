/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
#include <iostream>

using namespace std;

bool calcular(int num, int n) {
    if (n == 0) {
        return true;
    }
    return (num % n != 0) ? false : calcular(num, n-1);
}

int main() {
    int num = 20;
    int resultado = num;
    while (!calcular(resultado, num)) {
        resultado += num;
    }
    cout << resultado << '\n';
}