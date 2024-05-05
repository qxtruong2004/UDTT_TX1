#include<bits/stdc++.h>
using namespace std;
struct CongViec{
	string maCV;
	double time_bd;
	double time_canthiet;
};
const int n = 6;
CongViec b[n];
string L[n];
int a[100];
void taoCV(){
	b[0] = {"123", 5, 2};
	b[1] = {"124", 4, 4.2};
	b[2] = {"125", 9, 0.4};
	b[3] = {"126", 12, 8};
	b[4] = {"127", 16, 10};
	b[5] = {"128", 20, 0.5};
}
void taoNV(){
	L[0] = "Nguyen Van A";
	L[1] = "Nguyen Van B";
	L[2] = "Nguyen Van C";
	L[3] = "Nguyen Van D";
	L[4] = "Nguyen Van E";
	L[5] = "Nguyen Van F";
}
void A1(CongViec b[], int n){
	if(n <= 0) return ;
	else{
		cout<< b[n-1].maCV << " "<< b[n-1].time_bd << " " << b[n-1].time_canthiet << " ";
		cout << endl;
		A1(b, n-1);
	}
}
int A2(CongViec b[], int l, int r){
	if(l > r) return 0;
	if(l == r){
		if(b[l].time_canthiet < 0.5) return 1;
		return 0;
	}
	int m = l + (r-l) / 2;
	int total_left = A2(b, l, m);
	int total_right = A2(b, m+1, r);
	return total_left + total_right;
}
int total = 0;
void view_config(int a[], int n, CongViec b[], string L[]){
	for(int i = 1; i <= n; i++){
		cout << L[i-1] << "- " << b[a[i]-1].maCV << "|";
	}
	total++;
	cout << endl;
}
void next_config(int a[], int n, int i){
	int k = n;
	while( k > 0 && a[k] < a[i]){
		k--;
	}
	swap(a[k], a[i]);
	int j = n; 
	i++;
	while( i < j){
		swap(a[i], a[j]);
		i++;
		j--;
	}
}
void A3(int n){
	int i;
	int a[n+1] = {0};
	for(int i = 1; i <=n; i++){
		a[i] = i;
	}
	do{
		view_config(a, n, b, L);
		i = n-1;
		while(i > 0 && a[i] > a[i+1]){
			i--;
		}
		if(i > 0){
			next_config(a, n, i);
		}	
	}
	while(i > 0);
}
int main(){
	taoCV();
	taoNV();
	A1(b, n);
	cout << "So ca lam viec thoa man la: " << A2(b, 0, n-1);
	A3(n);
	cout <<total;
	return 0;
}

