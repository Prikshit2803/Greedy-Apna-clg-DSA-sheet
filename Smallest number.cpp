class Solution{   
public:
    string smallestNumber(int S, int D){
        string sml="";
        int cnt=D;
        
        if(S>9*D) return "-1";
        
        while(S>9){
            sml='9' + sml;
       
            S=S-9;
            cnt = cnt-1;
            
        }
        
        if(S<9 && cnt>1 ){
                 sml=std::to_string(S-1) + sml; 
          cnt-=1;
          
          while(cnt>1){
         sml='0' + sml;
         cnt=cnt-1;
       }
       
       sml='1' + sml;
       
       return sml;
        }
       
       
      if(cnt==1 && S<=9)
      sml=std::to_string(S) + sml; 
        
        return sml;
        
        cout<<sml;
    }
};



// Both solutions given here have same approach

string smallestNumber(int s, int d){
        // code here 
        if((9*d) < s) return "-1";
        string ans = "";
        for(int i=d-1;i>=0;i--){
            if(s>9){
                ans = '9' + ans;
                s -= 9;
            }
            else{
                if(i==0){
                    ans = to_string(s) + ans;
                }
                else{
                    ans = to_string(s-1) + ans;
                    i--;
                    while(i>0){
                        ans = '0' + ans;
                        i--;
                    }
                    ans = '1' + ans;
                    break;
                }
            }
        }
        return ans;
    }
