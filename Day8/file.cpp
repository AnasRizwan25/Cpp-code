#include <iostream>
using namespace std;

// int main(){
  
//   int size = 5;
//   int marks[size];

//   for(int i = 0;i < size;i++){
//     cin >> marks[i];
//   }

//   for(int i = 0;i< size;i++){
//     cout << marks[i] << endl;
//   } 

//   return 0;
// }

// int main(){
  

//   int array[] = {100,20,30,400,2,500,984,192,-24};
//   int len = 9;
  
//   int a = INT16_MAX;
  
//   for(int i = 0;i < len;i++){
//     if(array[i] < a){
//       a = array[i];
//     }
//   }
//     cout << "smallest: " << a << endl;
//   return 0;
// }

// int main(){
  

//   int array[] = {100,20,30,400,2,500,984,192,-24,1000,1233,143,33,98};
//   int len = sizeof(array) / sizeof(int);
//   int index = 0;
  
//   int a = INT16_MIN;
  
//   for(int i = 0;i < len;i++){
//     if(array[i] > a){
//       a = array[i];
//       index = i;
//     }
//   }
//     cout << "largest: " << a << " index: " << index << endl;
//   return 0;
// }

// int linearSearch(int arr[],int len, int target){
//   for(int i = 0; i< len;i++){
//     if(arr[i] == target){
//       return i;
//     }
//   }
//   return -1;
// }

// int main(){
//   int arr[] = {10,20,30,40,50,60,70,80};
//   int len = sizeof(arr) / sizeof(int);

//   int result = linearSearch(arr,len,90);

//   if(result >= 0){
//     cout << "found at index: " << result << endl;
//   }else{
//     cout << "Not found" <<  endl;
//   }
  
//   return 0;}

int main(){//reverse of array
  int arr[] = {4,2,7,8,1,2,5};
  int len = sizeof(arr) / sizeof(int);

  for(int i = len - 1; i >= 0;i--){
    cout << arr[i] << " ";
  }
  return 0;
}