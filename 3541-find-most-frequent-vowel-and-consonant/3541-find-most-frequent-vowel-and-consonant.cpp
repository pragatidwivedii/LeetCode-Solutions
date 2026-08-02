class Solution {
public:
    int maxFreqSum(string s) {
        map<int , int> m;
        string vowels = "aeiou";
        int max_v = 0;
        int max_c = 0;
        for(auto c : s) {
            m[c]++;
            if(vowels.contains(c)){
                max_v = max(max_v , m[c]);
            }
            else{
                max_c = max(max_c , m[c]);
            }
        }
        return (max_v + max_c);
    }
};