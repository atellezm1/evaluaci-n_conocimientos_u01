//Alexander Jes�s T�llez
#include<iostream>
using namespace std;
int main(){
	int n1, n2, c,i;
	cout<<" ingrese el primer numero:\n";cin>>n1;
	cout<<" ingrese el segundo numero:\n";cin>>n2;
	c=0;
	i=1;
	while(i<=n1 && i<=n2){
		if(n1%i==0 && n2%i==0){
			c=c+1;
		}
		i=i+1;
	}
	if(c>1){
		cout<<"NO SON PSESI ";
	}
	else{
		cout<<"SI SON PESI ";
	}
	return 0;
}
