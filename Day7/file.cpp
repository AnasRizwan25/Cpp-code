#include <iostream>
using namespace std;

// int main(){

  //unsigned always +ve not -ve and signed either +ve or -ve 
  // unsigned int a = -6, b = 10;

  // cout << (a & b) << endl;
  // cout << (a | b) << endl;
  // cout << (a ^ b) << endl;
  // cout << (b << 2) << endl;
  // cout << (b >> 1) << endl;

  // cout << a << endl;

  // cout << sizeof(long long int) << endl;

  // return 0;}

// int main(){

//   int n = 123;
//   int rev = 0;
//   while (n > 0){ 
//     rev = rev * 10 + n % 10;
//     n /= 10;
//   }
//   cout << rev << endl;

//   return 0;
// }

int main(){

  int n = 34;

  for(int i = 1; i <= n; i++){
    if( n / i == i*2){
      cout << "Power of 2";
      break;
    }
    else{
      cout << i << endl;
      cout << "NO" << endl;
    }
  }
  
  return 0;
}
