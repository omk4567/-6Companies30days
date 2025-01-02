class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) { 
        int n = nums.size(); 
        vector<int> temp(n, 0); 

        for(int i = 0; i < n; i++){
            if(nums[i] % 2 != 0){
                temp[i] = 1; 
            }
            else{
                temp[i] = 0;  
            }
        } 

        int sum = 0; 
        int count = 0; 
        unordered_map<int, int> freqMap; 

        for(int i = 0; i < n; i++){
            sum += temp[i]; 

            if(sum == k) count++; 

            if(freqMap.find(sum - k) != freqMap.end()){
                count += freqMap[sum - k]; 
            }

            freqMap[sum]++; 
        } 

        return count; 
    }
};