#include<iostream>
using namespace std;
class Employee
{
    private:
    string name;
    int eid;
    float sal;
    static string org;
public:
string setname(string st)
{
    this->name=st;
    return name;
}
int setid(int id)
{
    this->eid=id;
    return eid;
}
float setsal(float f)
{
    this->sal=f;
    return sal;
}
//string setorg(string st1)
//{
//    this->org=st1;
//    return org; 
//}
void getname()
{
    cout<<name<<endl;
}
void getid()
{
    cout<<eid<<endl;
};
void getsal()
{
    cout<<sal<<endl;
}
void getorg()
{
    cout<<org<<endl;
}
};
string Employee::org="Google";
int main()
{
    Employee emp;
    emp.setid(256);
    emp.setname("Prashant");
    emp.setsal(1200000000.012);
    emp.getid();
    emp.getname();
    emp.getorg();
    emp.getsal();
    return 0;
}