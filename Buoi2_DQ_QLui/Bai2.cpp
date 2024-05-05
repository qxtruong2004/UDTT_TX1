#include <iostream>
using namespace std;

//tim USCLN theo khu de quy
int UCLN(int a, int b){
	int r = a % b;
	while( r != 0){
		a = b;
		b = r;
		r = a%b;
	}
	return b;
}
int main(){
	cout << UCLN(27, 30);
	return 0;
}
/* 
a	b  c
30 27 3
27 3 0
*/
