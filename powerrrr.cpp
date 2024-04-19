#include<iostream>
using namespace std;
int power(int base , int exponent)
{
	int  a = base;
	for(int i=1 ; i < exponent  ; i++)
	{
			base = base * a;
	}
		cout<<base;
}
int main(){
	
	power(); // insert arguments here
}
