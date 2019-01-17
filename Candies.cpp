/*
Alice is a teacher of kindergarten. She wants to give some candies to the children in her class. 
All the children sit in a line and each of them has a rating score according to his or her usual performance. 
Alice wants to give at least 1 candy for each children. Because children are somehow jealousy. Alice must 
give her candies according to their ratings subjects to for any adjacent 2 children if one's rating is higher 
than the other he/she must get more candies than the other. Alice wants to save money so she wants to give as few 
as candies in total.

Input
The first line of the input is an integer N, the number of children in Alice's class. Each of the following  N lines contains an integer indicates the rating of each child.

Output
On the only line of the output print an integer describing the minimum number of candies Alice must give.

Sample Input
3
1
2
2

Sample Output
4

Explanation
The number of candies Alice must give are 1,2 and 1.

Constraints:
N and the rating of each children is no larger than 10^5.

*/


#include<bits/stdc++.h>
using namespace std;
long int arr[100005];
long int dp[100005];
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%ld",&arr[i]);
    long int ans=0;
    dp[0]=1;
    for(i=1;i<n;i++)
         {
            if(arr[i]>arr[i-1])
                dp[i]=dp[i-1]+1;
            else
                dp[i]=1;
         }
      for(i=n-2;i>=0;i--)
      {
          if(arr[i]>arr[i+1])
            dp[i]=max(dp[i],dp[i+1]+1);
      }
     for(i=0;i<n;i++)
     {
         ans=ans+dp[i];
     }
    cout<<ans<<endl;
    return 0;
}

