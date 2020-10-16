#include<iostream>
#include<cmath>
 
using namespace std;
 
int main()
{
    
    char operation,redo;
  int num1,num2;
    cout<<"\t\t\tCALCULATOR"<<endl;
    cout<<"************************************************************"<<endl;
    cout<<endl<<endl<<endl;

    do
    {
 
        cout<<" \t\t\t SUM=[S]"<<endl;
        cout<<"\t\t\t DIFFERENCE=[D]"<<endl;
        cout<<"\t\t\t PRODUCT=[P]"<<endl;
        cout<<"\t\t\t QUOTIENT=[Q]"<<endl;
        cout<<"\t\t SELECT OPERATION TO CALCULATE :";
         cin>>operation ;
        cout<<endl<<endl;
        cout<<" Enter  two numbers (";
        cout<<operation<<"):"<<endl<<"1st num:";
        cin>>num1;
        cout<<"2nd num:" ;
        cin>>num2;
        cout<<endl;
        cout<<"*********************************************************"<<endl;
        switch (operation)
        {
    
        case'S':
            cout<<"The ADDITION of two numbers "<<num1<<"+"<<num2<<"=";
            cout<<num1+num2<<endl<<endl;
            break;
        case'D':
            cout<<"The SUBTRACTION of two numbers "<<num1<<"-"<<num2<<"=";
            cout<<num1-num2<<endl;
            break;
        case'P':
            cout<<"The PRODUCT of two numbers "<<num1<<"*"<<num2<<"=";
            cout<<num1*num2<<endl;
            break;
        case'Q':
            cout<<"The QUOTIENT of two numbers "<<num1<<"/"<<num2<<"=";
            if(num2==0)
            {
                cout<<"not valid"<<endl;
            }
            cout<<(num1/num2)<<endl;
            break;
            
        default:
  cout<<"INVALID              COMMAND"<<endl;
 
        }
        
        cout<<"enter y or Y to continue:";
        cin>>redo;
        cout<<endl<<endl;
    }
    while(redo=='y'||redo=='Y');
 
    return 0;
 
}