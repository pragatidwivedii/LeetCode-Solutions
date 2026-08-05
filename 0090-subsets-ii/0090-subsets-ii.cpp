class Solution {
public:
void solve(int i , vector<int> &nums , set<vector<int>> &temp_ans , vector<int> &temp){
    if(i == nums.size()){
        // sort(temp.begin(),temp.end());
        temp_ans.insert(temp);
        return;
    }

    temp.push_back(nums[i]);
    solve(i+1 , nums , temp_ans , temp);
    temp.pop_back();
    solve(i+1 , nums , temp_ans , temp);
    
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> temp_ans;  
        vector<int> temp;
        vector<vector<int>> ans;
        sort(nums.begin() , nums.end());
        solve(0 , nums , temp_ans , temp);
        for(auto x : temp_ans){
            ans.push_back(x);
        }
        return ans;
    }
};