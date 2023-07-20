#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <stdio.h>
#include "StaffMember.h"

#define ID_LENGTH 9

typedef struct _animal{
    char* name;
    char ID[ID_LENGTH + 1];
    char* type;
    int assigned_kennel = -1;
    StaffMember* assigned_staff;
} Animal;

Animal* createAnimal(char* name, char* ID, char* type, int kennel, Staffmember* stf);

void addStaff(StaffMember* stf);

StaffMember* getAssignedStaff();

void removeStaff(char* staffID);

int hasStaff(char* staffID);

void setAssignedKennel(int newKennelLabel);

int getAssignedKennel();

char* getname();

char* getAnimalType();

void* setAnimalType(char* newType);

char* getAnimalID();

void setName(char* newName);

//char* toString();

#endif
