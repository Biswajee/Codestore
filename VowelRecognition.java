import java.io.*;

public class VowelRecognition {
    public static long vowel(String x) {
        long count = 0;
        x = x.toUpperCase();
        char a = ' ';
        for (int i = 0; i < x.length(); i++) {
            a = x.charAt(i);
            if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
                count++;
        }
        return count;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t != 0) {
            String y = br.readLine();
            if (y.length() == 0) {
                System.out.println("0");
                return;
            }
            long sum = 0;
            for (int i = 1; i <= y.length(); i++) {
                for (int j = 0; j < i; j++) {
                    String x = y.substring(j, i);
                    sum = sum + vowel(x);
                }
            }
            System.out.println(sum);
            t--;
        }
    }
}
