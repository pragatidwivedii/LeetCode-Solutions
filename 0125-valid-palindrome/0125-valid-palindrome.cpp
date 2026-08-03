class Solution {
public:

    bool check_palindrome(string s){
        int i = 0;
        int j = s.size() - 1;
        while(i<=j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        int n= s.size();
        for(int i=0 ; i<n ;i++){
           if('A'<=s[i] && s[i]<='Z'){
            s[i] = s[i] + ('a' - 'A');
           }
           else if(('a'<=s[i] && s[i]<='z') || ('0'<=s[i] && s[i]<='9')) continue;
           else {
            s.erase(i,1);
            n--; i--;
           }
        }
        return check_palindrome(s);

    }
};