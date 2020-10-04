//#include <iostream>
//using namespace std;
//
//class Base
//{
//private:
//    int num1;
//protected:
//    int num2;
//public:
//    int num3;
//
//    Base() : num1(1),num2(2),num3(3)
//    {
//    }
//};
//
//class Derived : public Base {};
//
//int main(void)
//{
//
//    Derived drv;
//    cout<<drv.num3<<endl;
//    return 0;
//}



#include <iostream>
#include <cstring>

using namespace std;

class Computer
{
private:
    char owner[50];
public:
    Computer(char * name)
    {
        strcpy(owner,name);
    }
    void Calculate()
    {
        cout<<"��û ������ ��� �մϴ�."<<endl;
    }
};

class NotebookComp : public Computer
{
private :
    int Battery;
public:
    NotebookComp(char * name, int initChag)
    : Computer(name), Battery(initChag)
    {

    }
    void Charging(){Battery += 5;}
    void UseBattery() {Battery -= 1; }
    void MovingCal()
    {

        if(GetBatteryInfo() < 1)
        {
            cout<<"������ �ʿ��մϴ�."<<endl;
            return;
        }
        cout<<"�̵��ϸ鼭 ";
        Calculate();
        UseBattery();
    }
    int GetBatteryInfo(){return Battery;}
};


class TableNotebook : public NotebookComp
