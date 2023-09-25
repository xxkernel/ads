class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        int res = 0;
        int i = 1;
        int j = 0;
        while(n!=0){
            int temp = n%2;
            n/=2;
            if(temp==0){
                res += 1<<j;
            }
            i++;
            j++;
        }
        return res;
    }
};