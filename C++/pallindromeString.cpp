#include <iostream>
using namespace std;
class Solution
{
private:
public:
    bool valid(char cha)
    {
        if ((cha >= 'a' && cha <= 'z') || (cha >= '0' && cha <= '9') || (cha >= 'A' && cha <= 'Z'))
            return 1;
        return 0;
    }

    char lowerCase(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            return ch;
        }
        else
        {
            return (ch - 'A' + 'a');
        }
    }

    bool checkPallindrome(string S)
    {
        int s = 0;
        int e = S.length() - 1;
        while (s <= e)
        {
            if (S[s] != S[e])
            {
                return 0;
            }
            else
            {
                s++;
                e--;
            }
        }
        return 1;
    }

    bool isPalindrome(string s)
    {
        string temp = "";
        for (int j = 0; j < s.length(); j++)
        {
            if (valid(s[j]))
            {
                temp.push_back(s[j]);
            }
        }

        for (int j = 0; j < temp.length(); j++)
        {
            temp[j] = lowerCase(temp[j]);
        }

        return checkPallindrome(temp);
    }
};

int main()
{
    Solution s;
    string st = "A man, a plan, a canal: Panama";
    bool res = s.isPalindrome(st);
    cout << "The string is pallindrome : " << res << endl;
    return 0;
}