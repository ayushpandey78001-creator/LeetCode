class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       
       if(digits[digits.size()-1]!=9){
        digits[digits.size()-1]+=1;  
    }
    else{
        int i=digits.size()-1;
        while(i>=0? digits[i]==9 : false){
            digits[i]=0;
            i-=1;
        }
        if(i>=0){
        digits[i]+=1;  
        }
        else{
            digits.insert(digits.begin(),1);
        }     
    }
return digits;
    }
};