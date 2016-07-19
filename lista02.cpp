#include <iostream>
using namespace std;

void maior_valor (int valor1, int valor2);

int main()
{
/*
Programa MAIOR VALOR.
O usuário digita dois valores e o programa diz qual é o maior.
Dicas: Você precisa enviar alguma informação para a função?
Dicas: Quais informações precisam ser passadas? (Não use variáveis globais!)
*/
int valor1, valor2;
cout << "Digite o primeiro valor:" << endl;
cin >> valor1;
cout << "Digite o segundo valor:" << endl;
cin >> valor2;
// ----- VERIFICA QUAL O MAIOR VALOR ENTRE valor1 E valor2 -----
 maior_valor(valor1, valor2);
// O bloco termina aqui.
}

void maior_valor (int valor1, int valor2)
{if (valor1 > valor2) cout << "O primeiro valor é maior que o segundo" << endl;
else if (valor2 > valor1) cout << "O segundo valor é maior que o primeiro" << endl;
else cout << "Os valores são iguais" << endl;

}


 
