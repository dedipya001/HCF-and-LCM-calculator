//done by me on 17 sept 2022 at 22:47
#include <iostream>
using namespace std;
int HCF(int n1,int n2)
{
    int hcf,i,k;
    if(n1>n2)
    {
        k=n2;
    }
    else if(n2>n1)
    {
        k=n1;
        
    }
    for(i=1;i<=k;i++)
    {
        if (n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    return hcf;
}
int LCM(int n1,int n2,int HCF)
{
    return ((n1*n2)/HCF);
}
int main()
{
    long t;
    hello:
    int num1,num2,HCFA,LCMA;
    cout<<"ENTER THE NUMBER 1"<<endl;
    cin>>num1;
    cout<<"ENTER THE NUMBER 2"<<endl;
    cin>>num2;
    HCFA= HCF(num1,num2);
    LCMA= LCM(num1,num2,HCFA);
    int x;
    cout<<"THESE ARE THE FOLLOWING COMMANDS:"<<endl;
    cout<<"1-> FIND HCF"<<endl;
    cout<<"2-> FIND LCM"<<endl;
     cout<<"Enter the choice"<<endl;
    cin>>x;
    
       
        switch(x)
        {
        case 1:
        cout<<"The HCf is :"<<HCFA<<endl;
        break;
        case 2:
        cout<<"The Lcm is:"<<LCMA<<endl;
        break;
        default:
        cout<<"PLEASE ENTER THE CORRECT CHOICE"<<endl;
        }
        char c;
        cout<<"Do you want to continue: Press Y for Yes and N for no"<<endl;
        cin>>c;
        if(c=='Y')
        {
            goto hello;
        }
        else if(c=='N')
        {
            cout<<"BYE USER....COME AGAIN"<<endl;
            return 0;
        }
    
}
