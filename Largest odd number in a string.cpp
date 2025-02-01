class Solution{    
public:        
    string largeOddNum(string& s){
        int n = s.size();
        int k;
        int j = -1;
        
        for(int i = n - 1; i >= 0; i--){
            if((s[i] - '0') % 2 == 1){
                j = i;
                break;
            }
        }
        
        if(j == -1){
            return "";
        }
        
        for(int i = 0; i < n; i++){
            if(s[i] != '0'){
                k = i;
                break;
            }
        }
        
        return s.substr(k, j + 1 - k);
    }
};


