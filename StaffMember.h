#include <stdio.h>
#include "Animal.h"

#define SIN_LENGTH 10 
#define EMPLOYEE_ID_LENGTH 10 

typedef struct _staffmember{
    char*[Animal] assigned_animals;
    char* First_name;
    char* Last_name;
    char SIN[SIN_LENGTH];
    char employee_id[EMPLOYEE_ID_LENGTH];
} StaffMember;

void assigAnimal(Animal a);

void removeAnimal(Animal a);

int hasAnimal()
