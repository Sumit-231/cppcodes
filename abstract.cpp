#include<iostream>
using namespace std;
class base 
{
public:
virtual void fun()=0;
};

class drive:public base
{
void fun()
{
cout<<"this is a derive class"<<endl;
}
};
int main()
{
base *p=new drive;
p->fun();
return(0);
}
