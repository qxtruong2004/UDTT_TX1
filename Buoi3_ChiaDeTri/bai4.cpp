#include <iostream>
using namespace std;
//tinh gia tri a mu n bang chia de tri
int power(int a, int n){
	if(n == 1 || n == 0) return a;
	int x = power(a, n/2);
	int rs = x*x;
	if( n %2 != 0) rs*=x;
	return rs;
}




















int tinh(int a, int n){
	if(n == 0 || n == 1) return a;
	int x = tinh(a, n/2);
	int rs = x*x;
	if(n % 2!= 0) rs *= a;
	return rs;
}
int main(){
	cout<< "Gia tri: " << tinh(2, 3);
	return 0;
}
