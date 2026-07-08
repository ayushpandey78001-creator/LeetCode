class Solution {
public:
    int digits(int n){
        int c=0;
        for(int i=n;i>0;i/=10){
            c++;
        }
        return c;
    }

    vector<int> addToArrayForm(vector<int>& num, int k) {
        for(int j=num.size()-1;j>=0;j--){
            if((num[j]+(k%10))<=9){
                num[j]=num[j]+(k%10);
            }
            else{
                // Store the last digit of the overflowed sum
                num[j]=(num[j]+(k%10))%10;
                
                // Instead of modifying the array ahead of time, 
                // just let k hold the carry for the next loop iteration.
                k += 10;
            }
            k/=10;
        }

        // Insert any remaining digits of k at the very front
        while(k > 0) {
            num.insert(num.begin(), k % 10);
            k /= 10;
        }

        return num;
    }
};