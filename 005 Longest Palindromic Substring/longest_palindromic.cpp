#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string out,temp;
        int maxlen = 1;
        int start = 0;
        int last;

        if (s.length() == 0) return out;
        out = s[0];
        while(maxlen < s.length()-start)
        {
            int last = start;
            do
            {
                last++;
                temp = s.substr(start,last-start+1);
                if (isPal(temp) && maxlen<last-start+1)
                {
                    out = s.substr(start,last-start+1);
                    maxlen = last-start+1;
                }
            }while(last < s.length());

            start++;
        }
        return out;
    }
private:
    bool isPal(string s){
        int start = 0;
        int endd = s.length();
        string temp(s);

        while (start<endd)
        {
            endd--;
            swap(temp[start],temp[endd]);
            start++;
        }
        return (temp == s);
    }
};

int main()
{
    string s("cbbd");
    Solution sol;
    string out = sol.longestPalindrome(s);

    cout<<s<<endl;
    cout<<out<<endl;

    return 0;
}
