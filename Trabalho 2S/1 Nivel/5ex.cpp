#include <iostream>
using namespace std;
int main()
{
int num = 0;
int num1 = 0;
int res = 0;
cout << "escreva um valor";
cin >> num;
cout << "escreva um valor";
cin >> num1;
res = num + num1;

if (res > 20) {
  cout << res + 8;
}
if (res <= 20) {
  cout << res - 5;
}

}
