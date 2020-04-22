//Runtime: 80 ms, faster than 8.58% of C++ online submissions for ZigZag Conversion.
//Memory Usage: 95 MB, less than 5.55% of C++ online submissions for ZigZag Conversion.

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        int iter = 2*numRows-2;
        string out;

        if (numRows == 1) return s;

        for (int i=0;i<s.length();i+=iter)
        {
            out = out + s[i];
        }

        if (numRows>2)
        {
            for (int i=1;i<numRows-1;i++)
            {
                int j = iter - i;
                int diff = j - i;
                for (j;j<s.length();j+=iter)
                {
                    out = out + s[j-diff];
                    out = out + s[j];
                }
                if (j-diff<s.length()) out = out + s[j-diff];
            }
        }

        for (int i=numRows-1;i<s.length();i+=iter)
        {
            out = out + s[i];
        }
        return out;

    }
};

int main()
{
    string s("PAYPALISHIRING");
    Solution sol;
    string out = sol.convert(s,4);
    cout<<s<<endl;
    cout<<out<<endl;

    return 0;
}
