#include<iostream>
using namespace std;

int main(){

	int islowervovals,isuppervovals;
	char c;
	cin >> c;

	islowervovals = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	isuppervovals = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

	if(islowervovals||isuppervovals){
		cout<<c<<" is a vovals"<<endl;
	}
	else{
		cout<<c<<" is a constant"<<endl;
	}
	return 0;
}