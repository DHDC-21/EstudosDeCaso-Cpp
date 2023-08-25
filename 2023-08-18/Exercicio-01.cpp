#include <iostream>
#include <vector>   //biblioteca para usar vetores, muito usado para melhor gerenciamento de vetores.
#include <string>

using  namespace std; //serve para nao precisar usar o std no inicio das linhas

int main() {
    vector <string> nome {"Jinx","Senna","Samira","Caitlyn","MissFortune","Sivir","Zeri","Nilah","Ashe","KaiSa"};
    for(int i = 0; i < 10; i++){
        for(int j = 0; j<10; j++){
            if(nome[j]>nome[i]){
                swap(nome[i],nome[j]);
            }
        }
    }
    for(int i=0; i<10; i++){
        cout << nome[i] << endl;
    }
}