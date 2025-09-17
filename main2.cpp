#include <iostream>
using namespace std;

int main() {
    string nome;
    int idade;
    float altura;
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Digite sua idade: ";
    cin >> idade;
    cout << "Digite sua altura (em metros): ";
    cin >> altura;
    cout << "Olá, " << nome << "! Você tem " << idade << " anos e sua altura é " << altura << " metros." << endl;
    cout << (idade > 18 ? "Você é maior de idade." : "Você é menor de idade.") << endl;

    if(idade < 18){
        cout << "Você é menor de idade." << endl;
    }else if(idade >= 18 && idade < 21){
        cout << "Você é maior de idade." << endl;
    }else if(idade >=21 && idade < 65){
        cout << "Voce pode beber." << endl;
    }else if(idade >=65 && idade < 100){
        cout << "Você é idoso." << endl;
    }else if(idade >= 100 && idade < 120){
        cout << "Você é centenário." << endl;
    }else{
        cout << "Você está vivo" << endl;
    }

    return 0;
}
