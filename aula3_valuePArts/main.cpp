#include<iostream>

using namespace std;

int main ( ){
    int codePart, unitPrice, soldAmount;
    string idSeller;

    int totalSale;

    cout<<"IdSeller";cin >> idSeller;
    cout << "code of part";cin >> codePart;
    cout<< "Unit Price ";cin >> unitPrice; 
    cout << "sold amount";cin >> soldAmount;


    cout<<"\n";
    cout<<"***sale detail***"<<"\n";
    cout<<"Name's seller:"<<idSeller <<"\n";
    cout<<"code of Part: "<<codePart<<"\n";
    cout<<"unit price:$"<< unitPrice<<"\n";
    cout<<""<<soldAmount<<"\n";

    totalSale = unitPrice*soldAmount;
    
    cout <<""<<idSeller<<" received a commission of $"<< totalSale*0.5;

    return 0;
}