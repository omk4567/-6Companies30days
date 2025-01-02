class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();  
        vector<int> temp;  
        unordered_map<int, bool> mp; 

        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                
                int k = 0; 
                int flag = 0;  
                while(k < n){
                    if(k>= i && k<=j){
                        k++;
                        continue;
                    }     
                    if(mp.find(nums[k]) != mp.end()){ 
                        flag = 1; 
                        break; 
                    }  
                    temp.push_back(nums[k]);
                    mp[nums[k]] = true;  
                    k++;                      
                }  

                if(flag == 1){
                    temp.clear();
                    mp.clear();
                    continue; 
                }
                
                if(is_sorted(begin(temp), end(temp))){
                    cnt++;  
                } 

                temp.clear();
                mp.clear();
            } 
            
        } 

        return cnt;
    }
};