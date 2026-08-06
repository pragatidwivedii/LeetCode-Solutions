class Solution {
public:

    void solve(vector<int>& candidates, int target , vector<int> &temp , int i , vector<vector<int>> &ans){


        for(int j = i ; j < candidates.size() ; j++){

            if(j > i && (candidates[j-1] == candidates[j])) continue;

            if(target - candidates[j] < 0) break;

            if(target - candidates[j] == 0){
                temp.push_back(candidates[j]);
                ans.push_back(temp);
                temp.pop_back();
                break;
            }

            temp.push_back(candidates[j]);
            solve(candidates , target-candidates[j] , temp , j+1 , ans);
            temp.pop_back();            
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin() , candidates.end());
        solve(candidates , target , temp , 0 ,ans);
        return ans;
    }
};