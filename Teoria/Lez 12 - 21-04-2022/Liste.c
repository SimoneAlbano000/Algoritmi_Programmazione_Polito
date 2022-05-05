// Pointer based list implementation

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// List struct
typedef struct{
    char* value;
    struct element* ptr2next;
}element;

// Functions prototypes
void addValueHead(char*, element**);
void addValueTail(char*, element*);

void main() {
    // Create the header of the list
    element* header = NULL;
    addValueHead("ciao", &header);
    return;
}