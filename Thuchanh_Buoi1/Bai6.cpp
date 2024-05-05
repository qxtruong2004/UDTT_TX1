// sap 6 sinh vien vao 6 ghe
#include <iostream>
using namespace std;
void view_config(int a[], int n){
	for(int i = 1; i <= n;i++){
		if( a[i] == 1) cout << "Trang";
		else if (a[i] == 2) cout << "Cong";
		else if (a[i] == 3) cout << "Trung";
		else if (a[i] == 4) cout << "Binh";
		else if (a[i] == 5) cout << "Hoan";
		else cout << "Mai";
	}
	cout << endl;
}
void next_config(int a[], int n, int i){
	int k = n;
	while ( a[k] < a[i]){
		k--;
	}
	swap(a[i], a[k]);
	int j = n;
	i++;
	while ( i <= j){
		swap(a[i], a[j]);
		i++; j--;
	}
}
void list_configs(int n){
	int i;
	int a[n+1] = {0};
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
	do{
		view_config(a,n);
		i = n-1;
		while( i > 0 && a[i] > a[i+1]){
			i--;
		}
		if(i > 0){
			next_config(a, n, i);
		}
	}while(i > 0);
}
int main(){
	int a[6] = {1,2,3,4,5,6};
	list_configs(6);
	return 0;
}
