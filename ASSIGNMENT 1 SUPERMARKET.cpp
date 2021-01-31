#include <iostream>

using namespace std;

int main()
{
    cout << "WILLISPEE GH" << endl;
    string name, code;
    double laptop, phone, tablet, phonecover, laptopcharger;
    double payment, item_a, item_b, item_c, item_d, item_e, totalamount, total,vat, vat_amount,change,balance;


    cout<<""<<endl;
    cout<<"Please Enter your name "<<endl;
    getline(cin, name);
    cout<<"Please enter your ID: "<<endl;
    getline(cin, code);
    cout<<name<<", ID:"<< code <<endl;
    cout<<""<<endl;
    cout<<" Welcome, these are what we have in stock: " <<endl;
    cout<<"1.Laptop $600"<<endl;
    cout<<"2.Phone $480"<<endl;
    cout<<"3.Tablet $700"<<endl;
    cout<<"4.Phone cover $15"<<endl;
    cout<<"5.Laptop charger $25"<<endl;

    cout<<""<<endl;
    cout<< "If you want to buy a laptop please enter the quantity" << endl;
    cout<< "else enter 0" <<endl;
    cin>>item_a;
    cout<< "" <<endl;

    cout<<""<<endl;
    cout<< "If you want to buy a phone please enter the quantity" << endl;
    cout<< "else enter 0" <<endl;
    cin>>item_b;
    cout<< "" <<endl;

    cout<<""<<endl;
    cout<< "If you want to buy a tablet please enter the quantity" << endl;
    cout<< "else enter 0" <<endl;
    cin>>item_c;
    cout<< "" <<endl;

    cout<<""<<endl;
    cout<< "If you want to buy a phone cover please enter the quantity" << endl;
    cout<< "else enter 0" <<endl;
    cin>>item_d;
    cout<< "" <<endl;

    cout<<""<<endl;
    cout<< "If you want to buy a laptop charger enter the quantity" << endl;
    cout<< "else enter 0" <<endl;
    cin>>item_e;
    cout<< "" <<endl;

    laptop=600;
    phone=480;
    tablet=700;
    phonecover=15;
    laptopcharger=25;

    total=((item_a*laptop)+(item_b*phone)+(item_c*tablet)+(item_d*phonecover)+(item_e*laptopcharger));
    vat=0.12;
    vat_amount=(0.12*total);
    totalamount=(vat_amount+total);

    cout<< "Everything you have purchased will cost:" << totalamount << " (vat amount included)" <<endl;
    cout<< "Please enter the amount you are paying" <<endl;
    cin>> payment;

    if(payment>totalamount)
    {
        cout<< "Thank you for your payment" <<endl;
        cout<< "Your change will appear on your receipt" <<endl;
    }
    else if(payment==totalamount)
    {
        cout<< "Thank you for your payment" <<endl;
    }
    else
    {
        cout<< "Your money is not enough to make the purchase " <<endl;
        cout<< "Thank you for your visit to WILLISPEE GH" <<endl;
        return 0;
    }

    cout<<""<<endl;
    cout<< "RECEIPT" <<endl;
    cout<<""<<endl;
    cout<< "NAME:" << name <<endl;
    cout<< "ID:" << code <<endl;
    cout<< "ITEMS BOUGHT" <<endl;
    cout<< "Laptop:" << item_a << endl;
    cout<< "Phone:" << item_b <<endl;
    cout<< "Tablet:" << item_c <<endl;
    cout<< "Phone Cover:" << item_d <<endl;
    cout<< "Laptop Charger:" << item_e <<endl;
    cout<< "VAT:" << vat <<endl;
    cout<< "Vat Amount:" << vat_amount <<endl;
    cout<< "Total:" << total <<endl;
    cout<< "Total Amount:" << totalamount <<endl;
    cout<< "Amount Paid:" << payment <<endl;

    balance=totalamount-payment;
    change=payment-totalamount;
    if(payment>totalamount)
    {
        cout<< "Your change is:" << change <<endl;
        cout<< "Thank you for shopping with WILLISPEE GH,QUALITY AND ORIGINALITY IS ASSURED." <<endl;
    }
    else if(payment=totalamount)
    {
        cout<< "Thank you for shopping with WILLISPEE GH,QUALITY AND ORIGINALITY IS ASSURED." <<endl;
    }



 return 0;
}








