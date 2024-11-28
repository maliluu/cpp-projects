/*
    ★ Activity 2: Pet Grooming Appointment Scheduling,
        The data structure used is a list.
        The appointments will be:
            ordered by schedule time,
            and stored in a list,
            that allows adding new appointments,
            modifying existing ones,
            and cancelling appointments.
        We will use a sorting algorithm to keep the appointments ordered by time so that the earliest is processed first.
        The class that will be used is a GroomingAppointment class.
*/

#ifndef GroomingAppointments_h
#define GroomingAppointments_h

#include "PetShopQueue.h"
#include <list>
#include <string>
#include <iostream>
using namespace std;

class GroomingAppointments {
    private:
        Customer customer;
        int Time;
    public:
        GroomingAppointments(Customer&, int);
};

#endif