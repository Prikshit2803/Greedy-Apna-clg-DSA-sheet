
//link:https://www.youtube.com/watch?v=CAQEqF7azMk
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int m,n;
	cin>>m>>n;
	int rows=m-1;
	int cols=n-1;
	int HS[rows];
	int VS[cols];
	
	for(int i=0;i<rows;i++)
	cin>>HS[i];
	
	for(int i=0;i<cols;i++)
	cin>>VS[i];
	
	sort(HS,HS+rows,greater<int>());
	sort(VS,VS+cols,greater<int>());
	
	
	int hor=1 ,ver=1;
	int i=0,j=0;
	int cost=0;
	
	while(i<rows && j<cols){
		if(HS[i]>=VS[j]){
			cost+=HS[i]*hor;
			ver++;
			i++;
			
		}
		
		else{

            cost+=VS[j]*ver;
			hor++;
			j++;			
		}
	}
	
	while(i<rows){
		cost+=HS[i]*hor;
			ver++;
			i++;
	}
	
	while(j<cols){
		cost+=VS[j]*ver;
			hor++;
			j++;
	}
	
	cout<<cost;
	

	return 0;
}
