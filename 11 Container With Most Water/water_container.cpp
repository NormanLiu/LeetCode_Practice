#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        for (int i=0;i<height.size()-1;i++)
        {
            for(int j=i+1;j<height.size();j++)
            {
                area = max(area, min(height[i], height[j]) * (j - i));
            }
        }
        return area;
    }
};

int main()
{
    int n[] = {1,8,6,2,5,4,8,3,7};
    vector<int> a(n,n+9);
    Solution sol;
    cout<<sol.maxArea(a)<<endl;
    return 0;
}
