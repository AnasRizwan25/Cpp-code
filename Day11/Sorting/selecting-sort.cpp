#include <iostream>
#include <vector>
using namespace std;

vector<int> sorting(vector<int>& arr, int n){

   for(int i = 0;i < n-1;i++){
    int minIdx = i;
    for(int j = i+1;j < n;j++){
      if(arr[j] < arr[minIdx]){
        minIdx = j;
      }
    }
    swap(arr[i],arr[minIdx]);
  }

  return arr;
}

int main(){

  vector<int>arr = {2,1,4,5,3};
  int n = sizeof(arr) / sizeof(int);

sorting(arr,n);


  for(int val : arr){
    cout << val;
  }
  
  

  return 0;
}