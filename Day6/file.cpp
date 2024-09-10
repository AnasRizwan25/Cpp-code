#include <iostream>
using namespace std;

// int decToBin(int decNum){
//   int ans = 0;
//   int pow = 1;
//   while(decNum > 0){
//     int mod = decNum % 2;
//     decNum /= 2;

//     ans += (mod * pow);
//     pow *=10;
//   } 
//   return ans;
// }


int BinToDec(int binNum){
  int ans = 0;
  int pow = 1;
  while(binNum > 0){
    int rem = binNum % 10;
    binNum /= 10;

    ans += (rem * pow);
    pow *=2;
  }
  return ans;
}

int main(){
  int binNum;
  cout << endl << "Enter a Binaray Number: ";
  cin >> binNum; 

  // for(int i = 1 ;i<=10;i++){
  //   cout << "Binary Number " << i << ": " << decToBin(i) << endl << endl;
  // }

    cout << "Decimall Number: " << BinToDec(binNum) << endl;

  return 0;
}