#include<bits/stdc++.h>
using namespace std;
struct ChuyenBay{
	string soHieu;
	double giaVe;
	int gheNgoi;
};
//thiet ke thuat toan de quy liet ke danh sach cac chuyen bay co gia duoi 700000
const int n = 6;
void A1(ChuyenBay b[], int n){
	if(n < 0) return;
	if(b[n].giaVe < 700000){
		cout << b[n].soHieu << " | ";
	}
	A1(b, n-1);
}
ChuyenBay A2(ChuyenBay b[], int l, int r){
	if(l == r){
		return b[l];
	}
	else{
		int m = (l+r)/2;
		ChuyenBay min_left = A2(b, l, m);
		ChuyenBay min_right = A2(b, m+1, r);
		return min_left.giaVe <  min_right.giaVe ? min_left : min_right;
	}
}
int main(){
	ChuyenBay b[6];
	b[0] = {"VN123", 1500000, 150};
	b[1] = {"VN124", 500000, 200};
	b[2] = {"VN125", 1000000, 250};
	b[3] = {"JP111", 600000, 125};
	b[4] = {"US999", 3000000, 180};
	b[5] = {"GE191", 5000000, 200};
//A1(b, 6);
	ChuyenBay k = A2(b, 0, n-1);
	cout << "Chuyen bay voi gia ve thap nhat la: " << k.soHieu << " voi gia ve = " << k.giaVe;
	return 0;
}
