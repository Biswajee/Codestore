import java.io.*;
public class GennadyandaCardGame {
    public static void main(String[] args) throws IOException {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int flag=0;
        String y = br.readLine();

        String str[] = br.readLine().split(" ");
        for(int i=0; i < str.length; i++) {
            if (y.charAt(0) == str[i].charAt(0) || y.charAt(1) == str[i].charAt(1)) {
                System.out.println("Yes");
                break;
            } else
                flag++;
        }

        if(flag==str.length)
            System.out.println("No");
    }
}
