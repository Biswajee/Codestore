import java.io.*;

class VALIDSTK {
	public static void main (String[] args) throws IOException{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n;
		int t = Integer.parseInt(br.readLine());
		while(t!=0) {

		    n = Integer.parseInt(br.readLine());
		    String inp[]  = br.readLine().split(" ");
		    int inp_int[] = new int[n];

		    for(int i=0; i<n; i++) {
		        inp_int[i] = Integer.parseInt(inp[i]);
		    }
		    int count = 0;

		    for(int i=0; i<n; i++) {

		        if(inp_int[i] == 0) {
		            count--;
		            if(count<0)
		            break;
		        }
		        else if(inp_int[i] == 1) {
		            count++;
		        }
		    }

		    if(count < 0)
		    System.out.println("Invalid");
		    else
		    System.out.println("Valid");
		    t--;
		}
	}
}
