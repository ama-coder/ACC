#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    double s,f,a;
    int ia;
    char o;
    cout<<endl<<"enter 2 number of calculating:"<<endl;
    cin>>s>>f;
    cout<<"enter math oprator(- , + , * , / , % , or _ (for currect /):" ;
    cin>>o;
    switch (o)
    {
    case '+' : a=s+f;cout<<a<<endl; 
        break;
    case '-' : a=s-f;cout<<a<<endl; 
        break;
    case '*' : a=s*f;cout<<a<<endl; 
        break;
    case '/' : a=s/f;cout<<a<<endl; 
        break;
    case '%' : ia=(int)s%(int)f;cout<<ia<<endl; 
        break;
    case '_' : ia=s/f;cout<<ia<<endl; 
        break;
    
    default:cout<<"ERROR";
        break;
};
    getch();
    };
