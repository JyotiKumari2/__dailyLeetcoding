class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        
        int i=0;
        for(i=s.size()-1; i>0; i--){
            if(s[i]>s[i-1]){
                break;
            }
        }
        if(i==0){ return -1;} //couldnt find bigger number
        
        //finding smaller number than above
        int x=s[i-1], small=i;
        for(int j=i+1; j<s.size(); j++){
            if((s[j]>x)&&(s[j]<=s[small])){
                small=j;
            }
        }
        //replacing
       swap(s[i-1],s[small]);

        sort(s.begin() + i, s.end());
        cout<<s;
        
        long res = stol(s);
        
        if((res>INT_MAX) || (res<n)) return -1;
        else return res;
    }
    
};