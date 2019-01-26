import java.util.*;
// Gathering prime numbers from front and back that add up to 'n'... O(n) time
public class TwoPrimeNumbers {
    private static boolean isPrime(int x) {
        if(x <= 1) return false;
        for(int i=2; (i*i)<=x; i++) {
            if(x%i == 0) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0; i<t; i++) {
            int n = sc.nextInt();
            for(int j=3; j<n; j++) {
                if(isPrime(j)==true && isPrime(n-j) == true) {
                   System.out.println(j+ " "+ (n-j));
                   break;
                }
            }
        }
    }
}
