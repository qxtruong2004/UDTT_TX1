#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct ChuyenBay{
	string soHieu;
	long long giaVe;
	int soGhe;
};
const int n = 6;
ChuyenBay b[n];
const int k = 4;
void create_b(){
	b[0] = {"VN123", 1500000, 150};
	b[1] = {"VN124", 500000, 200};
	b[2] = {"VN125", 1000000, 250};
	b[3] = {"JP111", 600000, 125};
	b[4] = {"US999", 3000000, 180};
	b[5] = {"GE191", 5000000, 200};
}
//k o day la gia tri can so sanh
void A1(ChuyenBay b[], int n, int k){
	if( n < 0){
		return ;
	}
	if(b[n].giaVe > 700000){
		cout<<"Chuyen bay so hieu " << b[n].soHieu << " co gia ve hon 700000, voi gia ve = " <<b[n].giaVe ;
		cout<<endl;
	}
	A1(b, n-1, k);	
}

ChuyenBay A2(ChuyenBay b[], int l, int r){
	if(r == l){
		return b[l];
	}
	if(r > l){
		int m = (l + r) / 2;
		ChuyenBay min_left = A2(b, l, m);
		ChuyenBay min_right = A2(b, m+1, r);
		return min_left.giaVe < min_right.giaVe ? min_left : min_right; 
	}
}
int kq[n+1];
void result(){
	int i;
	for(i = 1;   i <=k; i++){
		cout<< "So hieu " << b[kq[i] -1].soHieu << " so ghe ngoi " << b[kq[i] -1].soGhe<< " | ";
		cout << endl;
	}
	cout<<"---------\n";
}

void Try(int i){
	int j;
	for(j = kq[i-1] +1; j <= n-k+i; j++){
		kq[i] = j;
		if(i == k){
			result();
		}
		else{
			Try(i+1);
		}
	}
}
int main(){
	int n = 6;
	create_b();
	A1(b, n, 700000);
	ChuyenBay k = A2(b, 0, n-1);
	cout << "Chuyen bay voi gia ve thap nhat la: " << k.soHieu << " voi gia ve la = " << k.giaVe;
	cout<< "Cac cach lay 4 chuyen bay: \n";
	Try(1);
	return 0;
}
