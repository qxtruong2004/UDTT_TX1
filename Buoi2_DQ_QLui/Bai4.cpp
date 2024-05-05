#include <iostream>
using namespace std;
//tim so fibonaci theo khu de quy
int timso(int n){
	if(n == 1 || n == 2) return 1;
	int f; // so can tim
	int f1 = 1, f2 = 1;
	for(int i = 3; i <= n; i++){
		f = f1 + f2;
		f1 = f2 ;
		f2 = f; 
	}
	return f;
}


int main(){
	cout << timso(4);
	return 0;
}
