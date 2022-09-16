//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

//Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>

using namespace std;

int main() {

    int suma = 0;
        for(int i= 3; i<1000; i++){
            if (i%3 == 0 || i%5 == 0)
                suma += i;
        }
        cout << suma;

        return 0;
}

/*
#include <iostream>

using namespace std;

int main() {

    int suma1 = 0;
        for(int i= 3; i<100; i++){
            if (i%3 == 0)
                suma1 += i;
        }                                                     //No sale

    int suma2 = 0;
        for(int e = 5; e<100; e++){
            if (e%5 == 0)
                suma2 += e;
        }
    
    
    cout << suma1 + suma2;

        return 0;
}*/
