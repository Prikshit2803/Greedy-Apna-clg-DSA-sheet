//My solution

long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
    
    
    int fa[n],ac[n];
    
    for(int i=0;i<n;i++)
    fa[i]=arr[n-i-1];
    
    
//       for(int i=0;i<n;i++)
//   cout<<fa[i]<<endl;

int cnt=0,is=0;
if(n%2==0){
    
    while(cnt<n/2 ){
       
             ac[is++]=arr[cnt];
             ac[is++]=fa[cnt];
             cnt++;
             
         
    }
    
}

else{
     while(cnt<(n+1)/2 && is<n){
       
             ac[is++]=arr[cnt];
             ac[is++]=fa[cnt];
             cnt++;
             
         
    }
    
    

    
    
 
    
    
}
    
    
//     for(int i=0;i<n;i++)
//   cout<<ac[i]<<endl;
    
    long long int sum=0;
     for(int i=0;i<n;i++){
         sum+=abs(ac[i]-ac[(i+1)%n]);
         
     }
     
     return sum;
    
}


//Simliar approach solution

long long int maxSum(int arr[], int n)
{
    vector<int>v;
    sort(arr,arr+n);
    int m=0;
    int p=n-1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            v.push_back(arr[m]);
            m++;
        }
        else
        {
            v.push_back(arr[p]);
            p--;
        }
    }
    int sum=0;
    for(int i=0;i<v.size()-1;i++)
    {
        sum+=abs(v[i]-v[i+1]);
    }
    return sum+abs(v[0]-v[n-1]);
}
