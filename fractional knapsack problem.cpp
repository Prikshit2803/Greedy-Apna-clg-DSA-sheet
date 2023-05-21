class Solution
{
    public:
    bool static comp(Item a,Item b){
        return(((a.value*1.00)/a.weight)>((b.value * 1.00)/b.weight));//this step is key
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,comp);
        
        double m=0,w;
        w=W;
        
        for(int i=0;i<n;i++){
            // if(arr[i].weight<=w){
            //     w=w-arr[i].weight;
            //     m+=arr[i].value;
                
               
            // }//this also works
            
            if(w-arr[i].weight>=0){
                w=w-arr[i].weight;
                m+=arr[i].value;
                
               
            }
             
               
            
            else {
                double f=((arr[i].value*1.00)/arr[i].weight);
                m+=(f*w*1.00);
                w=0;
               
            }
            
            
        }
        return m;
    }
        
};
