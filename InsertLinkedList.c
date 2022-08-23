#include <string.h>
#include "InsertLinkedList.h"

linkedList_h* createLinkedList_h(void){
	linkedList_h* L;
	L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L->head = NULL;
	return L;
}

void freelinkedList_h(linkedList_h* L){
	listNode* p;
	while(l->head!=NULL){
		p = l->head;
		l->head = l->head->link;
		free(p);
		p=NULL;
	}
}

void printList(linkedList_h* L){:
	listNode* p;
	printf("L = (");
	p = L -> head;
	while(p != NULL){
		printf("%s", p->data);
		p=p->link;
		if(p!=NULL) printf(",");
	}
	printf(") \n");
}

void insertFirstNode(linkedlist_h* L, char* x){
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = L->head;
	L->head = newNode;
}

void insertMiddleNode(linkedlist_h* L, listNode* pre, char* x){
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if(L->head == NULL){
		newNode->link = NULL;
		L->head = newNode;
	}
	else if(pre == NULL){
		newNode->link = L->head;
		L->head = newNode;
	}
	else{
		newNode->link = pre->link;
		pre->link = newNode;
	}
}

void insertLastNode(linkedlist_h* L, char* x){
	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = NULL;
	if(L->head = NULL){
		L->head = newNode;
		return;
	}

	temp = head;
	while (temp-> link !=NULL) temp = temp->link;
	temp->link = newNode;
}
