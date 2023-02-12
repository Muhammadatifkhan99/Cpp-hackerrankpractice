#include<iostream>
using namespace std;

int main(){
	int a = 120;
	int b = 15;
	int c = 90;
	if (a > b){
		if (a > c)
			cout<<a<<" is the greatest"<<endl;
		else
			cout<<c<<" is the greatest"<<endl;
	}
	else{
		if (b > c)
			cout<<b<<" is the greatest"<<endl;
			
		else 
			cout<<c<<" is the greatest"<<endl;
	}
	return 0;
}
