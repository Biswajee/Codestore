import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the isBalanced function below.
    static String isBalanced(String x) {
        Stack<Character> s = new Stack();
        for(int i=0; i<x.length(); i++) {
            if(x.charAt(i) == '{' || x.charAt(i) == '(' || x.charAt(i) == '[')
                s.push(x.charAt(i));
            else {
                if((x.charAt(i) == '}' || x.charAt(i) == ']' || x.charAt(i) == ')') && (s.isEmpty() == true)) return "NO";
                if(x.charAt(i) == '}' && s.peek() == '{') {
                    s.pop();
                }
                else if(x.charAt(i) == ']' && s.peek() == '[') {
                    s.pop();
                }
                else if(x.charAt(i) == ')' && s.peek() == '(') {
                    s.pop();
                }
                else {
                    return "NO";
                }
            }
        }
        if(s.isEmpty()) {
            return "YES";
        } else {
            return "NO";
        }
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int tItr = 0; tItr < t; tItr++) {
            String s = scanner.nextLine();

            String result = isBalanced(s);

            bufferedWriter.write(result);
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}
