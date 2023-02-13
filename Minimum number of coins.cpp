//Mah solution
class Solution{
public:
    vector<int> minPartition(int N)
    {
        vector<int> den= {2000,500,200,100,50,20,10,5,2,1};
        vector<int> ans;
        
        for(int i=0;i<den.size();i++){
            while(N%den[i]!=N){
                ans.push_back(den[i]);
                N=N-den[i];
                
                //i++;
            }
        }
        
        return ans;
    }
};



vector<int> minPartition(int N)
    {
        //Using Greedy approach
        vector<int>deno = {2000,500,200,100,50,20,10,5,2,1};
        vector<int>ans;
        
        for(int i =0; i<deno.size();i++){
            while(N>=deno[i]){
                N -= deno[i];
                ans.push_back(deno[i]);
            }
        }
        
        return ans;
    }
};
