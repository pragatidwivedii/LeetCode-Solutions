class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.size();
        vector<int> a;
        vector<int> b(n , 0);
        for(auto x: s){
            if(x == 'R') a.push_back(1);
            else a.push_back(-1);
        }
        b[0]=a[0];
        for(int i=1 ; i<n ; i++){
            b[i] = b[i-1] + a[i];
        }
        // for(auto x : a) cout<<x<<','; cout<<endl;
        // for(auto x : b) cout<<x<<',';
        int ans = 0;
        for(auto x : b){
            if(x == 0) ans++;
        }
        return ans;
    }
};