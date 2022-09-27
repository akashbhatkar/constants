#include <iostream>

using namespace std;

class numb
       {
   mutable int a,b;
public:void setdata()
    {
        cout<<"Enter the values of a and b ";
        cin>>a>>b;

    }
    void getdata() const
    {
        a=100;
        b=200;
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;

    }
};

int main()
{
    numb n;
    n.setdata();
    n.getdata();

}
