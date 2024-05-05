//leiet ke cach lay 4 sinh vien tu 6 sinh vien a,b,c,d,,e,f
#include <iostream>
using namespace std;
//sinh 1 cau hinh moi tu 1 cau hinh dang co
void next_config(int a[], int k, int i){
	a[i] += 1;
	i++;
	while (i <= k){
		a[i] = a[i-1] + 1;
		i++;
	}
}
void view_config(int a[], int k){
	for(int i = 1; i <= k; i++){
		if(a[i] == 1) cout << "a";
		else if( a[i] == 2) cout << "b";
		else if( a[i] == 3) cout << "c";
		else if( a[i] == 4) cout << "d";
		else if( a[i] == 5) cout << "e";
		else cout<< "f";
	}
	cout << endl;
}
void list_configs(int k, int n){
	int i;
	int a[k+1] = {0};
	//khoi tao cau hinh dau tien
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
	do{
		view_config(a, k);
		i = k;
		while  ( i > 0 && a[i] == n-k+ i){
			i--;
		}
		if (i > 0){
			//chua phai la cau hinh cuoi
			next_config(a, k, i);
		}
	}
	while( i > 0);
}
int main(){
	int a[6] = {1,2,3,4, 5, 6};
	int k;
	cout <<"Nhap k= ";
	cin >> k;
	list_configs(k, 6);
	return 0;
}
