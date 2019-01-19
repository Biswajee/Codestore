#include <bits/stdc++.h>
using namespace std;

long long int taken_candies(long long int total_candies, long long int k)
{
    long long int self_candies = 0;
 
    while(total_candies > 0)
    {
        self_candies += min(k, total_candies);
 
        total_candies = total_candies - k;
 
        long long int lost_candies = total_candies/10;
 
        total_candies -= lost_candies;
    }
 
    return self_candies;
}

int main() {
    int n;
    cin >> n;
    int t = n/10 + n%10;
    long long int left = 1, right = n, answer = 1;
    while(left <= right)
    {
        long long int mid = (left + right) >> 1;

        if(taken_candies(n, mid) >= t)
        {
            if(mid == 1 || taken_candies(n, mid - 1) < t)
            {
                answer = mid;
                break;
            }
            else
            {
                right = mid - 1;
            }
        }
        else
        {
            left = mid + 1;
        }
    }
    cout << answer << endl;
    return 0;
}