import java.util.*;
class Hotels {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int x,sum=0, maxv = 0;
        for(int i=0; i<n; i++) {
            x = sc.nextInt();
            sum +=x;
            if(sum <= x) {
                sum = (sum > x) ? sum : x;
                maxv = (maxv > sum) ? maxv : sum;
            } else {
                sum = 0;
            }
        }
        System.out.println(maxv);
    }
}