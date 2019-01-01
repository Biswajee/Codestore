import java.io.*;

public class ArraySum {
    public static String findsum(String x, String y) {
        String str = "";
        int temp;
        char xarr[] = new char[1000];
        char yarr[] = new char[1000];
        int n1 = x.length(), n2 = y.length();
        if(n1 < n2) {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        StringBuffer xsb=new StringBuffer(x);
        StringBuffer ysb=new StringBuffer(y);
        xarr = xsb.reverse().toString().toCharArray();
        yarr = ysb.reverse().toString().toCharArray();
        int carry = 0;
        for(int i=0; i<n1; i++) {
            int a = Integer.parseInt(xarr[i]+"") + Integer.parseInt(yarr[i]+"") + carry;
            System.out.print(a + " ");
            if(a > 9)
                carry = 1;
            else
                carry = 0;

            str = str + a;
        }

        StringBuffer strsb = new StringBuffer(str);

        return strsb.reverse().toString();
    }


    public static void main(String[] args) throws IOException {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        String arr[] = new String[n];
        for(int i=0; i<n; i++) {
            arr[i] = br.readLine();
        }
        String sum = "0";
        for(int i=0; i<n; i++) {
            sum = findsum(arr[i], sum);
        }
        System.out.println(sum);
    }
}







/* Thug Life : Using BigInteger Addition in JAVA */

//import java.math.*;
//import java.io.*;
//class TestClass {
//    public static void main(String[] args) throws IOException{
//        BigInteger bi1, sum;
//        sum = new BigInteger("0");
//        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
//        int n = Integer.parseInt(br.readLine());
//        String y[] = br.readLine().split(" ");
//        for(int i=0; i<n; i++) {
//            String x = y[i];
//            bi1 = new BigInteger(x);
//            sum = bi1.add(sum);
//        }
//        System.out.println(""+sum);
//    }
//}