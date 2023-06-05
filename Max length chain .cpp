class Solution{
    
    
public:

bool static comp(val a,val b){
        return(a.second<b.second);
    }
    /*You are required to complete this method*/
    int maxChainLen(struct val p[],int n){
        sort(p, p + n,comp);
        
      
    
    //   int lis[n];
    // //   lis : longest increasing subsequence
       
    //      for(int i=0;i<n;i++)
    //       lis[i]=1;
          
    //       int i=1, j=0;
    //       for(int i=1;i<n;i++)
    //       for(int j=0;j<n;j++){
    //           if(p[i].first>p[j].second && lis[i]<=lis[j]){
    //               lis[i]=1+lis[j];
    //             //   j++:
    //           }
              
    //         //   else {
    //         //       i++;
    //         //       j=0;
    //         //   }
    //       }
          
    //       int m=lis[0];
          
          
    //       for(int i=1;i<n;i++)
    //       m=max(m,lis[i]);


    //         return m;
    
    //LIS based solution using DP : TLE(Time limit exceeded)
    
    int m=p[0].second, cnt =1;
    for(int i=1;i<n;i++){
        
        if(m<p[i].first){
            cnt++;
            m=p[i].second;
        }
        
    }
       
       return cnt;
        
        
        
        
       
       
       
       
   
        
    }
};
