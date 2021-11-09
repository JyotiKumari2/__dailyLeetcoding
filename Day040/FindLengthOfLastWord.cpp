class Solution {
public:
    int lengthOfLastWord(string s) {
        int lengthOfLastWord=0;
        int n=s.length();
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=' ')
                lengthOfLastWord++;
            if(lengthOfLastWord!=0 && s[i]==' ')
                  break;
            
        }
        return lengthOfLastWord;
    }
};