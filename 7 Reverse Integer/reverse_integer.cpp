//Runtime: 4 ms, faster than 50.27% of C++ online submissions for Reverse Integer.
//Memory Usage: 6.1 MB, less than 100.00% of C++ online submissions for Reverse Integer.

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int temp;
        string upper("2147483647");
        string lower("2147483648");
        if (x >= 0) temp = x;
        else temp = -x;

        string s = to_string(temp);
        string re = rev(s);
        //cout<<re<<endl;
        int re_int = atoi(re.c_str());

        if (x < 0)
        {
            if (temp> 1000000000 && re>lower) return 0;
            re_int = -re_int;
        }
        else
        {
            if (temp> 1000000000 && re>upper) return 0;
        }
        return re_int;
    }

private:
    string rev(string s)
    {
        int start = 0;
        int endd = s.length();
        string temp(s);

        while (start<endd)
        {
            endd--;
            swap(temp[start],temp[endd]);
            start++;
        }
        return temp;
    }
};



int main()
{
    int x = 123;
    Solution sol;
    int rev_int = sol.reverse(x);
    cout<<x<<endl;
    cout<<rev_int<<endl;
    return 0;
}
