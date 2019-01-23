/*
Given an array arr[] of N positive integers. The task is to find the greatest smaller on left of every element in the array.

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains size of array N and next line contains array elements.

Output:
For each testcase, print the array which contains greatest smaller element on left of every corresponding element in the array. For the element whose smaller on left doesn't exists, consider -1 as greatest smaller.

Constraints:
1 <= T <= 10^0
1 <= N <= 10^6
1 <= arr[i] <= 10^8

Example:
Input:
1
5
2 3 4 5 1

Output:
-1 2 3 4 -1

Explanation:
Testcase 1: Smallest element on left of 3 is 2, 4 is 3 and 5 is 1. Since 2 is the first element and no element on left is present, so it's greatest smaller element will be -1 and that for 1, no greatest smaller element is present on left, so it's greatest smaller element is -1.
*/


import java.io.*;
import java.util.*;
class SmallerOnLeft {
	public static void main (String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		int n,t;
		t=sc.nextInt();
		for(int i=0;i<t;i++){
		n=sc.nextInt();
		int a[]=new int[n];
		for(int j=0;j<n;j++)
		{
		    a[j]=sc.nextInt();
		}
		TreeSet<Integer> ts=new TreeSet<Integer>();
		int res=-1;
		for(int j=0;j<n;j++)
		{res=-1;
		    if(j==0)
        {
           // ts.add(a[0]);
            res=-1;
        }
        else{
            ts.add(a[j-1]);
            if(ts.lower(a[j])==null)
            {
                res=-1;
            }
            else
            {
                res=ts.lower(a[j]);
            }
        }
        System.out.print(res+" ");
		}
		System.out.println(" ");
		}
	}
}