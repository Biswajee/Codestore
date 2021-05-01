#include <iostream>

using namespace std;

void merge(int arr[], int l, int mid, int r) {
  int n1 = mid-l+1;
  int n2 = r-mid;

  // Create 2 temporary arrays
  int L[n1], R[n2];

  // Copy data to temp arrays
  for(int i=0; i<n1; i++) L[i] = arr[l+i];
  for(int j=0; j<n2; j++) R[j] = arr[mid+1+j];

  // Merge the temporary arrays back into arr[l..r]
  
  // Initialize index of first subarray
  int i=0; 
  // Initialize index of second subarray
  int j=0;
  //Initialize index of merged subarray
  int k=l;

  while(i<n1 && j<n2) {
    if(L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  // Copy the remaining elements of L[]
  while(i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  // Copy the remaining elements of R[]
  while(j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void merge_sort(int arr[], int l, int r) {
  if(l>=r) return;

  // find the mid element
  int mid = l+(r-l)/2;

  merge_sort(arr, l, mid);
  merge_sort(arr, mid+1, r);
  merge(arr, l, mid, r);
}

int main() {
  int arr[] = {12, 11, 13, 5, 6, 7};
  int n = sizeof(arr)/sizeof(arr[0]);
  merge_sort(arr, 0, n-1);

  for(int i=0; i<n; i++) cout << arr[i] << " ";
  cout << endl;
  
  return 0;
}