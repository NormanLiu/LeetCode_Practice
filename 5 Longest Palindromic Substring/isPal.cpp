#include <iostream>
#include <string>
using namespace std;

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

int main()
{
    string s("abcdefg");
    string r_s = rev(s);
    cout<<s<<endl;
    cout<<r_s<<endl;

    return 0;
}
