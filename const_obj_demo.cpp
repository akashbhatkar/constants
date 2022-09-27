#include <iostream>

using namespace std;

class num
{
private: int a,b;
public:
    num()
    {
        cout<<"default constrauctor"<<endl;
        cin>>a>>b;
    }
    void setdata()
    {
        cout<<"Enter the values of a and b"<<endl;
        cin>>a>>b;
    }
    void getdata ()const
    {
        cout<<a<<"\t"<<b;

    }
};

int main()
{
const num n;
        num n1;
n1.setdata();
n.getdata();
n1.getdata();
}
