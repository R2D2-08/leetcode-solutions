class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        int res=0;
        unordered_map<char,int> numeric={{'M',1000},{'D',500},{'C',100},{'L',50},{'X',10},{'V',5},{'I',1}};
        for(int i=0;i<n;i++){
            if(i<n-1 && numeric[s[i]]<numeric[s[i+1]]){
                res=res-numeric[s[i]];
            }
            else{
                res=res+numeric[s[i]];
            }
        }
        return res;
    }
};