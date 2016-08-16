#include <iostream>
using namespace std;
#define LINHAS 9
#define COLUNAS 9
enum estado {
	AGUA,
	BARCO,
	ERROU,
	ACERTO
};
int main()


{
 //criar tabuleiro
	int tabuleiro [LINHAS][COLUNAS];
	
	//prencher tabuleiro
	for(int lin = 0; lin < LINHAS; lin++)
	{ for(int col = 0; col < COLUNAS; col++)
	{ 
	// 0 agua    1 barco
	tabuleiro[lin][col] = 0;
	
	
}

	}
		//// adicionar os barcos
	 tabuleiro[4][3] = 12;
	 tabuleiro[8][5] = 1;
	 tabuleiro[6][1] = 1;
	 tabuleiro[6][8] = 1;
//marcaçao de cima 
	cout <<    "    1  2  3  4  5  6  7  8  9 " << endl;
 	cout << endl;
	//mostra tabuleiro em tela
	
		for(int lin = 0; lin < LINHAS; lin++)
	{
			cout << " " << lin+1 << " ";
		
	 for(int col = 0; col < COLUNAS; col++)

	{ 
	
	if( tabuleiro[lin][col] == AGUA) cout << " ~ ";
	else if( tabuleiro[lin][col]== BARCO) cout << " B ";
	
	}
	cout << endl;
	
	}
	

}
