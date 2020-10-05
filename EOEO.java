import java.util.*;
class Solution {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long t = sc.nextLong();
        while(t>0) {
            long n = sc.nextLong();
            long temp=n,count=0,result;
            while(temp&1!=0) {
                temp/=2;
                count++;
            }
            count++;
            result=n/Math.pow(2, count);
            System.out.println(result);
            t--;
        }
    }
}