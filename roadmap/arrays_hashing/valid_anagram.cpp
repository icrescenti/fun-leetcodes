#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    //Problem: Given two strings s and t, return true if t is an anagram of s, and false otherwise.

    vector<char> parseToChain(string _string) {
        int _len = _string.length();
        vector<char> aux;
        
        for (size_t i = 0; i < _len; i++) {
            aux.push_back(_string[i]);
        }
        
        return aux;
    }

    bool compareChains(vector<char> chain_1, vector<char> chain_2) {
        int chain_1_size = chain_1.size();
        
        if (chain_1_size == chain_2.size()) {
            size_t i = 0;
            bool different = false;

            while (!different && i < chain_1_size) {
                if (chain_1[i] != chain_2[i]) {
                    different = true;
                }
                i++;
            }

            return !different;
        } else {
            return false;
        }
    }

    bool isAnagram(string s, string t) {
        vector<char> first_string = parseToChain(s);
        vector<char> second_string = parseToChain(t);

        sort(first_string.begin(), first_string.end());
        sort(second_string.begin(), second_string.end());

        if (s.length() == t.length()) {
            return compareChains(first_string, second_string);
        } else {
            return false;
        }
    }
};