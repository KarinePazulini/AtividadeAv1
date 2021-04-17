#include <iostream>
#include <string>

using namespace std;
string termo;

int main() {
  cout << "Digite!\n";
  cin >> termo;

  int tecla; int qtde; int linha; int coluna;

  char letras [4][8]  = {{'a','d','g','j','m','p','t','w'}, {'b','e','h','k','n','q','u','x'}, {'c','f','i','l','o','r','v','y'}, {' ',' ',' ',' ',' ','s',' ','z'}};

  for(int t=0; t<size(termo);t++){
    if(termo[t] == ' '){
      cout << "Inválido"  << endl;
      break;
    }else{
      for(int linha=0;linha<4;linha++){
        for(int coluna=0;coluna<8;coluna++){
          if(termo[t] == letras[linha][coluna]){
            cout << "#" << tecla << "=" << qtde << endl;
          }
        }
      }
    }
  }

  return 0;
}