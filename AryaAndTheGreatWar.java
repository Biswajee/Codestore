/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class AryaAndTheGreatWar {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int t = sc.nextInt();
		for(int i=0; i<t; i++) {
		    int x = sc.nextInt();
		    String str = Integer.toBinaryString(x);
		    char a=' '; int count = 0;
		    for(int j=0; j < str.length(); j++) {
		        a = str.charAt(j);
		        if(a == '1') {
		            count++;
		        }
		    }
		    System.out.println(count);
		}
	}
}