/*package whatever //do not write package name here */

import java.io.*;

class LIFELTD {
	public static void main (String[] args) throws IOException {
	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	String a,b,c;
	int t = Integer.parseInt(br.readLine());
	while(t!=0) {
	    a = br.readLine();
	    b = br.readLine();
	    c = br.readLine();

	    char a_arr[] = new char[3];
	    char b_arr[] = new char[3];
	    char c_arr[] = new char[3];

	    a_arr = a.toCharArray();
	    b_arr = b.toCharArray();
	    c_arr = c.toCharArray();

	    if(a_arr[0] == 'l' && b_arr[0] == 'l' && b_arr[1] == 'l') {
	        System.out.println("yes");
	    }
	    else if(a_arr[1] == 'l' && b_arr[1] == 'l' && b_arr[2] == 'l') {
	        System.out.println("yes");
	    }
	    else if(b_arr[0] == 'l' && c_arr[0] == 'l' && c_arr[1] == 'l') {
	        System.out.println("yes");
	    }
	    else if(b_arr[1] == 'l' && c_arr[1] == 'l' && c_arr[2] == 'l') {
	        System.out.println("yes");
	    }
	    else {
	        System.out.println("no");
	    }


	    t--;
	}

	}
}
