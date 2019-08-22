#include <iostream>

using namespace std;

int main() {
    int limiteInferior;
    int limiteSuperior;
    int cycleLength = 0;
    int temp;
    int maxCycleLength = 0;

    while(cin>> limiteInferior >> limiteSuperior){
        cout << limiteInferior << " " << limiteSuperior << " ";
        if(limiteInferior > limiteSuperior){
            temp = limiteInferior;
            limiteInferior = limiteSuperior;
            limiteSuperior = temp;
        }
        for(int i = limiteInferior; i < limiteSuperior+1; i++){
            int Numero = i;
            while(Numero != 1){
                cycleLength++;
                if(Numero%2 == 0){
                    Numero = Numero/2;
                }else{
                    Numero = 3*Numero + 1;
                }
            }
            cycleLength++;
            if(cycleLength > maxCycleLength){
                maxCycleLength = cycleLength;
            }
            cycleLength = 0;
        }

        cout <<maxCycleLength << "\n";
        maxCycleLength=0;
    }


    return 0;
}
