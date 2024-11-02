#include<iostream>
using namespace std;

typedef struct student{
    int sid;
    string sname;
    float fees;
    char favchar;
    double points;
}ep;

int main(){
    /********structure*******/
    ep standard;
    standard.sid = 65;
    standard.sname = "sania ";
    standard.fees = 2300000.354;
    standard.favchar = 's';
    standard.points = 14075.00948849;
    cout<<standard.sid<<endl;
    cout<<standard.sname<<endl;
    cout<<standard.fees<<endl;
    cout<<standard.favchar<<endl;
    cout<<standard.points<<endl;

cout<<endl;

    /********enum*******/
    enum fruits{Apple, Banana, Mango, Chiko, Blackberry, Watermelon};
    // cout<<Banana<<endl;
    // cout<<Watermelon<<endl;
    // cout<<Mango<<endl;
    // cout<<Apple<<endl;
    // cout<<Chiko<<endl;
    // cout<<Blackberry<<endl;

    fruits m1 = Watermelon;
    cout<<m1<<endl;
    fruits m2 = Apple;
    cout<<m2<<endl;
    fruits m3 = Mango;
    cout<<m3<<endl;
    return 0;
}