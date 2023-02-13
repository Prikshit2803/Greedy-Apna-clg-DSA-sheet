class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
       // sort(arr,arr+sizeof(arr[0]));
     long long  int n1=0,n2=0;
        int x=0,y=0;
        int i=0;
        
       /*vector<int> v;
        
        
        while(i!=n){
            v.push_back(arr[i]);
            i++;
        }*/
        
        sort(arr,arr+n);
        
        for(int i=0;i<n;i++){
            
            if(i%2==0){
             n1=n1*10 + arr[i];
            }
            else{
                n2=n2*10 + arr[i];
            }
             
        }
        
         /*for(int j=n-2;j>=0;j-=2){
             n2+=arr[j]*pow(10,y);
             y++;
        }*/
        
        long long int n3=n1+n2;
        
        return n3;
        
    }
};
