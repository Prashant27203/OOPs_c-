#include<iostream>
using namespace std;
class B;
class A 
{
    private:
    int x;
    //int y;
    public:
    A(int x)
    {
        this->x=x;
    }
    friend int twosum(A,B);
};
class B
{
    private:
    int y;
    public:
    B(int y)
    {
        this->y=y;
    }
    friend int twosum(A,B);
};
int twosum(A a,B b)
{
    return a.x+b.y;
}
int main()
{
    A a(25);
    B b(35);
    std::cout<<twosum(a,b)<<endl;
    return 0;
}