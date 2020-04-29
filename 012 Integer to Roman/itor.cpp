//Runtime: 12 ms, faster than 58.88% of C++ online submissions for Integer to Roman.
//Memory Usage: 6.1 MB, less than 100.00% of C++ online submissions for Integer to Roman.

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string out;
        int M = num/1000;
        int M_l = num%1000;
        for (int i=0;i<M;i++) out = out + 'M';
        if (M_l >= 900)
        {
            out = out + 'C'+'M';
            M_l = M_l - 900;
        }
        else if (M_l >= 500)
        {
            out = out + 'D';
            M_l = M_l - 500;
        }
        else if (M_l >= 400)
        {
            out = out + 'C'+'D';
            M_l = M_l - 400;
        }
        int C = M_l/100;
        int C_l = M_l%100;
        for (int i=0;i<C;i++) out = out + 'C';
        if (C_l >= 90)
        {
            out = out + 'X'+'C';
            C_l = C_l - 90;
        }
        else if (C_l >= 50)
        {
            out = out + 'L';
            C_l = C_l - 50;
        }
        else if (C_l >= 40)
        {
            out = out + 'X'+'L';
            C_l = C_l - 40;
        }

        int X = C_l/10;
        int X_l = C_l%10;
        for (int i=0;i<X;i++) out = out + 'X';
        if (X_l >= 9)
        {
            out = out + 'I'+'X';
            X_l = X_l - 9;
        }
        else if (X_l >= 5)
        {
            out = out + 'V';
            X_l = X_l - 5;
        }
        else if (X_l >= 4)
        {
            out = out + 'I'+'V';
            X_l = X_l - 4;
        }
        for (int i=0;i<X_l;i++) out = out + 'I';

        return out;
    }
};

int main()
{
    int num = 10;
    Solution sol;
    string roman = sol.intToRoman(num);
    cout<<roman<<endl;
    return 0;
}
