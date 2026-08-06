class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> result;
        for(int i = 0; i < n; i++){
            for(int j =0; j < n; j++){
                if(target == nums[i] + nums[j] && i != j){
                    result.push_back(i);
                    result.push_back(j);
                    return result; 
                }
                
            }
        }
        return result;        
    }
};

/*url -   https://leetcode.com/problems/two-sum/  */
