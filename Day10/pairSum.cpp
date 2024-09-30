#include <iostream>
#include <vector>
using namespace std;

// int main(){//The below ans time complexity is 0(n^2)

//   vector<int>nums = {2,7,11,15};
//   int target = 9;
//   vector<int>index = {};

//   for(int i = 0;i < nums.size();i++){
//     for(int j = i+1;j<nums.size();j++){
//       if(nums[i] + nums[j] == target){
//         index.push_back(i);
//         index.push_back(j);
//       }
//     }
//   }

//   for(int val : index){
//     cout << val << endl;;
//   }

//   return 0;
// }//The upper sol is brute force

//Return pair in sorted aaray with target sum

//if we see we have given sorted array which means
//small number in left big number in rigth and we have to cal pair sum
//which is equal to target so we use two pointer approuch
//In two pointer one is going up and one is going down if needed up and down


// vector<int> pairSum(vector<int>nums, int target){// O(n)
//   vector<int>index = {};
//   int i = 0;
//   int j = nums.size() - 1;

//   while(i < j){
//     int pairSum = nums[i] + nums[j];

//     if(pairSum > target){
//         j--;
//     } 
//     else if(pairSum < target){
//         i++;
//     } 
//     else{
//         index.push_back(i);
//         index.push_back(j);
//         return index;
//     }
//   }
// }


// int main(){
//   vector<int>nums = {2,7,11,15};

//   int target = 9;
  
//   vector<int>index = pairSum(nums,target);

//   cout << index[0] << ", " << index[1] << endl;

// }


// int main(){O(n^2)

//   vector<int>vec = {2,7,11,15};
//   int target = 26;
//   int n = vec.size();
//   vector<int>index = {};

//   for(int i = 0; i < n;i++){
//     for(int j = i + 1; j < n;j++ ){
//       int total = vec[i] + vec[j];
//       if(total == target){
//         index.push_back(i);
//         index.push_back(j); 
//       }
//     }
//   }

//   for(int val : index){
//     cout << val << " "; 
//   }

//   return 0;
// }

// int main(){

//   vector<int>vec = {2,7,11,15};
//   int target = 9;
//   int n = vec.size();
//   vector<int>index = {};

//   int i = 0;
//   int j = n - 1;

//   while(i < j){
//     int pairsum = vec[i] + vec[j];
//     if(pairsum > target){
//       j--;
//     } else if(pairsum < target){
//       i++;
//     } else{
//       index.push_back(i);
//       index.push_back(j);
//       cout << index[0] << ", " << index[1];
//       break;
//     }
//   }  

//   return 0;
// }


// vector<int> pairSum(vector<int>vec, int target){o(n)

//   vector<int>index = {};
//   int n = vec.size();

//   int i = 0;
//   int j = n - 1;

//   while(i < j){
//     int pairsum = vec[i] + vec[j];
//     if(pairsum > target){
//       j--;
//     } else if(pairsum < target){
//       i++;
//     } else{
//       index.push_back(i);
//       index.push_back(j);
//       return index;
//     }
//   }  
// }


// int main(){

//   vector<int>vec = {2,7,11,15};
//   int target = 26;

//   vector<int>ans = pairSum(vec, target);
 
//   cout << ans[0] << ", " << ans[1] << endl;

//   return 0;
// }


int main(){

  vector<int>nums = {2,7,8,11,15};
  int target = 9;
  vector<int>index = {};

  int st = 0;
  int end = nums.size() - 1;

  while (st < end){
    int pairSum = nums[st] + nums[end];    
    if(pairSum > target){
      end--;
    } else if(pairSum < target){
      st++;
    } else{
      index.push_back(st);
      index.push_back(end);
      cout << index[0] << ", " << index[1] << endl;
      break;
    }
  }

  

  return 0;
}