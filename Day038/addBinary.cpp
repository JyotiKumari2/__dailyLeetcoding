class Solution {
public:
string addBinary(string A, string B) {
int i=A.size()-1;
int j=B.size()-1;
string result;
int carry=0;
while(i>=0 || j>=0)
{
int sum=carry;
if(i>=0)
{
sum+=A[i--]-'0';
}
if(j>=0)
{
sum+=B[j--]-'0';
}
carry=sum>1?1:0;
result+=to_string(sum%2);

    }
    if(carry)
    {
    result+=to_string(carry);
    }
    reverse(result.begin(),result.end());
    return result;
}
};