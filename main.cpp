#include <iostream>

using namespace std;

int contarCycle(int variable){
    int cycleLength = 0;
    while(variable != 1){
        cycleLength++;
        if(variable%2 == 0){
            variable = variable/2;
        }else{
            variable = 3*variable + 1;
        }
    }
    cycleLength++;
    return cycleLength;
}
int esMayor(int valor, int maximo){
    if(valor > maximo){
        return valor;
    }else{
        return maximo;
    }
}
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
        for(int i = limiteInferior; i < limiteSuperior+1; i++) {
            int Numero = i;
            cycleLength = contarCycle(Numero);
            maxCycleLength = esMayor(cycleLength, maxCycleLength);
        }

        cout <<maxCycleLength << "\n";
        maxCycleLength=0;}
    return 0;
}
