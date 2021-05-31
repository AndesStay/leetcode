#include <string>
#include <iostream>
using namespace std;



string replaceSpace(string s) 
{
    int len = s.size();
    int count = 0;
    for(int i = 0; i < len; i++)
    {
        if(s[i] == ' ')
            count++;
    }
    s.resize(len + count * 2);
    int new_len = s.size();
    for(int left = len - 1, right = new_len - 1; left >= 0; )
    {
        if(s[left] == ' ')
        {
            s[right--] = '0';
            s[right--] = '2';
            s[right--] = '%'; 
            left--;
        }
        else
        {
            s[right] = s[left];
            left--;
            right--;
        }
    }
    return s;
}

int main()
{
    string test = "we are happy";
    string res = replaceSpace(test);

    cout << "Hello, World." << endl;
    return 0;
}