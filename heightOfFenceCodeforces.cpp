#include<iostream>
using namespace std;
int main(){

int n, m, h, i, count=0;
cin>>n>>h;

for(i=0;i<n;i++){
	cin>>m;
	if(m<=h){
		count++;
	} else{
	    count+=2;
	}
}

cout<<count;
}
