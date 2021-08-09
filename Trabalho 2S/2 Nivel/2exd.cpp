#include <iostream>
using namespace std;
int main()
{
float tempc = 0;
float tempf = 0;
cout << "escreva a temperatura em celsius: ";
cin >> tempc;
tempf =  (9 * tempc + 160) / 5;
cout << "a temperatura convertida é " << tempf;
}
