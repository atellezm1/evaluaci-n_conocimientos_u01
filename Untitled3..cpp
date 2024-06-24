//Alexander Jesús Téllez
#include<iostream>
using namespace std;
int fact(int b);
float suma(float a);
int main(){
	float n;
	int sum;
	cout<<"introdusca el 'n' termino\n";cin>>n;
	sum=suma(n);
	cout<<"la sumatoria es:\n"<<sum;
	
	return 0;
}
int fact(int b){
	if(b==0){
	 b=1;
	}
	else{
		b=b*fact(b-1);
	}
	return b;
}
float suma(float a){
	float s,i;
	s=0;
	i=1;
	while(i!=a+1){
		s=s+((fact(i))/(2*i));
		i=i+1;
	}
	return s;	
	}
	
