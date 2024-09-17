#include <iostream>
#include <vector>
using namespace std;

// int main(){

//   vector<int> vec = {};

//   vec.push_back(10);
//   vec.push_back(20);
//   vec.push_back(30);

//   vec.pop_back();

//   cout << "size : " << vec.size() << endl;

//   cout << vec.front() << endl; 
//   cout << vec.back() << endl; 

//   cout << vec.at(0) << endl; 
  


//   for(int i : vec){
//     cout << i << endl;
//    }

//   return 0;
// }

// int main(){

//   vector<int> num;

//   num.push_back(0);
//   num.push_back(1);
//   num.push_back(2);
//   num.push_back(3);
//   num.push_back(4);


//   cout << "Size: " << num.size() << endl;
//   cout << "Capacity: " << num.capacity() << endl;


//   return 0;
// }

//for unique value or single value

// int main(){

//   vector<int>vec = {1,2};
//   int ans = 0;

//   for(int val  : vec){
//     ans ^= val;
//   }

//   cout << "Unique Value: " << ans << endl; 


//   int n = 8;

//   if((n & (n-1)) == 0){
//     cout << "Power of 2" << endl;
//   } else{
//     cout << "Not Power of 2" << endl;
//   }

//   return 0;
// }

// int main(){

//   vector<int>vec ={2,3,1,8,10};
//   int target = 9;

//   for(int i = 0;i<vec.size();i++){
//     if(vec[i] == target){
//       cout << target << " Found at index: " << i << endl;
//       break;
//     }
//   } 

//   return 0;
// }

// void reverseVector(vector<int>& vec){
//   int start = 0;
//   int end = vec.size() - 1;

//   while(start < end){
//     swap(vec[start],vec[end]);
//     start++;
//     end--;
//   }
//   return ;
// }


// int main(){

//   vector<int>vec = {1,2,3,4,5};
//   reverseVector(vec);

//   for(int val : vec){
//     cout << val << " ";
//   }
//   return 0;
// }

// int main(){

//   vector<int>vec = {1,2,3,1,2,3,4};
//   int ans = 0;

//   for(int val : vec){
//     ans ^=val;
//   }
//   cout << "Unique Value: " << ans << endl;

//   //In this question we have to find unique value so we use XOR(^).
//   //In XOR 1,1 = 0 and 0,0 = 0, But 1,0 = 1 and 0,1 = 1
//   //So see the vector/array u see a 1,2,3 are repeat so
//   // 1,1 is 0 and as 2 or 3 because 1 in binary 1 so 1,1 = 0;
//   // 1,2,3 are equal to 0 and hence 4 ^ 0 equal to 4
//   //keep in mind n^n = 0 as we talk earlier. For example :  1^1 = 0 2 and 3 also.

//   //and also keep in mind vector are value type in order to change in main function.
//   //What the function we are working for we use. int ...(vector<int>& name) see & for value type to reference type.

//   return 0;
// }


int main(){

  vector<int>vec= {1,2,3,1,2};

  int total = 0;

  for(int val : vec){
    total ^= val;
  }

  cout << "unique value: " << total << endl;


  return 0;
}