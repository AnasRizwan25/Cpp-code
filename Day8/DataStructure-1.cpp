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

// int main(){//reverse of array
//   int arr[] = {4,2,7,8,1,2,5};
//   int len = sizeof(arr) / sizeof(int);

//   for(int i = len - 1; i >= 0;i--){
//     cout << arr[i] << " ";
//   }
//   return 0;
// }

// int main(){//reverse of array

//   int arr[] = {1,2,3,4,5};
//   int start = 0;
//   int len = sizeof(arr) / sizeof(int);
//   int end = len - 1;
  

//   for(int i = 0;i<len;i++){
//     if(start > end){
//       swap(arr[start] , arr[end]);
//     }
//       start++;
//       end--;
//   }

//   cout << "for loop: ";
//   for(int i = 0; i < len;i++){
//     cout << arr[i] << " ";
//   }
//   return 0;
// }


//reverse of array

// void reverseArray(int arr[], int len){
  
//   int start = 0;
//   int end = len - 1;
  
//     while(start < end){
//       swap(arr[start] , arr[end]);
//       start++;
//       end--;
//     }
// }

// int main(){//reverse of array

//   int arr[] = {1,2,3,4};
//   int len = sizeof(arr) / sizeof(int);
  
//   reverseArray(arr,len);

//   cout << "Reverse of Array in while loop: "; 
//   for(int i = 0; i < len;i++){
//     cout << arr[i] << " ";
//   }
    
//   return 0;
// }



//Questions


// int main(){ Question No: 1

//   int arr[] = {1,2,3,4};
//   int total = 0;
//   int product = 1;
//   int len = sizeof(arr) / sizeof(int);

//   for(int i = 0;i<len;i++){
//     total+=arr[i];
//     product*=arr[i];
//   }

//   cout << "Sum of Array: " << total << endl;
//   cout << "Product of Array: " << product << endl;
  
//   return 0;
// }

// int main(){

//   int arr[] = {1,2,3,4,5,6};

//   int len = sizeof(arr) / sizeof(int);
  
//   int start = 0;
//   int end = len - 1;

//   int small = INT16_MAX;
//   int smallIndex = 0;
//   int large = INT16_MIN;
//   int largeIndex = 0;


//   for(int i = 0; i < len ;i++){
//     if(arr[i] < small){
//       small = arr[i];
//       smallIndex = i;
//     }
//     if(arr[i] > large){
//       large = arr[i];
//       largeIndex = i;
//     }
//   }

//     swap(arr[smallIndex] , arr[largeIndex]);  

//   cout << "Reverse of Array: ";
//   for(int i = 0;i < len;i++){
//     cout << arr[i] << " ";
//   }
//   return 0;
// }

// int main(){

//   int num[] = {1,2,3,2,3,4};
//   int len = sizeof(num) / sizeof(int);
  

  
 
//   for(int i = 0;i<len;i++){
//     int j;
//     for(j = 0;j<=i;j++){
//       if(num[i] == num[j]){
//         cout << num[i];
//         break;
//       }
//       else{
//         cout << num[i];
//         continue;
//       }
//     }
    
//   }


  

//   return 0;
// }

int main(){

  int num1[] = {1,2,3,4,7,5};
  int num2[] = {1,5,6,7,4};

  int len1 = sizeof(num1) / sizeof(int);
  int len2 = sizeof(num2) / sizeof(int);

  for(int i = 0; i< len1; i++){
    for(int j = 0;j < len2; j++){
      if(num1[i] == num2[j]){
        cout << num1[i] << " ";
      }
    }
  }

  return 0;
}