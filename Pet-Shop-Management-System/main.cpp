#include "PetShopQueue.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    PetShopQueue MariaShop;
    MariaShop.AddCustomer(Customer("Maria"));
    MariaShop.AddCustomer(Customer("Ma"));
    MariaShop.AddCustomer(Customer("ri"));
    MariaShop.AddCustomer(Customer("a"));
    cout << "ProcessCustomer()" << endl;
    MariaShop.ProcessCustomer();
    cout << "PrintCustomer()" << endl;
    MariaShop.PrintCustomers();
}