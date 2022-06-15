#include<iostream>
using namespace std;
int main()
{
	char op;
	int n;
	cout<<"Welcome to calculator";
    cout<<"choose any operator 1)Addition 2)Substraction 3)Multiplication 4)Division \n";
    cin>>op;
    switch (op)
    {
    case '1':
	{
        cout<<"How many value you have to calculate.";
        cin>>n;
        int add=0;
        int val;
        cout<<"Enter values to add";
        for(int i=0;i<n;i++)
		{
            cin>>val;
            add=add+val;
        }
        cout<<"Addition is "<<add;
        break;
    }
    case '2':{
        cout<<"Enter values";
        float a;
        float b;
        float c;
        cin>>a;
        cin>>b;
        c=a-b;
        cout<<"Substraction is = "<<c;
    }
    case '3':{
        cout<<"Enter no of values you have to multiply";
        cin>>n;
        float mul=1;
        float val;
        cout<<"Enter values to multiply";
        for(int i=0;i<n;i++)
		{
            cin>>val;
            mul=mul*val;
        }
        cout<<"Multiplication is = "<<mul;
        break;
    }
    case '4':{
        cout<<"Enter values";
        float a,b,c;
        cin>>a;
        cin>>b;
		c=a/b;
        cout<<"Division is= "<<c;
        break;
    }
    default:
        cout<<"Invalid input";
        break;
    }
    return 0;
}