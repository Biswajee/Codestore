#include <iostream>
#include <vector>

using namespace std;

int bsearch(int v[], int start, int end, int key) {
    int mid=0, l=start, r=end;
    if(r>=l) {
        mid = (l+(r-l))/2;
        // cout << mid << " ";
        if(v[mid]==key) return mid;
        if(v[mid]<key) return bsearch(v, l, mid-1, key);
        if(v[mid]>key) return bsearch(v, mid, r, key);
    }
    return -1;
}

int main() {
    int t,n;
    cin >> t;
    while(t--) {
        cin >> n;
        int arr[1000];
        for(int i=0; i<n; i++) cin >> arr[i];
        cout << endl;
        for(int i=0; i<n; i++) cout << arr[i] << " ";
        cout << endl;
        int index = bsearch(arr,0,n,2);
        cout << index << endl;
    }
    return 0;
}