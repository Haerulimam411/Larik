#include <iostream>
using namespace std;
const int nmaks =100;
typedef int larikint[nmaks+1];

void bacalarik(larikint a, int n);
void cetaklarikversi1(larikint a, int n);
void hitunganrata(larikint, int n, float *u);

int main (){
	larikint a;
	int k, n;
	float u;
	cout<<"Beberapa jumlah data (N) ? ";cin>>n;
	cout<<"Baca data : "<<endl;
	bacalarik(a,n);
	cout<<"Cetak Data: "<<endl;
	cetaklarikversi1(a,n);
	cout<<"Hitung Rata-Rata : "<<endl;
	hitungrata (a,n,&u);
	cout<<"Rata - rata data = "<<u<<endl;
}

void bacalarik(larikint a, int n){
	int i;
	for(i=1;i<=n;i++){
		cout<<"Masukkan Nilai A["<<i<<"]:";cin>>a[i];
	}
}

void cetaklarikversi1(larikint a, int n)
{
	int i;
	for(i=1;i<=n;1++)
	{
		cout<<"A["<<i<<"]="<<a[i]<<endl;
	}
}

void hitungrata(larikint a, int n, float *u)
{
	int i;
	float jumlah;
	i=1;
	jumlah=0;
	for(i=1;i<=n;i++)
	{
		jumlah = jumlah + a[i];
	}
	*u=jumlah/n;
}
