#include <iostream>
using namespace std;
#define LINHAS 9
#define COLUNAS 9

enum estado{
	AGUA,
	BARCO,
	ERRO,
	ACERTO
	
	
};
void mostrar_tabuleiro(int tabuleiro[LINHAS][COLUNAS] );
void adicionar_barco(int tabuleiro [LINHAS][COLUNAS], int tamanho);


int main()
{
	//criar o tabuleiro
	int tabuleiro [LINHAS][COLUNAS];	
	
	//preencher o tabuleiro
	//se for 0 é água
	//se for 1 é barco
	for(int lin = 0; lin < LINHAS; lin++)
	{
		for(int col = 0; col < COLUNAS; col++)
		{
			//0:agua 1:barco
			tabuleiro[lin][col] = 0;	
			
		}
	} 
	
		//ADICIONAR OS BARCOS
		int tamanho = 5;
		adicionar_barco( tabuleiro, tamanho );
		
		
		
		
	//marcação de cima
	//mostrar tabuleiro em tela
	mostrar_tabuleiro( tabuleiro);
}

void mostrar_tabuleiro(int tabuleiro[LINHAS][COLUNAS] )
{
	cout << "    1  2  3  4  5  6  7  8  9 " << endl;
	cout << endl;
	//mostrar o tabuleiro em tela
	
	for(int lin = 0; lin < LINHAS; lin++)
	{
		cout << " " << lin+1 << " ";
		for(int col = 0; col < COLUNAS; col++)
		{
			switch( tabuleiro[lin][col]){
				case AGUA:
					cout << " ~ ";
					break;
				case BARCO:
					cout << " B ";
					break;
				case ERRO:
					cout << " X ";
					break;
				case ACERTO:
					cout << " O ";
					break;		
			}	
		}
		
		cout << endl;
	}
	
}

void adicionar_barco(int tabuleiro [LINHAS][COLUNAS], int tamanho) 
{
		
	int pos_linha, pos_coluna;
		cout << " Adicionando Barcos " << endl;
		cout << " digite a linha:[1 até 9] " << endl;
		cin >> pos_linha;
		cout << " digite a coluna:[1 até 9] " << endl;
		cin >> pos_coluna;
			
		if(pos_linha >= 1 && pos_linha <= 9 &&
		   pos_coluna >= 1 && pos_coluna <= 9 )	
		{
		
			
			for (int aumento = 0; aumento < tamanho; aumento++)
			{
					tabuleiro[pos_linha-1][pos_coluna-1+aumento] = BARCO;
				
			}
			cout << " Adicionado " << endl;
		
		
		}
	    else
	    {
	    	cout << " Erro: pos invalido " << endl;
		}
}
