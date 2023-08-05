#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int result(0);
        if (s.length() > 15)
            return 0;
        else
        {
            map<char, int> maps;
            maps['I'] = 1;
            maps['V'] = 5;
            maps['X'] = 10;
            maps['L'] = 50;
            maps['C'] = 100;
            maps['D'] = 500;
            maps['M'] = 1000;
            for (int i = 0; i < s.length(); i++)
            {
                if (maps[s[i]] >= maps[s[i + 1]])
                    result += maps[s[i]]; // this result = result + maps[s[i]]; make the code faster bu the memory get fucked
                else
                    result -= maps[s[i]];
            }
        }
        return result;
    }
};
/*
Runtime
20ms
Beats 40.39%of users with C++

Memory
8.37mb
Beats 23.70%of users with C++
*/

int main()
{
    Solution s;

    cout << s.romanToInt("LVIII") << endl;

}

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;

        int l = s.length();
        for(int i =0;i<l;i++)
        {
            if(s[i]=='D')
            {
                ans+=500;
            }
            else if(s[i]=='M')
            {
                ans+=1000;
            }

            else if(s[i]=='I')
            {
                if(s[i+1]=='V'||s[i+1]=='X')
                {
                    ans-=1;
                }
                else
                {
                    ans+=1;
                }
            }
            else if(s[i]=='X')
            {
                if(s[i+1]=='L'||s[i+1]=='C')
                {
                    ans-=10;
                    
                }
                else 
                {
                    ans+=10;
                }
            }
            else if(s[i]=='C')
            {
                if(s[i+1]=='D'||s[i+1]=='M')
                {
                    ans-=100;
                }
                else
                {
                    ans+=100;
                }
            }
            else if(s[i]=='L')
            {
                ans+=50;
            }
            else if(s[i]=='V')
            {
                ans+=5;
            }
           
           
        }

        return ans;
    }
};
/*
Runtime
7ms
Beats 87.90%of users with C++

Memory
5.87mb
Beats 99.29%of users with C++
*/ // supprisingly this code IS the best and optimised in terms of runtime and memory