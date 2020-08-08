#include <iostream>

using namespace std;
class FruitSeller
{
    private:
        int APPLE_PRICE;
        int numOfApples;
        int myMoney;
    public:
        void InitMember(int price, int num, int money)
        {
            APPLE_PRICE=price;
            numOfApples = num;
            myMoney = money;
        }
        int SaleApples(int money)
        {
            int num = money/APPLE_PRICE;
            numOfApples -= num;
            myMoney += money;
            return num;
        }
        void ShowSaleResult()
        {
            cout<<"remained Apples : "<<numOfApples<<endl;
            cout<<"판배 수익 : "<<myMoney<<endl;
        }
};

class FruitBuyer
{
    int myMoney;
    int numOfApples;

    public:
        void InitMembers(int money)
        {    
            myMoney=money;
            numOfApples=0;
        }
        void BuyApples(FruitSeller &seller, int money)
        {
            numOfApples+=seller.SaleApples(money);
            myMoney-=money;
        }
        void ShowBuyResult()
        {
            cout<<"현재 잔액: "<<myMoney<<endl;
            cout<<"사과 개수: "<<numOfApples<<endl;
        }

};