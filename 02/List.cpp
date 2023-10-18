#include "List.h"
#include <iostream>

using namespace std;


void init(slist * list)
{
  list->head = NULL;
}


void push_front(slist * list, char c){
  slistEl *element = new slistEl;
  element->data = c;
  element->next = list->head;
  list->head = element;
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

void printl(slist * list){
  slistEl *temp = list->head;
  cout << "Moja lista: <";
  if(!temp){
    cout << "Lista jest pusta>";
  }
  else{
    while(temp){
      cout << temp->data;
      slistEl *temp2 = temp->next;
      delete temp;
      temp = temp2;
    }
    list->head = NULL;
    cout << ">";
  }
  cout << endl;
}
