#include <iostream>
using namespace std;
int main()
{
int comb = 0;
int temp = 0;
int vel = 0;
int dist = 0;
cout << "escreva o tempo gasto na viagem" << "\n";
cin >> temp;
cout << "escreva a velocidade da viagem" << "\n";
cin >> vel;
dist = temp * vel;
comb = dist / 12;

 cout << "a velocidade media é " << vel << "\n";
 cout << "o tempo gasto é " << temp << "\n";
 cout << "a distancia percorrida é " << dist << "\n";
 cout << "a quantidade de litros é " << comb << "\n";
}
