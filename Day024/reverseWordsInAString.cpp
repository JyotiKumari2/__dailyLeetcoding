class Solution {
public:
    string reverseWords(string s) {
           int n=s.length();
           int l=0;
           int cnt=0;
           int r=0;
           for(int i=0;i<n;i++)
           {   
               
               if(s[i]!=' ')
                   continue;
                else if(s[i]==' ' )
                {
                    r=i-1;
                    while(l<=r)
                    {
                        swap(s[l],s[r]);
                            l++;
                            r--;
                    }
                    l=i+1;
                    
                }
               
               
           }
           r=n-1;
        while(l<=r)
        {
            swap(s[l],s[r]);
            l++;
            r--;
        }
        return s;
    }
};