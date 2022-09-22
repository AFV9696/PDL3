# include <iostream>

using namespace std;

int main(){

    int contador = 2;
    int primo = 0;

    bool primEncontrado = true;

    for(int i = 3; contador <= 10001; i++){
        for (int e = 2; e < i; e++){

            primEncontrado = true;
            if(i % e == 0){

                primEncontrado = false;

                break;
            }

            if(contador == 10001){
                primo = i;
            }
        }
        if(primEncontrado == true){
            contador += i;
        }
    }
    cout << "El 10 001avo primo es: " << primo << endl;
}



