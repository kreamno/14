#include <stdlib.h>
#include <stdio.h>

typedef struct linknd {				//밑에서 자주 쓸 거면 typedef 사용하는 게 좋음. 
	int data;
	
	//void *next; 가르키는 대상이 구조체임을 알고 있어서 void로 선언해도 괜찮다. 
	struct linknd *next;
} linknd_t;				

static linknd_t *list;		//linknd list 실체, static 넣으면 정적 할당: 밖에서 접근할 수 없음.

linknd_t* create_node(int value){
	linknd_t *ndPtr;
	
	//동적 메모리 할당
	ndPtr = (linknd_t*)malloc(sizeof(linknd_t));
	if (ndPtr == NULL){
		
		printf("!!!ERROR!!!\n");
		return NULL;
	}
	
	//정수값 저장 
	ndPtr->data = value;
	ndPtr->next = NULL;

	return ndPtr; 

} 


void addTail(int value){
	linknd_t *ndPtr, *newPtr;
	
	if(list == NULL)	//첫 node이면 
	{
		return;
	}
	else
	{
		ndPtr = list;
		while(ndPtr->next != NULL){
			ndPtr = ndPtr->next;
		}
		
		newPtr = create_node(value);
		ndPtr->next = newPtr;
	}
	
}
