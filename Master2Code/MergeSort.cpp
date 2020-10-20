void merge(int arr[], int lo, int mi, int hi){ 
    int n = mi-lo+1; int m = hi-mi; 
    int L[n], R[m]; // Create temp arrays 

    // Copy data to temp arrays L[] and R[]  
    for(int i=0; i<n; i++) L[i]=arr[lo+i]; 
    for(int j=0; j<m; j++) R[j]=arr[mi+1+j]; 
  
    // Merge the temp arrays back into arr[l..r] 
    int i = 0;  // Initial index of first subarray 
    int j = 0;  // Initial index of second subarray    
    int k = lo;  // Initial index of merged subarray 
     
    while(i<n && j<m){ 
        if(L[i]<=R[j]){ 
            arr[k]=L[i]; 
            i++; 
        } 
        else{ 
            arr[k]=R[j]; 
            j++; 
        } 
        k++; 
    } 
    // Copy the remaining elements of L[], if there are any  
    while(i<n){ 
        arr[k]=L[i]; 
        i++; k++; 
    } 
    // Copy the remaining elements of R[], if there are any  
    while(j<m){ 
        arr[k] = R[j]; 
        j++; k++; 
    } 
} 

void mergeSort(int arr[], int lo, int hi){ 
    if (lo<hi){ 
        // Same as (l+r)/2, but avoids  
        // overflow for large l and h 
        int mi = lo+(hi-lo)/2; 
        // Sort first and second halves 
        mergeSort(arr, lo, mi); 
        mergeSort(arr, mi+1, hi); 
        merge(arr, lo, mi, hi); 
    } 
}
