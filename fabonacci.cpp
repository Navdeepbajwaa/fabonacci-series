#include<iostream>
using namespace std;
void fab(int x){
	int a=1,b=1,c,d=0;
	cout<<a<<endl<<b<<endl;
	while(d!=x-2){
		c=a+b;
		cout<<c<<endl;
		a=b;
		b=c;
		d++;
	}
}
int main(){
	int n;
	cout<<"Enter number: ";
	cin>>n;
	cout<<"Fabonacci series of "<<n<<" numbers is: "<<endl;
	fab(n);
	return 0;
}
