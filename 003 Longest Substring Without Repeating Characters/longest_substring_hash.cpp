//Runtime: 24 ms, faster than 64.60% of C++ online submissions for Longest Substring Without Repeating Characters.
//Memory Usage: 8.6 MB, less than 100.00% of C++ online submissions for Longest Substring Without Repeating Characters.

#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        size_t start=0, len=0;
        unordered_map<char,int> table;
        for (size_t i=0;i<s.length();++i)
        {
            auto found = table.find(s[i]);
            if (found != table.end() && found->second >= start) {
                len = max(len, i - start);
                start = found->second + 1;
            }
            table[s[i]]=i;
        }

        return max(len, s.length() - start);
    }
};

int main()
{
    string s(" ");
    cout<<s<<endl;
    Solution sol;
    int out = sol.lengthOfLongestSubstring(s);
    cout<<"The longest substring length: "<<out<<endl;
}
