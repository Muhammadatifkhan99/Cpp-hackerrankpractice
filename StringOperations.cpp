#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	// Complete the program
  	string s1;
  	cin>>s1;
  	string s2;
  	cin>>s2;
  	cout<<s1.length()<<endl;
  	cout<<s2.length()<<endl;
  	string  c = s1 + s2;
  	cout<<c<<endl;
  	std::swap (s1[0],s2[0]);
  	cout<<s1<<" "<<s2<<endl;
  	//s1[0].swap(s2[0]);
  	cout<<s1<<" "<<s2<<endl;
    return 0;
}
