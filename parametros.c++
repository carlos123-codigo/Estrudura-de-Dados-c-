// Função com parametros 
// Exemplo 1  -Construa uma função que receba valores que correspondem ao caracter e à quantidade de vezes que se deseja exibi-lo.

#include <iostream>
using namespace std;
void linha (char c, int n);
int main()
{
    cout<<"\nESTACIO\n";
    linha('=' , 7);
    cout<<"\nEstruturas de Dados\n";
    linha('*' , 19);
    cout<<"\nEnsino a Distancia\n";
    linha('@' , 18);
    cout<<"\n\n";
    system ("pause");
    return 0;
}
void linha(char c, int n )
{
    for(int x=1; x<=n; x++)
    cout<<c;
}