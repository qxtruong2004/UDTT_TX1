#include <iostream>
using namespace std;
//liet ke cac day nhi phan su dung quay lui
int a[100], dd[100];
int n = 4;
void show(int a[]){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}
void Try(int k){
	for(int i = 0; i <= 1; i++){
		a[k] = i;
		if( k == n){
			show(a); // hien thi cau hinh cuoi cung
		}
		else {
			Try(k+1);
		}
	}
}
int main(){
	Try(1);
	return 0;
}
