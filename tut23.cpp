#include <iostream>
using namespace std;

class Shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void DisplayPrice(void);
};
void Shop::setPrice(void)
{
    cout << "Enter id of your item no " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop::DisplayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemID[i] << " is " << itemPrice[i];
    }
}
int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    
    dukaan.DisplayPrice();
    return 0;
}