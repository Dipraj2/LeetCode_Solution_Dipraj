class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        int ccng = 0;
        for(int i = (int)s.size() - 1 ; i >= 0 ; i--){
            if(s[i]!=' '){
                ccng = 1;
                cnt++;
            }
            else if(ccng == 1) {
                break;
            }
            
        }
        return cnt;
    }
};