class Solution {
    public:
        bool validPalindrome(string s) {
        
            int start = 0;
            int end = s.length()-1;
            int len_s = s.length();
            
            while(start < end){
                
                if(s[start] != s[end]){
                                        
                    return (helper(s.substr(start+1,len_s-1)) or helper(s.substr(start,len_s-1)));
                    
                }
                
                       
                start += 1;
                end -= 1;
                len_s -= 2;
            }
            
            return true;
            
        }
    
        bool helper(string s){

            int start = 0;
            int end = s.length()-1;
            
            while(start < end){
                if(s[start] != s[end]){
                    return false;
                }
                start += 1;
                end -= 1;
            }
            return true;
        }
    
};

