//find the factorial number



#include<iostream>
using namespace std;
int main(){
	
	int n ,c, f;
	f =1;
	c=1;
	cout<<"enter a value";
	cin>>n;
	while(c<=n){
		
		f = f*c;
		  c = c+1;
		
}
	
	cout<<f<<endl;

	return 0;
	
	
}
