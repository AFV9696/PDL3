/*

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/


#include <iostream>

using namespace std;

bool esPrimo (unsigned long long int n);


int main(){

    
    const unsigned long long N = 600851475143;
          unsigned long long int masGrande;

        
        for (unsigned long long int i = 2; i < N; i++){

            if (esPrimo(i) && N%i == 0)

                masGrande = i;
        }

    cout << masGrande;

    return 0;
        

    }
    
    
    
    bool esPrimo(unsigned long long int n){ 

            unsigned long long int i = 2;
            

        while (n > i && n % i != 0)

            i++;

        return i >= n;

    }
