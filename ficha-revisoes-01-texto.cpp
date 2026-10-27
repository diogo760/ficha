#include <iostream>

using namespace std;


int main () {

  string nome, localidade, genero;
  string mensagem;
  int idade;
  string idadet;

  cout << "diz me o teu nome:";
  cin >> nome;
  cout << "\ndiz me a tua idade:";
  cin >> idade;
  cout << "\ndiz me a tua localidade:";
  cin >> localidade;
  cout << "\ndiz me o teu genero (M-masculino, F-feminino):";
  cin >> genero;

    if (genero == "M"){

    genero = "Caro sr. ";


    }else if (genero=="F"){

    genero = "Cara Sra. ";

    }

    if (idade>=18){

    idadet = " es maior de idade ";


    }else if(idade<18){

    idadet = " es menor de idade ";
   }
   mensagem = genero + nome+ idadet+ "e moras em "+ localidade;

   cout << mensagem;




    return 0;
}
