//
// Created by aluno on 25/08/2023.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

enum alfabeto {a = 1,
        b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z
};

enum chave{X=1,
    Z,N,L,W,E,B,G,J,H,Q,D,Y,V,T,K,F,U,O,M,P,C,I,A,S,R,x,z,n,l,w,e,b,g,j,h,q,d,y,v,t,k,f,u,o,m,p,c,i,a,s,r
};

int main(){
    string mensagem;
    cout << "Digite uma mensagem para ser criptografada:" << endl;
    getlien(cin, mensagem); // instrução para armazenar uma string, sem o erro dos espaços
}