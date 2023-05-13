class Solution 
{
    public:
    
    bool static comp(Job a,Job b){
        return(a.profit>b.profit);
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
         int m=0;
        sort(arr, arr + n,comp);
        m=arr[0].dead;
        for(int i=0;i<n;i++)
         m=max(m,arr[i].dead);
        
        vector<int> d(m+1,-1);
        int countjob=0,tprofit=0;
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead-1;j>=0;j--){
                if(d[j]==-1){
                    d[j]=arr[i].id;
                    countjob++;
                    tprofit+=arr[i].profit;
                    break;
                    
                }
            }
        }
        return {countjob,tprofit};
    } 
};
