//Alexander Jesús Téllez
#include<iostream>
using namespace std;
int main(){
	float opc1, opc2, r;
	char opc;
	cout<<"ingrese el primer numero:\n";cin>>opc1;
	cout<<"ingrese el segundo numero:\n";cin>>opc2;
	cout<<"ingrese la operacion arealizar:\n";cin>>opc;
	switch(opc){
		case '+': {
			r=opc1+opc2;
			cout<<"el resultado es:\n"<<r;
			break;
		}
		case '-': {
			r=opc1-opc2;
			cout<<"el resultado es:\n"<<r;
			break;
		}
		case '*': {
			r=opc1*opc2;
			cout<<"el resultado es:\n"<<r;
			break;
		}
		case '/': {
			if(opc2!=0){
				r=opc1/opc2;
				cout<<"el resultado es:\n"<<r;
			}
			else{
				cout<<"el divisor no puede ser 0\n";
			}	
			}
			break;
		}
	
	return 0;
}

