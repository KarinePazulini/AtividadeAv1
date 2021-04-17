#include <iostream>
#include <string>

using namespace std;
string termo;
//termo vai receber a palavra desejada

int main() {
  cout << "Digite com no máximo 50 caracteres: \n";
  cin >> termo;

  int tecla; int qtde; int linha; int coluna;
  //Variavel tecla, é a qual deve ser pressionada
  //Variavel qtde, quantidade de vezes que deve ser pressionada

  char letras [4][8]  = {{'a','d','g','j','m','p','t','w'}, {'b','e','h','k','n','q','u','x'}, {'c','f','i','l','o','r','v','y'}, {' ',' ',' ',' ',' ','s',' ','z'}};

  for(int t = 0; t < size(termo); t++){
    if(size(termo) > 50){
      cout << "Termo inválido, tente novamente" << endl;
      break;
    }else{
      for(int linha = 0; linha < 4; linha++){
        for(int coluna = 0; coluna < 8; coluna++){
          if(termo[t] == letras[linha][coluna]){
            tecla = coluna+2; qtde = linha+1;
            cout << "#" << tecla << "=" << qtde << endl;
          }
        }
      }
    }
  }

  return 0;
}