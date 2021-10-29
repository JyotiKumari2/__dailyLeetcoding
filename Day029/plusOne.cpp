class Solution {
public:
vector plusOne(vector& digits) {
int digit =digits.size() -1;
while(digit>=0){
if(digits[digit]==9){
digits[digit]=0;
}else{
digits[digit] +=1;
return digits;
}
digit--;
}
digits.insert(digits.begin(),1);
return digits;
}
};