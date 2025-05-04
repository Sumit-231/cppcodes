#include<iostream>
using namespace std;
class base
{
public:
virtual void fun()
{
cout<<"this is a base class"<<endl;
}
};

class derive:public base
{
public:
void fun()
{
cout<<"this is a derive class"<<endl;
}
};
int main()
{
base *p=new derive;
p->fun();
return(0);
}
