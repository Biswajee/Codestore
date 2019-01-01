import java.io.*;

public class GameOfGrid {
    public static void main(String[] args) throws IOException {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int array[][] = new int[n][n];

        for(int i=0; i<n; i++) {
            array = Integer.parseInt(br.readLine().split(" "));
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                System.out.print(array[i][j] + " ");
            }
        }
    }
}
