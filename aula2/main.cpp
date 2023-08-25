#include<iostream>

using namespace std;

int respostaMedio(int quantMin, int quantMax) {
    int estoqueMedio = (quantMin + quantMax)/2;
    return estoqueMedio;
}

int main (){
    int quantMin,quantMax,estoqueMedio;
    cout << "quantidade maxima de estoque: ";
    cin >> quantMax;

    cout << "quantidade minima de estoque: ";
    cin >> quantMin ;

    estoqueMedio = respostaMedio(quantMin,quantMax);

    cout <<"estoque medio e: "<< estoqueMedio;

    return 0;
}