class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string res;
        int n=word1.length();
        int m=word2.length();
        while(i<n && j<m){
            res+=word1[i++];
            res+=word2[j++];
        }
        if(n<m){
            while(j<m){
                res+=word2[j++];
            }
        }
        if(n>m){
            while(i<n){
                res+=word1[i++];
            }
        }
        return res;
    }
};