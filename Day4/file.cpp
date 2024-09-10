#include <iostream>
using namespace std;
//****
//****
//****
//****

// int main(){
//   int n = 4;

//   for(int i = 0;i< n;i++){
//     for(int j = 0;j<n;j++){
//       cout << j+1 << " ";
//     }
//     cout << endl;
//   }
// cout << "" << endl;

//   for(int i = 0;i<n;i++){
//     char character = 'A';
//     for(char j = 0; j < n ;j++){
//       cout << character << " ";
//       character++;
//     }
//     cout << endl;
//   }
//   return 0;
// }

// 123
// 456
// 789

// int main(){
//   int n = 3;
//   int k = 1;
//   char alpha = 'A';

//   for(int i = 0;i<n;i++){
//     for (int j = 1; j<=n;j++){
//       cout << alpha << " ";
//       alpha+=1;
//     }
//     cout << endl;
//   }

//     cout << endl;

// for(int i = 0;i<n;i++){

//     for (int j = 1; j<=n;j++){
//       cout << k << " ";
//       k+=1;
//     }
//     cout << endl;
//   }
// }

//*
//**
//***
//****

// int main()
// {
//   int n = 5;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j <= i; j++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j <= i; j++)
//     {
//       cout << i + 1 << " ";
//     }
//     cout << endl;
//   }

//   char al = 'A';
//   for (int i = 0; i < n; i++){
//     for (int j = 0; j <= i; j++){
//       cout << al << " ";
//     }

//     al++;
//     cout << endl;
//   }

//   return 0;
// }

//1
//12
//123
//1234

// int main(){

//   int n = 4;
//   for(int i = 0;i<n;i++){
//     for(int j = 0;j<=i;j++){
//       cout << (j + 1) << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

//1
//21
//321
//4321

// int main(){

//   int n = 4;
//   for(int i = 1;i<=n;i++){
//     for(int j = i; j > 0;j--){
//       cout << j;
//   }
//     cout << endl;
//   }
//   return 0;
// }

//1
//23
//456
//78910

// int main(){
//   int n = 4;
//   int k = 1;
//   char a = 'A';
 
//   for(int i = 1;i<=n;i++){
//     for(int j = 1; j<=i;j++){
//       cout << k << " ";
//       k++;
//     }
//     cout << endl;
//   }

//   for(int i = 1;i<=n;i++){
//     for(int j = 1; j<=i;j++){
//       cout << a << " ";
//       a++;
//     }
//     cout << endl;
//   }

//   for(int i = 1;i<=n;i++){
//     char alpha = 'A' + i;
//     for(int j = 1;j<=i;j++){
//       char a = alpha - j;
//       cout << a;
//     }
//     cout << endl;
//   }   

//   return 0;
// }

//1111
// 222
//  33
//   4

// int main(){

//   int n = 4;
//   for(int i = 1;i<=n;i++){
//     for(int b = 1;b<i;b++){
//       cout << " ";
//     }
//     for(int b = i;b<=n;b++){
//       cout << i;
//     }
//     cout << endl;
//   } 

// char al = 'A';
//   for(int i = 1;i<=n;i++){
//     for(int b = 1;b<i;b++){
//       cout << " ";
//     }
//     for(int b = i;b<=n;b++){
//       cout << al;
//     }
//     al++;
//     cout << endl;
//   } 
//   return 0;
// }

//   1
//  121
// 12323
//1234321

// int main(){
//   int n =  8;
//   for(int i = 1;i<=n;i++){
//     for(int b = i;b<n;b++){
//       cout << " ";
//     }
//     for(int b = 1;b<=i;b++){
//       cout << b;
//     }
//     for(int b = i-1;b>0;b--){
//       cout << b ;
//     }
//     cout << endl;
//   }
//   return 0;
// }

//      *
//    *    *
//  *        * 
//*           *
//  *       *
//    *   *
//      *

// int main(){
//   int n = 4;
 
//   for(int i = 0; i < n;i++){
//     for(int b = i;b<n;b++){
//       cout << " ";
//     }
//     cout << "*";
//     if(i != 0){
//       for(int b = 0;b < 2*i-1;b++){
//       cout << " ";
//     }
//     cout << "*";
//     }
//     cout << endl;
//   }

//   for(int i = 0; i < n-1;i++){
    
//       for(int b = 0; b<=i+1; b++){
//         cout << " ";
//     }

//      cout << "*";

//      if(i != n-2){
//       for(int b = 0; b < 2*(n-i)-5; b++){
//           cout << " ";
//       }
//       cout << "*";
//     }
//     cout << endl;
//   }  
//   return 0; 
// }

int main(){
  int n = 4;

  for(int i = 0; i < n; i++ ){
    for(int j = 0;j<=i;j++){
      cout << "*";
    }
     for(int b = n-i;b>1;b--){
      cout << " ";
    }
    for(int b = n-i;b>1;b--){
      cout << " ";
    }
    for(int j = 0;j<=i;j++){
      cout << "*";
    }
    cout << endl;
  }

  for(int i = 0; i < n; i++ ){
    for(int j = i;j<n;j++){
      cout << "*";
    }
     for(int j = 1; j<=i;j++){
      cout << " ";
    }
    for(int j = 1; j<=i;j++){
      cout << " ";
    }
    for(int j = i;j<n;j++){
      cout << "*";
    }
    cout << endl;
  }
  
}