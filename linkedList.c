#include <stdlib.h>
#include <stdio.h>

typedef struct linknd {				//�ؿ��� ���� �� �Ÿ� typedef ����ϴ� �� ����. 
	int data;
	
	//void *next; ����Ű�� ����� ����ü���� �˰� �־ void�� �����ص� ������. 
	struct linknd *next;
} linknd_t;				

static linknd_t *list;		//linknd list ��ü, static ������ ���� �Ҵ�: �ۿ��� ������ �� ����.

linknd_t* create_node(int value){
	linknd_t *ndPtr;
	
	//���� �޸� �Ҵ�
	ndPtr = (linknd_t*)malloc(sizeof(linknd_t));
	if (ndPtr == NULL){
		
		printf("!!!ERROR!!!\n");
		return NULL;
	}
	
	//������ ���� 
	ndPtr->data = value;
	ndPtr->next = NULL;
	

	return ndPtr; 

} 

