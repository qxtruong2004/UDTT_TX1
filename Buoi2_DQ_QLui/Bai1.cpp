#include<iostream>
using namespace std;
//sinh cac chuoi nhi phan do dai n
void view_config(int a[], int n){
	for(int i = 1; i<=n; i++){
		cout << a[i];
	}
	cout << endl;
}
void next_config(int a[], int n, int i){
	a[i] = 1;
	i++;
	while(i <= n){
		a[i] = 0;
		i++;
	}
}
void list_config(int n){
	int i;
	int a[n+1] = {0};
	do{
		view_config(a, n);
		i = n;
		while ( i > 0 && a[i] == 1){
			i--;
		}
		if(i > 0){
			next_config(a, n, i);
		}
	}while(i > 0);
}
int main(){
	int a[4];
	list_config(4);
	return 0;
}
