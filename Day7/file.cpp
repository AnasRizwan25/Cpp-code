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



// int main() {
//   int n, i;
//   // reading value of n from user
//   cin >> n;
//   i = n;

//   if (i > 0) {
//     // continously divide i if it is even
//     while (i % 2 == 0) {
//       i = i / 2;
//     }

//     // check if n is a power of 2
//     if (i == 1) {
//       cout << n << " is a power of 2";
//     } else {
//       cout << n << " is not a power of 2";
//     }

//   } 

//   else{
//     cout << "Enter a valid positive number";
//   }
//   return 0;
// }

// int main(){
  
//   int i = 6;

//   if(i>0){
//     while(i % 2 == 0){
//       i = i / 2;
//     }

//     if(i == 1){
//       cout << "a power of 2";
//     }else{
//       cout<< "not a power of 2";
//     }
//   }
//   else{
//     cout << "Enter a valid positive number";
//   }
  
//   return 0;
// }

int main(){

  int n = 6;

  if((n & (n-1)) == 0 ) {
    cout << "Power of two";
  }else{
    cout << "not power of two";
  }
  return 0;
}