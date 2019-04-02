//Initial Template for Java
//Initial Template for Java
        import java.util.*;
        import java.io.*;
public class validip {
    public static void main(String[] args){
        Scanner sc= new Scanner (System.in);
        int t = sc.nextInt();
        while(t-->0){
            String s = sc.next();
            Solution obj = new Solution();

            if(obj.isValidIP(s))
                System.out.println(1);
            else
                System.out.println(0);
        }
    }
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for Java
class Solution {
    int dotCount(String s) {
        int count = 0;
        char c = ' ';
        for(int i=0; i<s.length(); i++) {
            c = s.charAt(i);
            if(c == '.') count++;
        }
        return count;
    }

    public boolean isValidIP(String s){
        try {
            if(dotCount(s) != 3) return false;
            String y[] = s.split("\\.");
            if(y.length != 4) return false;
            else {
                int a = 0;
                for(int i=0; i< y.length; i++) {
                    a = Integer.parseInt(y[i].trim());
                    if(a > 255) return false;
                    if(((y[i].charAt(0) == '0' || y[i].charAt(0) == ' ') && y[i].length() != 1) || y[i].length() == 0) return false;
                }
            }
            return true;
        } catch(Exception e) {
            return false;
        }
    }
}