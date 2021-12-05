//Construa uma função que exiba uma menu com os seguintes itens.pilha, fila,lista,arbore,grafo.

#include <iostream>

using namespace std;

void menu(){

    system("cls");

  cout<<"\nMenu\n";

  cout<<"\n1-Pilha";

  cout<<"\n2-Fila";

  cout<<"\n3-Lista";  

  cout<<"\n4-Arvore";

  cout<<"\n5-Grafo";  

  cout<<"\n6-Sair";

  cout<<"\nOpcao: ";    
}

int main(){
    int op;
    cout<< "Escolha o opção desejada?";
    menu();
    cin>> op;
    switch(op){
        case 1:
        cout<< "vamos estudar Pilha\n";
        break;
        case 2:
        cout<< "vamos estudar fila\n";
        break;
        case 3:
        cout<< "vamos estudar Lista\n";
        break;
        case 4:
        cout<< "vamos estudar Arvore\n";
        break;
        case 5:
        cout<< "vamos estudar Grafo\n";
        break;
        case 6:
        cout<< "vamos estudar sair\n";
        break;
    }
}