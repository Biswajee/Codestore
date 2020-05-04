#define SIZE 32
class Solution {
public:
    int latest_setbit_idx(bitset<SIZE> x) {
        int val=0;
        string bit = x.to_string();
        for(auto x : bit) {
            if(x=='1') return SIZE-val;
            val++;
        }
        return -1;
    }
    
    int findComplement(int num) {
        if(num==0) return 1;
        bitset<32> bits(num);
        string binary=bits.to_string();
        reverse(binary.begin(), binary.end());
        int idx = latest_setbit_idx(bits);
        string comp="";
        for(int i=idx-1; i>=0; i--) {
            if(binary[i]=='1') comp.append("0");
            else comp.append("1");
        }
        int res=0;
        for(int i=idx-1; i>=0; i--) {
            if(comp[i]=='1') res+=pow(2,idx-i-1);
        }
        return res;
    }
};