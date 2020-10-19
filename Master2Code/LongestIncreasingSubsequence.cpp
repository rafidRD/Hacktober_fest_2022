int LIS(vector<int>& arr, int n) {
    if(n<=1) return n;
    vector<int>dp; 
    dp.push_back(arr[0]);
    for(int i=1; i<n; i++){
        if(dp.back()<arr[i])
            dp.push_back(arr[i]);
        else{
            int j=lower_bound(dp.begin(), dp.end(), arr[i])-dp.begin();
            dp[j]=arr[i];
         }
    }
    return dp.size();
}
