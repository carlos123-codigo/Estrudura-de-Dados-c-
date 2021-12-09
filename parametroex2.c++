//Construa uma função que receba valores que correspondem ao ano atual e ao ano de nascimento de uma pessoa, retornando a idade que a pessoa terá até 31 de dezembro.

#include <iostream>
using namespace std;
int descobreIdade (int anoAtual, int anoNas);
int mian()
{
    int anoA, anoN;
    cout<<"\nDigite ano atual;";
    cin>>anoA;
     cout<<"\nDigite ano de nascimento;";
    cin>>anoN;
     cout<<"\nVoce tera ate 31 de dezembro de "<<anoA<<" "<<descobreIdade(anoA, anoN)<<"anos";
    cout<<"\n\n";
    system ("pause"); 
    return 0;
}
int descobreIdade(int anoAtual, int anoNas)
{
  return anoAtual - anoNas;  
}