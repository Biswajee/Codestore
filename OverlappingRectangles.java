import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.nio.Buffer;

public class OverlappingRectangles {
    public static void main(String[] args) throws IOException {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int coord1[] = new int[4];
        int coord2[] = new int[4];
        int t = Integer.parseInt(br.readLine());
        for(int i=0; i<t; i++) {
            String arr[] = br.readLine().split(" ");
            // Convert String to int array...
            for(int j=0; j < arr.length; j++) {
                coord1[j] = Integer.parseInt(arr[j]);
            }
            arr = br.readLine().split(" ");

            // Convert String to int array...
            for(int j=0; j < arr.length; j++) {
                coord2[j] = Integer.parseInt(arr[j]);
            }

            if((coord1[1] <= coord2[1] && coord2[1]<= coord1[3]) || (coord1[1] <= coord2[3] && coord2[3] <= coord1[3]) || (coord2[1] <= coord1[1] && coord1[1] <= coord2[3]) || (coord2[1] <= coord1[3] && coord1[3] <= coord2[3])) {
                if((coord1[0] <= coord2[0] && coord2[0] <= coord1[2]) || (coord1[0] <= coord2[2] && coord2[2] <= coord1[2]) || (coord2[0] <= coord1[0] && coord1[0] <= coord2[3]) || (coord2[0] <= coord1[2] && coord1[2] <= coord2[3])) {
                    System.out.println(1);
                }
                else {
                    System.out.println(0);
                }
            }
            else {
                System.out.println(0);
            }

        }
    }
}
