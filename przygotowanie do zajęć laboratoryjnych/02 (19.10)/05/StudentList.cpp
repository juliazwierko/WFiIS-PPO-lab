#include "StudentList.h"

TStudent* InitTStudent(){
    TStudent *stud = new TStudent;
    stud->next = NULL;
    return stud;
}

void show(TStudent *head){
    TStudent *temp = head;
    std::cout << "Aktualny stan listy:" << std::endl;
    if(head == NULL){
        std::cout << "Lista jest pusta" << std::endl;
    }
    else{
        while(temp != NULL){
            std::cout << temp->data << std::endl;
            temp = temp->next;
        }
    std::cout << std::endl;
    }
}

void push_front(TStudent **head, int value){
    TStudent *temp = InitTStudent();
    temp->data = value;
    temp->next = *(head);
    *(head) = temp;
}

void clear(TStudent **head){
    TStudent *temp = *(head);
    while(*head){
        temp = (*head);
        (*head) = (*head)->next;
        delete temp;
    }
}
