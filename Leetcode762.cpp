// 762. Prime Number of Set Bits in Binary Representation

class Solution {
public:
    bool isPrime(int n) { 
        if (n <= 1) 
            return false; 
        if (n <= 3) 
            return true;  
        if (n % 2 == 0 || n % 3 == 0) 
            return false; 

        for (int i = 5; i * i <= n; i = i + 6) 
            if (n % i == 0 || n % (i + 2) == 0) 
                return false; 

        return true; 
    }
    
    int countPrimeSetBits(int L, int R) {
        int count=0;
        for(int i=L; i<=R; i++) {
            int bits = __builtin_popcount(i);    // set bits
            if(isPrime(bits)) count++;
        }
        return count;
    }
};