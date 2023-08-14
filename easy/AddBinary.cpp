#include <iostream>
#include <vector>
#include <algorithm>
#include<math.h> 
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string done;
        if (!a.compare("0") && !b.compare("0"))
        {
            return done +="0";
        }
        int resulta = 0;
        int resultb = 0;
        int plop = 0;
        for (int i = a.length() - 1; i >= 0; i--)
        {
            if (a[i] == '1')
                resulta = resulta + pow(2, plop);
            plop++;
        }
        plop = 0;
        for (int i = b.length() - 1; i >= 0; i--)
        {
            if (b[i] == '1')
                resultb = resultb + pow(2, plop);
            plop++;
        }
        cout << resulta << "   " << resultb << endl;
        int finish = resulta + resultb;
        cout << finish << endl;
        int p = 0;
        int s =  0;
        if (finish > 255)
            s =  10000;
        else
            s =  128;
        while (s > 0)
        {
            if (finish >= s)
            {
                done += "1";
                p++;
                finish -= s;
            }
            else if (p)
                done += "0";
            s /= 2;
        }
        return done;
    }
};

int main()
{
    Solution s;

    cout << s.addBinary("1010", "1011") << endl;
}