class Solution {
public:
    string largestOddNumber(string num) {
      int n = num.size();
    //   cout<<((num[n-1]-'0')&1);
    //   num.erase(n-1,1);
    //   cout<<num;
      for(int i = n-1 ; i >= 0 ; i--){
        if(((num[i]-'0')&1) == 0){
            num.erase(i,1);
        }
        else{
            break;
        }
      }
      return num;
    }
};