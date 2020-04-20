//Runtime: 56 ms, faster than 23.21% of C++ online submissions for Longest Substring Without Repeating Characters.
//Memory Usage: 25.5 MB, less than 9.95% of C++ online submissions for Longest Substring Without Repeating Characters.

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        cout<<"total string length: "<<s.length()<<endl;
        if (s.length() == 0) return 0;

        int longest = 1;
        int start = 0;
        int last = 0;
        char next_char;
        int location;
        int slength = 1;

        while(last < s.length()-1)
        {
            string sub = s.substr(start,last-start+1);
            cout<<sub<<" "<<start<<" "<<last<<endl;
            do
            {
                last++;
                next_char = s[last];
                location = sub.find(next_char);
                sub = sub + next_char;
                cout<<sub<<" "<<last<<endl;
                if (last == s.length()-1) break;
            }while(location<0 || location>=last - start);

            slength = last - start;
            if (location<0 || location>=last - start) slength++;
            else start = start + location + 1;

            if (longest<slength) longest = slength;
        }
        return longest;
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
