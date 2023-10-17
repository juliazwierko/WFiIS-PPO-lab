#include "List.h"
#include <iostream>

using namespace std;


void init(slist * list)
{
  list->head = NULL;
}

void push_front(slist* list, char data)
{
  slistEl *element = new slistEl;
  //wypelniamy danymi "koraliki"
  element->data = data;
  //wskazujemy koralik na element na ktory wskazywal head
  element->next = list->head;
  list->head = element;
}


void printl(slist* list){
  //tmp pokazuje na 1 koralik (czyli elemnt na ktory wskazuje head)
  slistEl * temp = list->head;
  if(!temp){
    cout << "pusto" << endl;
  }
  else{
    cout << "Moja lista: <";
    while(temp){

      cout << temp->data;
      slistEl *temp2 = temp->next;
      delete temp;
      temp = temp2;
    }
    cout << ">\n";
  }

}

void push_back(slist * list, char c)
{
  slistEl * p, * e;

  e = new slistEl;  
  e->next = NULL;   
  e->data = c;
  p = list->head;
  if( p )
  {
     while( p->next ) p = p->next;
     p->next = e;
  }
  else list->head = e;
}

slistEl * find(slist * list, char c)
{
  slistEl * p = list->head;
  while(p != NULL)
  {
  	if( p->data == c )
  	  break;
  	p = p->next;
  }
  
  return p;
}

// void clear(slist* list)
// {
//     slistEl* temp = list->head;
//     while (temp != nullptr)
//     {
//         slistEl* next = temp->next;
//         delete temp;
//         temp = next;
//     }
//     list->head = nullptr;
// }