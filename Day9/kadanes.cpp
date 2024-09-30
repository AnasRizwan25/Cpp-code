#include <iostream>
#include <vector>
using namespace std;


//Subarray

// int main(){

//   int arr[] = {1,2,3,4,5};
//   int n = sizeof(arr) / sizeof(int);

//   for(int st = 0;st < n;st++){
//     for(int end = st;end < n;end++){
//       for(int i = st; i<=end;i++){
//         cout << arr[i];
//       }
//       cout << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

//Max Subarray sum
// int main(){

//   int arr[] = {3,-4,5,4,-1,7,-8};
//   int n = sizeof(arr) / sizeof(int);

//   int maxSum = INT16_MIN;

//   for(int st = 0;st < n;st++){
//       int currentSum = 0;
//       for(int end = st;end < n;end++){
//           currentSum += arr[end];
//           maxSum = max(currentSum,maxSum);
//       } 
//     }

//   cout << "Sum: " << maxSum << endl;

//   return 0;
// }


//kadane's algo

// int main(){

//   int arr[] = {3,-4,5,4,-1,7,-8};
//   int len = sizeof(arr) / sizeof(int);

//   int currentSum = 0;
//   int maxSum = INT16_MIN;

//   for(int i = 0; i < len;i++){
//     currentSum +=arr[i];
//     maxSum = max(currentSum,maxSum);
//     if(currentSum < 0){
//       currentSum = 0;
//     }
//   }

//   cout << "Max Subarray: " << maxSum << endl;

//   return 0;
// }

// int main(){

//   int arr[] = {3,-4,5,4,-1,7,-8};
//   int len = sizeof(arr) / sizeof(int);
  
//   int currentSum = 0, MaxSum = INT16_MIN;

//   for(int i = 0;i < len;i++){
//     currentSum += arr[i];
//     MaxSum = max(currentSum,MaxSum);
//     if(currentSum < 0){
//       currentSum = 0;
//     }
//   }

//   cout << "Kadane's Algorithm Max Subarray sum: " << MaxSum << endl;

  
//   return 0;
// }

// int main(){
  
//   int arr[] = {3,-4,5,4,-1,7,-8};
//   int len = sizeof(arr) / sizeof(int);

//   int currentSum = 0;
//   int maxSum = 0;

//   for(int i = 0;i < len; i++){
//     currentSum += arr[i];
//     maxSum = max(currentSum, maxSum);
//     if(currentSum < 0){
//       currentSum = 0;
//     }
//   }

//   cout << "Max Subarray Sum: " << maxSum << endl;

//   return 0;
// }


// int main(){

//   int arr[] = {3,-4,5,4,-1,7,-8};
//   int len = sizeof(arr) / sizeof(int);

//   int maxSum = 0;

//   for(int st = 0;st < len;st++){
//     int currentSum = 0;
//     for(int end = st; end < len;end++){
//       currentSum += arr[end];
//       maxSum = max(currentSum, maxSum);
//     }
//   }

//   cout << "Max Subarray Sum: " << maxSum << endl;
  

//   return 0;
// }

// int main(){

//   vector<int>arr = {1,2,3,4,5};
//   // int len = sizeof(arr) / sizeof(int);

//   for(int st = 0;st < arr.size();st++){
//     for(int end = st;end < arr.size();end++){
//       for(int i = st; i<=end;i++){
//         cout << arr[i];
//       }
//       cout << " ";
//     }
//     cout << endl;
//   }  

//   return 0;
// }

// int main(){

//   vector<int>arr = {3,-4,5,4,-1,7,-8};
//   int maxSum = INT16_MIN;
//   int currentSum = 0;

//   for(int val : arr){
//     currentSum += val;
//     maxSum =  max(currentSum , maxSum);
//     if(currentSum < 0){
//       currentSum = 0;
//     }
//   }

//   cout << "Max Sum: " << maxSum << endl;

//   return 0;
// }

// int main(){
//   vector<int>arr = {3,-4,5,4,-1,7,-8};
//   int maxSum = INT16_MIN;

//   for(int i = 0;i < arr.size();i++){
//     int currentSum = 0;
//     for(int j = i;j < arr.size();j++){
//       currentSum += arr[j];
//       maxSum = max(currentSum,maxSum);
//     }
//   }
//     cout << maxSum << endl;
//     return 0;
// }


int main(){

  vector<int>arr = {3,-4,5,4,-1,7,-8};
  int maxSum = INT16_MIN;
  int currentSum = 0;

  for(int i = 0;i < arr.size();i++){
    currentSum += arr[i];
    maxSum = max(currentSum, maxSum);
    if(currentSum < 0){
      currentSum = 0;
    }
  }

  cout << "Max Sum: " << maxSum << endl;

  return 0;
}