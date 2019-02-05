import java.util.Scanner;
import java.math.BigInteger;

import static java.lang.Math.min;

public class nCr {
    static BigInteger binomialCoeff(int n, int k) {
        BigInteger C[][] = new BigInteger[n+1][k+1];
        int i, j;
        for(i=0; i<=n; i++) {
            for(j=0; j<=min(i, k); j++) {
                if(j==0 || j==i) C[i][j] = new BigInteger("1");
                else C[i][j] = C[i-1][j-1].add(C[i-1][j]);
            }
        }
        return C[n][k].mod(new BigInteger("1000000007"));
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        BigInteger res=new BigInteger("0");
        long t = sc.nextInt();
        while(t!=0) {
            int n = sc.nextInt();
            int r = sc.nextInt();
            if(n < r) System.out.println(0);
            else {
                res = binomialCoeff(n, r);
                System.out.println(res);
            }
            t--;
        }
    }
}
