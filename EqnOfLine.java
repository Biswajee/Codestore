import java.util.*;

public class EqnOfLine {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s;
        int n = sc.nextInt();
        for(int i=0; i < n; i++) {
            int x1 = sc.nextInt();
            int y1 = sc.nextInt();
            int x2 = sc.nextInt();
            int y2 = sc.nextInt();

            int x = y2 - y1;
            int y = x1 - x2;
            int c = x1*y2 - x2*y1;

            if(y > 0) {
                s = "+";
            }
            else {
                s = "";
            }
            System.out.println(x+"x" + s + y+"y" + "="+c);
        }
    }
}
