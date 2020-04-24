//Runtime: 12 ms, faster than 69.25% of C++ online submissions for Palindrome Number.
//Memory Usage: 6.1 MB, less than 100.00% of C++ online submissions for Palindrome Number.

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        return isPal(s);
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
    int x = -121;
    Solution sol;
    if (sol.isPalindrome(x)==true) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;
}
