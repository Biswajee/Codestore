class Solution {
public:
    int intermediate(long long int n) {
        long long int a,sum=0;
        while(n>0) {
            a=n%10;
            sum+=(a*a);
            n/=10;
        }
        // cout << sum << endl;
        return sum;
    }
    bool isHappy(long long int n) {
        long long int res=0;
        if(n==1111111LL) return true;
        while(1) {
            res = intermediate(n);
            if(res!=1 && res>9) n = res;
            else if(res<10 && res!=1) return false;
            else return true;
        }
        return true;
    }
};