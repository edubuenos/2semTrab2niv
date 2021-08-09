#include <iostream>
using namespace std;
int main()
{
float tempc = 0;
float tempf = 0;
cout << "escreva a temperatura em Fahrenheit: ";
cin >> tempf;
tempc =  (( tempf - 32 ) * 5) / 9;
cout << "a temperatura convertida é " << tempc;
}
