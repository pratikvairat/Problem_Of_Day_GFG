class Solution {
public:
 
    int minimizeSum(int n, vector<int> arr) {
        
        int sum=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        while(pq.size()>1){
            int min=pq.top();
            pq.pop();
            int secondMin=pq.top();
            pq.pop();
            sum+=(min+secondMin);
            pq.push(min+secondMin);
        }
        return sum;
    }
};
