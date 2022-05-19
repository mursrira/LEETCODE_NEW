class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> out_v;
        map<int, int> map1;
        int other_num;

        
        // Create Map         
        for(int i=0; i < nums.size(); i++){
            map1[nums[i]] = i;
        }
        
        
        for(int i=0; i < nums.size(); i++){
            
            other_num = target - nums[i];
            
             if ( (map1.find(other_num) != map1.end()) and (i != map1[other_num]) ) {
                 
                 out_v.push_back(i);
                 out_v.push_back(map1[other_num]);
                 break;
                 
                }
            
        }
        
        return out_v;


        
    }
    
};