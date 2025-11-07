class Solution {
public:
    int romanToInt(string s) {
        if(s.empty()) return 0;
        int cnt=0;
        for(int i = 0 ; i < (int)s.size(); i++){
            if(s[i]=='I'){
                if (i + 1 < s.size() && (s[i + 1] == 'V' || s[i + 1] == 'X')) {
                    cnt -= 1;
                } else cnt += 1;
            }
            else if(s[i]=='X'){
                if (i + 1 < s.size() && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
                    cnt -= 10;
                } else cnt += 10;
            }
            else if(s[i]=='C'){
                if (i + 1 < s.size() && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
                    cnt -= 100;
                } else cnt += 100;
            }
            else if (s[i] == 'V') cnt += 5;
            else if (s[i] == 'L') cnt += 50;
            else if (s[i] == 'D') cnt += 500;
            else if (s[i] == 'M') cnt += 1000;
        }
        return cnt;
    }
};