int power(int a, int b){
    if(b==0){
        return 1;
    }
    int temp = power(a, b/2);
    int res = temp*temp;
    if(b%2==1){
        res*=a;
    }
    return res;
}