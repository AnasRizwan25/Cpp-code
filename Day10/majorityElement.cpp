#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int main(){

//   vector<int> nums = {1,2,2,1,1};
  
//   for(int val : nums){
//     int freq = 0;
//     for(int el : nums){
//       if(el == val){
//         freq++;
//       }
//     }

//     if(freq > nums.size() / 2 ){
//       cout << val;
//       break;
//     }
//   }
//   return 0;
// }

  
//   return 0;
// }

// int majority(vector<int>vec){
//   int n = vec.size();

//   for(int val : vec){
//     int freq = 0;
//     for(int el : vec){
//       if(val == el){
//         freq++;
//       }
//     }
//     if(freq > n / 2){
//       return val;
//     }
//   }

// }

// int main(){

//   vector<int>vec = {1,2,2,1,1,3};

//   int value = majority(vec);

//   cout << value << endl; 
  

//   return 0;
// }

// int maj(vector<int>vec){

  
//   for(int val : vec){
//     int freq = 0;
//     for(int el : vec){
//       if(val == el){
//         freq++;
//       }
//     }
//     if(freq > vec.size() / 2){
//       return val;
//     }
//   }
// }


// int main(){

//   vector<int>vec = {1,1,1,1,2,2,2,1,2,2,2,3};

//   int val = maj(vec);
//   cout << val;


//   return 0;

// }


// int main(){

//   vector<int>nums = {1,1,1,2,2};
  
//   int freq = 1;
//   int ans = 0;
//   for(int i = 0;i < nums.size();i++){
      
//     if(nums[i] == nums[i+1]){
//       freq++;
//     } else{
//       freq = 1;
//       ans = nums[i];
//     }
//   if(freq > nums.size() / 2){
//     cout << nums[i];
//   }
//   }

// }

// int main(){

//   vector<int>nums = {1,2,2,1,1};
//   int freq = 1, ans = nums[0];

//   sort(nums.begin(), nums.end());

//   for(int i = 1;i < nums.size();i++){

//     if(nums[i] == nums[i-1]){
//       freq++;
//     } else{
//       freq = 1;
//       ans = nums[i];
//     }

//     if(freq > nums.size() / 2){
//       cout << ans;
//     }
//   }

//   return 0;
// }


// int main(){O(n)
//   vector<int>nums = {1,3,1,3,1,3,1};
//   int freq = 0;  
//   int ans = 0;

//   for(int i = 0;i < nums.size();i++){
//     if(freq == 0){
//       ans = nums[i];
//     }
//     if(ans == nums[i]){
//       freq++;
//     } else{
//       freq--;
//     }
//   }

//   cout << "Majority Element: " << ans << endl;

// }

// int main(){//O(nlogn)
//    vector<int>nums = {1,3,1,3,1,3,1};
//   int freq = 1;  
//   int ans = nums[0];

//   sort(nums.begin(), nums.end());

//   for(int i = 1;i<nums.size();i++){
//     if(nums[i] == nums[i-1]){
//       freq++;
//     } else{
//       freq = 1;
//       ans = nums[i];
//     }

//     if(freq > nums.size() / 2){
//       cout << ans;
//     }
//   }

// }

// int main(){O(n^2)

//   vector<int>nums = {1,2,2,1,2};

//   for (int i = 0; i < nums.size(); i++){
//     int freq = 0;
//     for(int j = i;j < nums.size();j++){
//       if(nums[i] == nums[j]){
//         freq++;
//       }
//     }
//     if(freq > nums.size() / 2){
//       cout << nums[i] << endl;
//     }
//   }
  

// }



//moores algo 

//If an array have a majority element we track the frequency
// if freq = 0 ans = nums[i], ans == nums[i]: freq++ else freq--;
// so the above line say we have to track the frequency if an element 
// is majority then what we minus the freq we have to get the
// majority element

// int main(){

//   vector<int>nums = {1,1,1,1,3,3,3,3,3,3,1};
//   int freq = 0;// 1 2 3 4 3 2 1 0 1 2 1
//   int ans = 0;// 1 3
//   int n = nums.size();

//   for(int i = 0;i < n;i++){
//     if(freq == 0){
//       ans = nums[i];
//     }
//     if(ans == nums[i]){
//       freq++;
//     } else{
//       freq--;
//     }
//   }

//   cout << "Majority Element: " << ans << endl;

//   return 0;
// }


// int main(){

//   vector<int>nums = {1,2,2,1,1};
//   int ans = 0;
//   int freq = 0;

//   for(int i = 0;i < nums.size();i++){
//     if(freq == 0){
//       ans = nums[i];
//     }
//     if(ans == nums[i]){
//       freq++;
//     } else{
//       freq--;
//     }
//   }

//   cout << "Majority Element: " << ans << endl;

//   return 0;
// }


// int main(){

//   vector<int>nums = {1,2,2,1,1};// 1,1,1,2,2
//   int ans = nums[0];
//   int freq = 1;

//   sort(nums.begin(),nums.end());

//   for(int i = 1;i < nums.size();i++){
//     if(nums[i] == nums[i - 1]){
//       freq++;
//     } else{
//       freq = 1;
//       ans = nums[i];
//     }

//     if(freq > nums.size() / 2){
//       cout << ans;
//     }
//   }

//   return 0;
// }