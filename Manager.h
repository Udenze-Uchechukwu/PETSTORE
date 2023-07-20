#ifndef __MANAGER_H__
#define __MANAGER_H__

#include <stdio.h>
#include "Animal.h"

#define SIN_LENGTH 10 
#define EMPLOYEE_ID_LENGTH 10 

typedef struct _manager{
    char* First_name;
    char* Last_name;
    char SIN[SIN_LENGTH];
    char employee_id[EMPLOYEE_ID_LENGTH];
    Animal** assigned_animals;
} Manager;

Manager* createManager(char* fName, char* lName, char* socInsNum, char* empID, Animal* Anim);

char* getFirstName();

char* getLastName();

char* getSocInsNum();

char* getEmployeeID();

void setFirstName(char* newFirstName);

void setLastName(char* newLastName);

void assignAnimal(Animal* Anim);

void removeAnimal(char* animID);

Animal** getAssignedAnimals();

int hasAnimal(char* animID)

//char* toString();

#endif 
