#ifndef __PETSTORE_H__
#define __PETSTORE_H__

#include <stdio.h>
#include <stdbool.h>
#include "Animal.h"

typedef struct _petstore{
    char* name;
    int minLabel;
    int maxLabel;
    Animal* kennel[maxLabel-minLabel+1];
} PetStore;

PetStore* createPetStore(char* Name, int minkennellabel, int maxkennellabel);

int* availableKennels();

void freeKennel(int kennelLabel);

char* getName();

int getMinLabel();

int getMaxLabel();

int externalToInternalIndex(int kennelLabel);

int intenalToExternalLabel(int arrayIndex);

bool isOccupied(int kennelLabel);

Animal* getAnimal(int kennelLabel);

void assignAnimalToKennel(Animal anim, int kennelLabel);

bool isValidLabel(int kennelLabel);

//char* toString();

#endif
