import java.util.*;
class STRCH {
    static long sum(long n) {
        return (n*(n+1))/2;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        long t = sc.nextInt();
        while(t!=0) {
            long y=0, missing = 0;
            long n = sc.nextInt();
            sc.nextLine();
            String[] s = sc.nextLine().split(" ");
            for(int i=0; i<n; i++) {
                if(s[0].charAt(i) == s[1].trim().charAt(0)) {
                    missing += sum(y);
                    y = 0;
                } else {
                    ++y;
                }
            }
            missing += sum(y);
            System.out.println(sum(n) - missing);
            t--;
        }
    }
}