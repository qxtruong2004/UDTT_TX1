#include<iostream>
using namespace std;
//sap xep tang dan bang tron theo chia de tri
int b[7];
void MegaSort(int a[], int l, int r){
	if(r > l){
		int m = (l + r) / 2;
		MegaSort(a, l, m); 
		MegaSort(a, m+1, r); 
		//sao chep nua dau cua a sang b
		//xep tu cuoi len 
		for(int i = m; i >= l; i--){
			b[i] = a[i];
		}
		// sao chep nua con lai sang b theo thu tu nguojc lai
		//xep tu cuoi len
		for(int j = m+1; j <=r; j++){
			b[r+ m+1-j] = a[j];
		}
		//tron 2 nua
		//i chay tu dau mang b, j chay tu cuoi mang b va tron
		int i = l, j = r;
		for(int k = l; k<= r; k++){
			if(b[i] > b[j]){
				a[k] = b[j];
				j--;
			}
			else{
				a[k] = b[i];
				i++;
			}
		}
	}
}


int main(){
	int a[7] = {1, 5, -3, 6, 10,4, -37};
	sapxep(a, 0, 6);
	for(int i = 0; i < 7; i++){
		cout << a[i] << " ";
	}
	return 0;
}
