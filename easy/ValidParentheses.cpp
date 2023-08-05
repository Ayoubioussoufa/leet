#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if (s.length() % 2)
            return false;
        stack<char> stak;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '[' ||s[i] == '{')
                stak.push(s[i]);
            else
            {
                if (!stak.empty() && s[i] == ')' && stak.top() == '(')
                    stak.pop();
                else if (!stak.empty() && s[i] == '}' && stak.top() == '{')
                    stak.pop();
                else if (!stak.empty() && s[i] == ']' && stak.top() == '[')
                    stak.pop();
                else
                    return false;
            }
        }
        return stak.empty();
    }
};

int main()
{
    Solution s;

    cout << s.isValid("){") << endl;

}

/*
Runtime
-ms
Beats 100.00%of users with C++

Memory
6.32mb
Beats 35.43%of users with C++
*/ // Allahoma barik