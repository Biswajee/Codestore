import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class Candies {
    public static void main(String[] args) throws IOException {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        ArrayList<Integer> arrli = new ArrayList<Integer>(n);
        for(int i=0; i < n; i++) {
            String inp = br.readLine();
            if(!inp.equals(""))
                arrli.add(Integer.parseInt(inp));
            else
                break;
        }

        long res = candy(arrli);
        System.out.println(res);
    }

    public static long candy(ArrayList<Integer> a) {
        int size = a.size();
        int[] cand = new int[size];

        // give all children candies equal to 1
        // local minimas will get 1
        for(int i = 0; i < size; i++)
        {
            cand[i] = 1;
        }
        // increase count on the right of local minimas
        for(int i = 1; i < size; i++)
        {
            if(a.get(i) > a.get(i-1))
            {
                cand[i] = cand[i-1]+1;
            }
        }
        // increase count on the left of local minimas
        // local maximas should be max of left and right
        for(int i = size-2; i >= 0; i--)
        {
            if(a.get(i) > a.get(i+1))
            {
                cand[i] = Math.max(cand[i], cand[i+1]+1);
            }

        }

        // get the sum
        int count = 0;
        for(int i = 0; i < size; i++)
        {
            count = count + cand[i];
        }
        return count;
    }
}
