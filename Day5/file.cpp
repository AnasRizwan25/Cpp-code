#include <iostream>
using namespace std;

// int minNum(int num1, int num2){
//   if(num1 < num2){
//     cout << "Min Number: " << num1 << endl;
//   }else{
//     cout << "Min Number: " << num2 << endl;
//   }
// }

// int total(int a){
//   int total = 0;
//   for(int i = 1;i<=a;i++){
//     total+=i;
//   }
//   return total;
// }

// int factorial(int a){
//   int fac = 1;
//   for(int i = 1;i<=a;i++){
//     fac*=i;
//   }
//   return fac;
// }

  // int digit(int a){
  //   int total = 0;

  //   while(a > 0){
  //     int x = a%10;
  //     a /= 10;
  //     total+=x;

  //   }
  //   return total;
  // }

//   int mial(int n){
//   int f = 1;

//   for(int i = 1;i <=n;i++){
//     f*=i;
//   }
//   return f;
// }
// int nCr(int n, int r){
//   int fa = mial(n);
//   int fr = mial(r); 
//   int fnr = mial(n-r); 

//   return fa/(fr*fnr);
// }

// string prime(int n){
//   int count = 0;
//   string final = "";
//   for(int i = 1;i<=n;i++){
//     if(n%i==0){
//       count++;
//     }
//   }
//   if(count == 2){
//     final = "prime Number";
//   }else{
//     final = "Composite Number";
//   }

//   return final;
// }

// int primeAll(int n){
//   int i,j;

//   for(i = 2; i<=n; i++){

//     for(j = 2; j<=(i/2); j++){
      
//       if(i%j==0){
//         j = i;
//         break;
//       }
//     }
//     if(j != i) {
//           cout << i << " ";
//       }
//   }
// }


int fibo(int n){

  int a = 0;
  int b = 1;
  int sum = 0;

  for(int i = 0; i < n; i++){
    sum = a+b;
    cout << a << " ";
    a = b;
    b = sum;
  }
}
int main(){   
  fibo(15);
  return 0; 
}