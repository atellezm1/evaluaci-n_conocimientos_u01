//Alexander Jesús Téllez
#include<iostream>
using namespace std;
int main(){
	int n1, n2,i,aux;
	cout<<" ingrese el primer numero:\n";cin>>n1;
	cout<<" ingrese el segundo numero:\n";cin>>n2;
	
	if(n1<n2){
		i=n1;
		while((n1%i!=0)||(n2%i!=0)){
			i=i-1;
		}
	}
	else{
		aux=n1;
		n1=n2;
		n2=aux;
		i=n1;
		while((n1%i!=0)||(n2%i!=0)){
			i=i-1;
		}	
	}
	if(i==1){
			cout<<"son pesi";
	}
	else{
			cout<<"no son pesi";
	}
	
	return 0;
}
