//sinh cac tap con k phan tu tu S= {1,2,..,n}
#include <iostream>
using namespace std;
//sinh cau hinh moi tu cau hinh dang co
void next_config(int a[], int k, int i){
	a[i] += 1;
	i++;
	while( i <= k){
		a[i] = a[i-1] + 1;
		i++;
	}
}
//hien thi cac cau hinh
void view_config(int a[], int k){
	for(int i = 1; i <= k; i++){
		cout << a[i];
	}
	cout<<endl;
}
//liet ke cac cau hinh
void list_configs(int k, int n){
	int i;
	int a[k+1] = {0};
	//cau hinh dau tien la {1,2,..,3}
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
	do{
		view_config(a, k);
		//tim phan tu dau tien chua dat gioi han tren
		i = k;
		while(i >0 && a[i] ==  n-k+i){
			i--;
		}
		if(i > 0){
			//chua phai cau hinh cuoi
			next_config(a, k,i );
		}
	}
	while( i > 0);
}
int main(){
	int k;
//	cout << "Nhap k= ";
//	cin >> k;
	list_configs(3, 4);
	return 0;
}
