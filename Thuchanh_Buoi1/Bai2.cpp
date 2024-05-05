#include <iostream>
using namespace std;
//sinh cac chuoi ki tu do dai chi chua 2 ki tu a va b
//coi a =0, b= 1
//sinh 1 cau hinh moi tu 1 cau hinh da co
void next_config(int a[], int n, int i){
	a[i] = 1;
	i++;
	while (i <= n){
		a[i] = 0;
		i++;
	}
}
//hien thi cau hinh
void view_config(int a[], int n){
	for(int i = 1; i <= n; i++){
		if( a[i] == 0) cout << "a";
		else cout << "b";
	}
	cout << endl;
}
//liet ke cac cau hinh
void list_configs(int  n){
	int i;
	int a[n+1] = {0};
	do{
		view_config(a, n);
		i = n;
		while(i > 0 && a[i] == 1){
			i--;
		}
		if( i > 0){
			next_config(a, n, i);
		}
	}
	while( i > 0);
}
int main(){
	int n;
	cout << "Nhap n= ";
	cin >> n;
	list_configs(n);
	return 0;
}
