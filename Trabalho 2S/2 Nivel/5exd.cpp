#include <iostream>
using namespace std;
int main()
{
float tempc = 0;
float tempf = 0;
float tempk = 0;
cout << "escreva a temperatura em Fahrenheit: ";
cin >> tempf;
tempc =  (( tempf - 32 ) * 5) / 9;
tempk =  tempc + 273.15;
cout << "a temperatura convertida é " << tempk;
}
