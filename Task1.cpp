#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int iRet;
        int iValue1;
        int iValue2;

        Arithmetic(int x, int y)
        {
            iRet = 0;
            iValue1 = x;
            iValue2 = y;
        }

        void Calculations()
        {
            
            cout<<"----------Menu----------"<<endl;
            cout<<"1. Addition"<<endl;
            cout<<"2. Subtraction"<<endl;
            cout<<"3. Multiplication"<<endl;
            cout<<"4. Division"<<endl;
            cout<<"------------------------"<<endl;
            cout<<"Enter your choice : "<<endl;
            cin>>iRet;

            if((iRet < 1) || (iRet > 4))    //Filter
            {
                cout<<"Please Enter valid choice"<<endl;
            }

            if(iRet == 1)
            {
                cout<<"The Addition is : "<<iValue1+iValue2<<endl;
            }
            else if(iRet == 2)
            {
                cout<<"The Subtraction is : "<<iValue1-iValue2<<endl;
            }
            else if(iRet == 3)
            {
                cout<<"The Multiplication is :"<<iValue1*iValue2<<endl;
            }
            else if(iRet == 4)
            {
                cout<<"The Division is : "<<iValue1/iValue2<<endl;
            }
            else
            {
                cout<<"Please Enter valid Number"<<endl;
            }
        }
};

int main()
{
    int iNo1 = 0, iNo2 = 0;

    cout<<"Enter First Number : "<<endl;
    cin>>iNo1;

    cout<<"Enter Second Number : "<<endl;
    cin>>iNo2;

    Arithmetic aobj(iNo1,iNo2);

    aobj.Calculations();

    return 0;
}