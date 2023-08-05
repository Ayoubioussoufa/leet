#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>

using namespace std;

/*class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        int f = digits.length();
        if (!f)
            return result;
        map<int, string> maps;
        vector<string> vec;
        maps[2] = "abc";
        maps[3] = "def";
        maps[4] = "ghi";
        maps[5] = "jkl";
        maps[6] = "mno";
        maps[7] = "pqrs";
        maps[8] = "tuv";
        maps[9] = "wxyz";
        for (size_t i = 0; i < digits.length(); ++i) {
            vec.push_back(maps[digits[i] - '0']);
        }
        int j(0);
        int k(0);
        int i(0);
        vector<string>::iterator it1 = vec.begin();
        int s(0);
        while(i < vec.size())
        {
            while (k < it1[i].length())
            {
                while (it1[i][j])
                {
                    if (i + 1 < vec.size() && it1[i + 1][j] < 122)
                        result.push_back(std::string(1, it1[i][k]) + it1[i + 1][j]);
                    else if (!s)
                    {
                        s++;
                        result.push_back(std::string(1, it1[i][k]));
                    }
                    j++;
                }
                k++;
                j = 0;
                s = 0;
            }
            i++;
        }
        return result;
    }
};*/ //t7imrt but np 

class Solution {
public:
    std::vector<std::string> letterCombinations(std::string digits) {
        if (digits.empty()) return std::vector<std::string>();

        std::string phone_map[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        std::vector<std::string> combinations;
        combinations.push_back("");

        for (size_t idx = 0; idx < digits.length(); ++idx) {
            int digit = digits[idx] - '0';
            std::vector<std::string> new_combinations;
            for (size_t j = 0; j < combinations.size(); ++j) {
                std::string combination = combinations[j];
                std::string mapping = phone_map[digit - 2];
                for (size_t k = 0; k < mapping.length(); ++k) {
                    new_combinations.push_back(combination + mapping[k]);
                }
            }
            combinations = new_combinations;
        }
        return combinations;
    }
};

int main()
{
    Solution s;

    string digits = "234";
    vector<string> plop;
    plop = s.letterCombinations(digits);
}