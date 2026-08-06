class Solution {
public:
    void solve(vector<int>& candidates, int target,
               vector<vector<int>>& ans, int cur_sum,
               vector<int>& temp, int i){

        if(cur_sum == target){
            ans.push_back(temp);
            return;
        }

        for(int j = i; j < (int)candidates.size(); j++){
            
            if(cur_sum + candidates[j] > target) break;  

            temp.push_back(candidates[j]);
            solve(candidates, target, ans, cur_sum + candidates[j], temp, j);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());  
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates, target, ans, 0, temp, 0);
        return ans;
    }
};