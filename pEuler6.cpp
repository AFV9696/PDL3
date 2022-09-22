#include <iostream>

using namespace std;

int sumaCuadrados();
int cSuma();

int main() {


    cout << cSuma() << endl;
    cout << sumaCuadrados() << endl;
    cout << cSuma() - sumaCuadrados();

        return 0;
}

int sumaCuadrados(){

    int suma = 0;

    for (int i = 1; i <= 100; i++) {

        suma += i*i;
    }

    return suma;

}

int cSuma() {

    int suma = 0;

    for (int i = 1; i <= 100; i++){
    
        suma += i;

    }

    return suma * suma;
}