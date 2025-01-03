class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.size(); 
        unordered_map<string, int> subStringCount; 
        vector<string> result; 

        for(int i = 0; i <= n - 10; i++){
            string subString = s.substr(i, 10); 
            subStringCount[subString]++; 
        } 

        for(auto &[key, count] : subStringCount){
            if(count > 1){
                result.push_back(key); 
            }
        } 

        return result;
    }
};