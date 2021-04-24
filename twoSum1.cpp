class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        indices.reserve(nums.size());
        
        for(int i=0; i < nums.size(); i++){
            for(int j=1; j < nums.size(); j++){
                if(nums[j] == (target-nums[i])){
                    //return new int[] {i,j};
                    indices.push_back(i);
                    indices.push_back(j);
                    //break;
                }
               else
                   continue;
            }
      //  break;
        }
        return indices;
    }
};
