// Insertion Sort
// Time: O(N^2), Space: O(1)
void insertionSort(int arr[], int n) { for(int i=1; i<n; i++) { int k=arr[i]; int j=i-1; while(j>=0 && arr[j]>k) { arr[j+1]=arr[j]; j--; } arr[j+1]=k; } }