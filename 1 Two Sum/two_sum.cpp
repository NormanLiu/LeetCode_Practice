#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    vector<int> sum;
                    sum.push_back(i);
                    sum.push_back(j);
                    return sum;
                }
                else
                    continue;
            }
        }
        return {-1,-1};
    }
};

int main()
{

    int target = 6;
    int n[] = {3,2,3};
    vector<int> a(n,n+3);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    vector<int> sum;
    Solution sol;
    sum = sol.twoSum(a,target);
    for(int i=0;i<sum.size();i++){
        cout<<sum[i]<<" ";
    }
    return 0;
}

