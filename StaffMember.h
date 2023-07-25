#ifndef __STAFFMEMBER_H__
#define __STAFFMEMBER_H__

#include <stdio.h>
#include "Animal.h"

#define SIN_LENGTH 10 
#define EMPLOYEE_ID_LENGTH 10 

typedef struct _staffmember{
    Animal* assigned_animals;
    char* First_name;
    char* Last_name;
    char SIN[SIN_LENGTH];
    char employee_id[EMPLOYEE_ID_LENGTH];
} StaffMember;

StaffMember* createStaffMember(char* fName, char* lName, char* socInsNum, char* empID, Animal* Anim);

char* getFirstName();

char* getLastName();

char* getSocInsNum();

char* getEmployeeID();

void setFirstName(char* newFirstName);

void setLastName(char* newLastName);

void assignAnimal(Animal* Anim);

void removeAnimal(char* animID);

Animal** getAssignedAnimals();

int hasAnimal(char* animID);

//char* toString();

#endif
