/*  
    ★ Activity 1: Customer check-in system,
        The data structure used is a queue. 
        Customers arrive at the pet shop and are added to a queue based on their arrival time. 
        The check-in system processes customers based on who arrives first,
        and when the customers check in, they are removed from the queue.
        The class that will be used in the algorithm is a Customer class.
*/

#include "PetShopQueue.h"
#include <queue>
#include <iostream>
#include <string>
using namespace std;

// Customer Class:
Customer::Customer(string n) {
    Name = n;
}

ostream& operator<<(ostream& output, const Customer& customer) {
    output << "Customer Name: " << customer.Name;
    return output;
}

// PetShopQueue Class:
void PetShopQueue::AddCustomer(const Customer& customer) {
    CustomerQueue.push(customer);
    cout << "Customer " << customer.Name << " has been added to the queue.\n\n";
}

void PetShopQueue::ProcessCustomer() {
    if (!CustomerQueue.empty()) {
        Customer CustomerObject = CustomerQueue.front();
        CustomerQueue.pop();
        cout << "Processing..." << CustomerObject.Name << "\n\n";
    }
    else {
        cout << "There are no customers in the queue.\n\n";
    }
}

void PetShopQueue::PrintCustomers() const {
    queue<Customer> temp = CustomerQueue;
    if (!CustomerQueue.empty())
        cout << "Customers: \n";
    else {
        cout << "There are no customers in the queue.\n\n";
    }
    while (!temp.empty()) {
        cout << temp.front() << endl;
        temp.pop();
        cout << "\n";
    }
}