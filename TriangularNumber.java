import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class TriangularNumber {
    public static void main(String[] args) throws IOException {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int sum, flag;
        int t = Integer.parseInt(br.readLine());
        for(int i=0; i < t; i++) {
            int n = Integer.parseInt(br.readLine());
            sum = 0; flag = 0;
            for(int j=1; j <= n; j++) {
                sum = sum + j;
                if(sum == n) {
                    System.out.println(1);
                    flag = 1;
                    break;
                }
            }
            if(flag != 1) System.out.println(0);
        }
    }
}
