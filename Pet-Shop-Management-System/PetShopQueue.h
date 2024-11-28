/*  
    ★ Activity 1: Customer check-in system,
        The data structure used is a queue. 
        Customers arrive at the pet shop and are added to a queue based on their arrival time. 
        The check-in system processes customers based on who arrives first,
        and when the customers check in, they are removed from the queue.
        The class that will be used in the algorithm is a Customer class.
*/

#ifndef PetShopQueue_h
#define PetShopQueue_h

#include <queue>
#include <string>
using namespace std;

class Customer {
    public:
        string Name;
        Customer(string);
        friend ostream& operator<<(ostream& os, const Customer& customer);

};

class PetShopQueue {
    private:
        queue<Customer> CustomerQueue;
    public:
        void AddCustomer(const Customer&);
        void ProcessCustomer();
        void PrintCustomers() const;
};
#endif