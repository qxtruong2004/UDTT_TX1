#include <iostream>
using namespace std;
// sinh các chuoi nhi phân do dai n

//sinh 1 cau hinh moi tu cau hinh da co
void next_config(int a[], int n, int i){
	a[i] = 1;
	i++;
	while ( i <= n){
		a[i] = 0;
		i++;
	}
}
//hien thi 1 cau hinh
void view_config(int a[], int n){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}
//liet ke cac cau hinh
void list_configs(int n){
	int i;
	int a[n+1] = {0}; //cau hinh dau tien {0000..}
	do{
		view_config(a, n); //hien thi cau hinh dang co
		i = n;
		while( i > 0 && a[i] == 1){
			i--;
		} 
		if(i > 0){ //chua phai cau hinh cuoi
			next_config(a, n, i); //sinh 1 cau hinh moi
		}
	}
	while( i > 0);
}
int main(){
	int n;
	cout<< "Nhap do dai chuoi nhi phan can phai sinh: ";
	cin >> n;
	list_configs(n);
	return 0;
}
