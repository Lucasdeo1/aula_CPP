#include<iostream>

using namespace std;

void nomeUser (){
	cout << "Lucas Deodato"<< endl;
}


void numberInt(int& n1, int& n2, int& n3) {
	cout << "enter with int number";
	cin >> n1 >> n2 >> n3;
}

int evenOrOdd( int res, int numero) {
	res = numero % 2;
	
	if ( res == 0) 
		cout <<"even number";
	else 
		cout << "odd number";
	
	return res;
}

int main(){
	int n1,n2,n3;
	
	numberInt(n1,n2, n3);
	cout << "" << n1 << n2 << n3;
	
	/*int numero, res;
	
	cout << "enter with number";
	cin >> numero;
	evenOrOdd( res, numero);*/
	
	
	
	
	
	
	return 0;
}
