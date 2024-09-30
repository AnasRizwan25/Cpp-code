#include <iostream>
#include <vector>
using namespace std;

int main(){

  vector<int>nums = {3,1,2,1,2};
  int ans = 0;

  for(int i = 0;i < nums.size();i++){
    ans ^=nums[i];
  }

  cout << "Unique Element: " << ans << endl;

  return 0;
}