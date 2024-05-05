#include <iostream>
using namespace std;
// tim gia tri lon nhat bang chia de tri
//can chia nho bai toan ra roi so sang max_left va max_right
int tim_max(int a[], int l, int r){
	if(r == l){
		return a[l];
	}
	if(r>l){
		int m = (l+r)/2;
		int max_left = tim_max(a, l, m);
		int max_right = tim_max(a,m+1, r);
		return max(max_left, max_right);
	}
}




















int tim(int a[], int l, int r){
	if(l == r){
		return a[l];
	}
	if( r> l){
		int m = (l+r)/2;
		int max_left = tim(a, l, m);
		int max_right = tim(a, m+1, r);
		return max(max_left, max_right);
	}
}
int main(){
	int a[7] = {1, 5, -3, 6, 10,4, -37};
	cout<< "Gia tri max: " <<tim(a, 0, 6);
	return 0;
}
