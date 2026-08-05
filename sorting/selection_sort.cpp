// Selection Sort
// Time: O(N^2), Space: O(1)
void selectionSort(int arr[], int n) { for(int i=0; i<n-1; i++) { int m=i; for(int j=i+1; j<n; j++) if(arr[j]<arr[m]) m=j; int t=arr[m]; arr[m]=arr[i]; arr[i]=t; } }