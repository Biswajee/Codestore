import java.io.*;

class PLAYPIAN {
	public static void main (String[] args) throws IOException {
	    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String y= "";
		int flag;
		int t = Integer.parseInt(br.readLine());
		for(int i=0; i<t; i++) {
		    y = br.readLine();
		    flag = 1;
		    for(int j=0; j<y.length(); j+=2){
		        if(y.charAt(j)==y.charAt(j+1)) {
		            flag=0;
		            break;
		        }
    	    }
	        if(flag==1)
	        System.out.println("yes");
	        else
	        System.out.println("no");
		}
		}
	}
