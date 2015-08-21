#include <iostream>

using namespace std;


class A
{
public:
    A(){cout<<"A"<<endl;}
    ~A(){cout<<"~A"<<endl;}
};

class B
{
public:
    B(){cout<<"B"<<endl;}
    ~B(){cout<<"~B"<<endl;}
};

class C : A
{
public:
    C(){cout<<"C"<<endl;}
    ~C(){cout<<"~C"<<endl;}
private:
    B b;
};

class T
{
public:    
    void foo(void)
    {
        delete this;
    }
};

int main(int argc, char *argv[])
{
    C* c = new C();
    delete c;

    T t;
    t.foo();
    return 0;
}
