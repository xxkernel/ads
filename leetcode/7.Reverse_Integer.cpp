class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x!=0){
            int temp = x%10;
            if((INT_MAX/10<ans) || (INT_MIN/10>ans)){
                return 0;
            }
            ans = (ans*10)+temp;
            x = x/10;
        }
        return ans;
    }
};