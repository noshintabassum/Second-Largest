#include<iostream>
#include<conio.h>
using namespace std;

int main(){



    int a, b, c, n;

    cout<<"enter testCase no. : ";

    cin>>n;



    for(int i=1; i<=n; i++){


        cout<<endl<<"enter your 3 number's for testCase "<<i<<" : ";


        cin>>a>>b>>c;

        cout<<endl;

        cout<<"secon largest : ";

        if(a>b && a<c || a<b && a>c){

            cout<<a;
        }else if(b>a && b<c || b<a && b>c){

            cout<<b;
        }else {

            cout<<c;
        }


        cout<<endl;
    }


    getch();



}






