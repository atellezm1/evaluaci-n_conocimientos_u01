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
			break;
		}
		case '-': {
			r=opc1-opc2;
			break;
		}
		case '*': {
			r=opc1*opc2;
			break;
		}
		case '/': {
			r=opc1/opc2;	
			}
			break;
		}
	cout<<"el resultado es:\n"<<r;
	
	return 0;
}

