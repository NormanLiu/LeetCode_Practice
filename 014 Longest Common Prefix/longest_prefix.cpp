#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) return strs[0];

        int maxlength = 0;
        vector<string> test_strs;
        string out("");

        for (int i=0;i<strs.size();i++)
        {
            string first(strs[i][0]);
            test_strs.push_back(first);
            int l = strs[i].length();
            if(l > maxlength) maxlength = l;
        }

        for (int i=0;i<maxlength;i++)
        {
            for (int j=1;j<strs.size();j++)
            {
                if (test_strs[0] != test_strs[j]) return out_strs;
                if (i<maxlength-1) test_strs[j] = test_strs[j] + strs[j][i+1];
            }
            out_strs = test_strs[0];
            if (i<maxlength-1) test_strs[0] = test_strs[0] + strs[0][i+1];
        }
        return out_strs;

    }
};

int main()
{
    string a("flower");
    string b("flow");
    string c("flight");
    int n[] = {a,b,c};
    vector<string> strs(n,n+3);

    Solution sol;
    for (int i=0;i<strs.size();i++) cout<<strs[i]<<endl;
    cout<<sol.longestCommonPrefix(strs)<<endl;
    return 0;
}
