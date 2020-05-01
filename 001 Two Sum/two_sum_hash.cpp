//Runtime: 16 ms, faster than 52.62% of C++ online submissions for Two Sum.
//Memory Usage: 10.2 MB, less than 39.78% of C++ online submissions for Two Sum.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> record;
        for (int i=0;i<nums.size();i++)
        {
            auto found = record.find(nums[i]);
            if (found != record.end()) return {found->second, i};
            record.emplace(target-nums[i], i); //let 'key' be b and the 'value' be the index of a.
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
