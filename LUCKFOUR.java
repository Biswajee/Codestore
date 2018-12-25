import java.io.*;

class LUCKFOUR {
	public static void main (String[] args)throws IOException {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		long t = Integer.parseInt(br.readLine());
		long a=0, count;
		for(int i=0; i<t; i++){
		    count = 0;
		    long n = Integer.parseInt(br.readLine());

		    while(n!=0){
		        a = n%10;
		        if(a==4)
		        count++;
		        n = n/10;
		    }
		    System.out.println(count);
		}
	}
}
