import java.io.*;
public class FANCY {
    public static void main(String[] args) throws IOException {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int flag=0;
        int t = Integer.parseInt(br.readLine());

        while(t!=0) {

            String y = br.readLine();
            String arr[] = y.split(" ");
            for (int i=0; i < arr.length; i++) {
                flag = 0;
                if(arr[i].equalsIgnoreCase("not")) {
                    System.out.println("Real Fancy");
                    break;
                }
                else{
                    flag = 1;
                }
            }
            if(flag==1)
                System.out.println("regularly fancy");
            t--;
        }
    }
}
