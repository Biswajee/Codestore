class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        int limx = (x!=1) ? log(bound)/log(x): 1;
        int limy = (y!=1) ? log(bound)/log(y): 1;
        int a, b, sum;
        set<int> st;
        for(int i=0; i<=limx; i++) {
            a = pow(x,i);
            for(int j=0; j<=limy; j++) {
                b = pow(y,j);
                sum=a+b;
                if(sum>bound) break;
                else st.insert(sum);
            }
        }
        return vector<int>(st.begin(), st.end());
    }
};