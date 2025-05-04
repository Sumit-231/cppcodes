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
virtual void fun()
{
cout<<"this is a derive class"<<endl;
}
};
class child :public base
{
public:
void fun()
{
cout<<"this is a  child class"<<endl;
}
};
int main()
{
base *p=new child;
p->fun();
return(0);
}
