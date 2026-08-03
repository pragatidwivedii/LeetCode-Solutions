class Solution {
public:

    void reverse(int i , int j , string &s){
        while(i <= j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
    string reverseStr(string s, int k) {
        int i = 0;
        int j = k-1;
        int n = s.size();
        while(i < n){
            if(j >= n) j = n-1;
            reverse(i,j, s);
            i = i+(2*k);
            j = i + k - 1; 
        }
        return s;
    }
};