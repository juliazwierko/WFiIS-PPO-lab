#pragma once 
#include <iostream>

typedef struct node {
    int data;
    struct node *next;
}TStudent;

TStudent *InitTStudent();

void show(TStudent*head);

void push_front(TStudent **head, int value);

void clear(TStudent **head);