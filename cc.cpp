#include <iostream>
#include <vector>
using namespace std;
struct list{
	vector <int> x;
	vector <int> y;
}; list lines;
void manga(int **&a ,int &m , int &n){
	cin>>m>>n;
	a = new int*[m];
	for (int i =0 ; i<m; i++){
		a[i] = new int[n];
	}
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			a[i][j]= i+j;
		}
	}
	cout<<endl;
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
void mangb(int *&b){
	b = new int[2];
	for (int i=0;i<5;i++){
		b[i] = i;
	}
	for (int i=0;i<5;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
}
int main() {
	int m,n;
	int **a;
	int *b;
	mangb(b);
	delete [] b;
	manga(a,m,n);
	for (int i=0; i<m ;i++){
		delete [] a[i];
	}
	delete [] a;
	return 0;
}