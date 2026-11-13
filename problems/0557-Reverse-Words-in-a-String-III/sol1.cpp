// ==========================================================
// 557. Reverse Words in a String III
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 9 ms (Beats 13%)
// Memory     : 14.8 MB (Beats 31%)
// Link       : https://leetcode.com/problems/reverse-words-in-a-string-iii/
// ==========================================================

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();

        string ans;
        string t;

        for (char i : s){
            if (i == ' '){
                reverse(t.begin() ,t.end());
                ans += t;
                ans += i;
                t.clear();
            }
            else{
                t += i;
            }
        }

        if (!t.empty()) {
            reverse(t.begin() ,t.end());
            ans += t;
        }

        return ans;
    }
};