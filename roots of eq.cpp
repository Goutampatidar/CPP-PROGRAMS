
#include<conio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float a,b,c,d;
    float r1,r2;
    cout<<"enter value of a,b,c here a,b,c are respectic  ly ax^2+bx+c=0 ";
    cin>>a>>b>>c;

    d=((b*b)-(4*a*c));
    if(d==0)
    {
        cout<<"eq has real and equal roots";
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
    }
    else if(d<0)
    {
        cout<<"eq has imagnary roots";
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
    }
    else
    {
        cout<<"eq has two distinct roots";
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
    }
    cout<<"roots of eq are "<<r1<<"&"<<r2;

    getch();
}

