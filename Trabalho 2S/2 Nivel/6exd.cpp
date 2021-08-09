#include <iostream>
using namespace std;
int main()
{
int num = 0;
int nump = 0;
cout << "escreva um valor";
cin >> num;
if (num < 0) {
   nump = num * -1;
   cout << nump;
}
else {
  cout << num;
}
}
