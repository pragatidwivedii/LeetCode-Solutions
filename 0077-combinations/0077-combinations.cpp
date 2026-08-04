class Solution {
public:
    void solve(vector<vector<int>> &ans , vector<int> &temp , int n , int k){
        if(k == 0){
            ans.push_back(temp);
            return;
        }
        if(n == 0) {
            return;
        }

        temp.push_back(n);
        solve(ans , temp , n-1 , k-1);
        temp.pop_back();
        solve(ans , temp , n-1 , k);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(ans , temp , n ,k);
        return ans;
    }
};