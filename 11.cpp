//find the numbers chracter and words  of 1 sentance
#include<iostream>
using namespace std;
int main(){
	
int character = 0, word;
cout<<"enter a sentence="<<endl;
char ch;
while(ch!='/r')
{
	
	ch = getche('') ;
	if(ch==' ')
	word++;
	else
	chracter++;
	
}
cout<<word+1;
cout<<chracter;	

	
	
	
}

