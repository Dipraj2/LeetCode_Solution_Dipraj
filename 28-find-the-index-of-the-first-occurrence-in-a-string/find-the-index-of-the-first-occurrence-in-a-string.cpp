class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.empty() || needle.empty()) return -1;
        int a = haystack.find(needle);
        if( a != string::npos){
            return a;
        }
        else return -1;
    }
};