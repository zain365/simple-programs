#include<iostream>
using namespace std;
int main(){
	int bill;
	float units;
	cout<<"enter the units";
	cin>>units;
	if(units>500){
	bill = units*7;
}
else if(units>300){
	bill = units*5;
}
else{


	
	bill = units*2;
}
	bill = bill+150;


 if(bill>2000){
	
	bill = bill+(bill*5/100);
	
	
	
	
}

cout<<"the bill is"<<bill;
	
	

	
	
}
