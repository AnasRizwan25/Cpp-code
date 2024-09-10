#include <iostream>
using namespace std;

// int main(){
//   int a = 5, b = 10;
//   int sum = a++ + ++b - --a + b-- + ++a - --b;

//   cout << sum << endl;
//   return 0;
// }


int main(){
  int a,b;

  cout << "Enter a: ";
  cin >> a;

  cout << "Enter b: ";
  cin >> b;

  int sum = a*b;

  cout << "Sum of Two Numbers: " << sum << endl;
  return 0;
}
