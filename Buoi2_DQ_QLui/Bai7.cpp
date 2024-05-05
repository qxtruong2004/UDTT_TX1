#include <iostream>
using namespace std;
//liet ke hoan vi
int a[100], dd[100];
int n=4;
void show(int a[]){
	n = 4;
	for(int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
void Try(int k){
	for(int i = 1; i <= n; i++){
		if(dd[i] == 0){
			//i chua duoc chon
			a[k] = i;
			if( k == n){
				show(a);
			}
			else{
				dd[i] = 1; //ghi nhan viec chon i cho a[k]
				Try(k+1);
				dd[i] = 0;
			}
		}
	}
}
int main(){
	Try(1);
	return  0;
}
