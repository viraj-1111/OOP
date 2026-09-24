#include <iostream>
using namespace std;

class basicInfo
{ protected: 
    string name;
    int age;
    string add;
    
public:

  void acceptbasicInfo()
  {
      cout<<"\n Enter name:";
      cin>>name;
       cout<<"\n Enter age:";
      cin>>age;
       cout<<"\n Enter address:";
      cin>>add;
      cout<<endl;
 }

void displaybasicInfo(){

      cout<<"\n Name of employee:";
      cout<<name;
       cout<<"\n Age:";
      cout<<age;
       cout<<"\n Address:";
      cout<<add;
      cout<<endl;
}
};  

class deptInfo
{ protected: 
    string deptname ;
    string natureofwork;
    
public:
void acceptdeptInfo()
  {
      cout<<"\n Enter department:";
      cin>>deptname;
       cout<<"\n Enter nature of work:";
      cin>>natureofwork;
      cout<<endl;
 }

  void displaydeptInfo(){

      cout<<"\n Department:";
      cout<<deptname;
       cout<<"\n nature of work:";
      cout<<natureofwork;
      cout<<endl;
}
};

class employee:public basicInfo,public deptInfo
{
    public:
    void accept()
    {
        acceptbasicInfo();
        acceptdeptInfo();
    }

    void display()
    {
        displaybasicInfo();
        displaydeptInfo();
    }
};


int main() {
 employee e;

    cout << "----Enter Employee Information-----\n\n";
    e.accept();

    cout << "\n\n-----Employee Information-----";
    e.display();

    return 0;   
    
}

    
