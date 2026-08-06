class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int n = s.size();
        bool palidrome = true;
        for(int i = 0; i < n/2; i++){
            if(s[i] == s[n-i-1]){
                palidrome = true;
            }
            else{
                palidrome = false;
                return palidrome;
            }
        }
        return palidrome;
    }
};

/*  https://leetcode.com/problems/palindrome-number/description/ */
