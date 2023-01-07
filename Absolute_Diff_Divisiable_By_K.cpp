class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        long long cnt=0;
        for(int i=0;i<n;i++){
            arr[i]=(arr[i]+k)%k;
        }
        int hash[k]={0};
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        for(int i=0;i<k;i++){
            cnt+=(hash[i]*(hash[i]-1))/2;
        }
        return cnt;
    }
};
