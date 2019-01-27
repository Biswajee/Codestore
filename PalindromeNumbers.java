/*
* Check if binary representation of a number is palindrome
* Input:
    The first line contains an integer T, depicting total number of test cases.
    Then following T lines contains an integer N.

* Output:
    Each seperate line showing output 0(False) or 1 (True).
* Constraints:
    1 ≤ T ≤ 30
    1 ≤ N ≤ 1018

* Example:
     Input:
        2
        999
        17

    Output:
        0
        1
 */
import java.util.*;
public class PalindromeNumbers {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String num;
        int t = sc.nextInt();
        for(int i=0; i<t; i++) {
            int redFlag = 0;
            long inp = sc.nextLong();
            if(inp%2 == 0) {
                System.out.println(0);
                continue;
            }
            num = Integer.toBinaryString((int)inp);
//            System.out.println(num);
            for(int j=0; j < num.length()/2; j++) {
                if(num.charAt(j) == num.charAt(num.length()-j-1)) {

                } else {
                    System.out.println(0);
                    redFlag = 1;
                    break;
                }
            }
            if(redFlag == 0) System.out.println(1);
        }
    }
}
