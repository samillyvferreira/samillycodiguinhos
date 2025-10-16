#include <iostream>
#include <string> 
#include <climits>
#include <iomanip> 
using namespace std;

int main() 
{
string nome1,nome2; 
int idade1,idade2;
double salario1, salario2; 
char genero1, genero2;

cout << "Nome no primeiro funcionario: "<< endl;
getline(cin,nome1);
cout << "Idade no " << nome1 << endl;
cin >> idade1;
cout << "Salario de: " << nome1 << endl;
cin >> salario1;
cout << "Genero no primeiro funcionario: "  << nome1 << endl;
cin >> genero1;
cin.ignore(INT_MAX,'\n');
cout << "Nome no segundo funcionario: "<< endl;
getline(cin,nome2);
cout << "Idade no " << nome2 << endl;
cin >> idade2;
cout << "Salario de: " << nome2 << endl;
cin >> salario2;
cout << "Genero no segundo funcionario: "  << nome2 << endl;
cin >> genero2;

    cout << fixed << setprecision(2);
    cout << "O funcionario " << nome1 << ", do genero " << genero1 << ", tem " << idade1 << " anos e ganha R$ " << salario1 << "." << endl;
    cout << "O funcionario " << nome2 << ", do genero " << genero2 << ", tem " << idade2 << " anos e ganha R$ " << salario2 << "." << endl;
    return 0;
}