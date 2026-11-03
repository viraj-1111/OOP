#include <iostream>
using namespace std;
template<class T>
class calculator
{ T num1;
  T num2;
   public:

  calculator(T n1,T n2)
  {num1=n1;
   num2=n2;
  }
  T add(){
      return num1+num2;
        }
  T subs(){
      return num1-num2;
  }
  T multiply(){
      return num1*num2;
  }
  T divide(){
      return num1/num2;
  }
};

int main(){
    calculator <int>c1(5,4);
    cout<<"Integer addition is:"<<c1.add();
    calculator <double>c2(5.2,4.3);
    cout<<"\nDouble addition is:"<<c2.add();
    calculator <int>c3(6,3);
    cout<<"\nInteger multiplcation is:"<<c3.multiply();
    calculator <int>c4(20,5);
    cout<<"\nInteger division is:"<<c4.divide();
    
    return 0;
    
}
