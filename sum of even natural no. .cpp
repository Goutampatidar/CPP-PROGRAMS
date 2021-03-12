
#include<conio.h>
#include<iostream>

using namespace std;


int main()
{
    int a,mult=0,i,c;
    cout<<"enter the two no.between which we have to perform task";
    cin>>a>>c;
    for(i=a; i<=c; i++)
    {
        if(a%2==0)
        {

            mult=mult+a;
        }
        a++;
    }
    cout<<"sum of even no. ="<<mult;
    getch();
}


