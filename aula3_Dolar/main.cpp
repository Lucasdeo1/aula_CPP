#include<iostream>

using namespace std;

int converterDollar(int value) {
    int res = value * 5;
    return res;
}

int main () {

    int res,value;

    cout<<"insert a value this product for to converter in real coin ( BRL ): $";
    cin >>value;

    res = converterDollar( value );

    cout << "The value this product in real coin is R$ "<< res <<",00";
    return 0;
}