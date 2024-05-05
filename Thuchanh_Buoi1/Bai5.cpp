//hoan vi cac tap hop S ={1,2,..,n}
#include <bits/stdc++.h>
using namespace std;
void view_config(int a[], int n){
	for(int i = 1; i <=n ; i++){
		cout << a[i];
	}
	cout << endl;
}
//sinh cau hinh moi tu cau hinh dang co
void next_config(int a[], int n, int i){
	int k = n;
	while(a[k] < a[i]){
		k--;
	}
	swap(a[i], a[k]);
	int j = n;
	i++;
	while( i < j){
		swap(a[i], a[j]);
		i++;
		j--;
	}
}
//liet ke cau hinh
void list_configs(int n){
	int i;
	int a[n+1] = {0};
	//khhoi tao cau hinh dau tien
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
	do{
		view_config(a, n);
		//tim phan tu lien truoc doan cuoi giam dan(tu n-1)
		i = n-1;
		while(i > 0 && a[i] > a[i+1]){
			i--;
		}
		if(i > 0) next_config(a, n, i);
	}
	while(i > 0);
}
int main(){
	int a[3] = {1,2,3};
	int n = 3;
	list_configs(3);
	return 0;
}
