//Runtime: 28 ms, faster than 7.78% of C++ online submissions for Longest Common Prefix.
//Memory Usage: 17.5 MB, less than 6.45% of C++ online submissions for Longest Common Prefix.

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
            string first;
            first = first + strs[i][0];
            test_strs.push_back(first);
            int l = strs[i].length();
            if(l > maxlength) maxlength = l;
        }

        for (int i=0;i<maxlength;i++)
        {
            for (int j=1;j<strs.size();j++)
            {
                if (test_strs[0] != test_strs[j]) return out;
                if (i<maxlength-1) test_strs[j] = test_strs[j] + strs[j][i+1];
            }
            out = test_strs[0];
            if (i<maxlength-1) test_strs[0] = test_strs[0] + strs[0][i+1];
        }
        return out;

    }
};

int main()
{
    string a("alower");
    string b("flow");
    string c("flight");
    string n[] = {a,b,c};
    vector<string> strs(n,n+3);

    Solution sol;
    for (int i=0;i<strs.size();i++) cout<<strs[i]<<endl;
    cout<<sol.longestCommonPrefix(strs)<<endl;
    return 0;
}
