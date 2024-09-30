#include <iostream>
#include <vector>
using namespace std;

int recursion(int n){
  if(n == 0){
    return 1;
  }
  return n * recursion(n-1);
}


int main(){

  int n = 5;
  int factorial = recursion(n); 

  cout << factorial;

  return 0;
}