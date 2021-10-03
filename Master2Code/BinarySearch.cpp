int binarySearch(int arr[], int lo, int hi, int x){ 
    if(hi>=lo){ 
        int mi = lo+(hi-lo)/2;
        if (arr[mi]==x) 
            return mi; 
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mi]>x) 
            return binarySearch(arr, lo, mi-1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mi+1, hi, x); 
    } 
    // We reach here when element is not 
    // present in array 
    return -1; 
}
