class Solution {
public:
    int kmp(string s){
        vector<int> v1(s.size());
        int i=1,len=0;
        v1[i]=0;
        while(i<s.size()){
            if(s[i]==s[len]){
                len++;
                v1[i]=len;
                i++;
            }
            else{
                if(len>0){
                    len=v1[len-1];
                }else{
                    v1[i]=0;
                    i++;
                    
                }
                
            }
        }
        return v1[v1.size()-1];
    }
    string shortestPalindrome(string s) {
        if(s.size()==0||s.size()==1){
            return s;
        }
        string t=s;
        reverse(t.begin(),t.end());

        int dp=kmp(s+'#'+t);
        if(dp==s.size()){
            return s;
        }
        string k=s.substr(dp,s.size());
        reverse(k.begin(),k.end());
        return k+s;
        
        
    }
};