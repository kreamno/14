typedef struct linknd {				//�ؿ��� ���� �� �Ÿ� typedef ����ϴ� �� ����. 
	int data;
	
	//void *next; ����Ű�� ����� ����ü���� �˰� �־ void�� �����ص� ������. 
	struct linknd *next;
} linknd_t;				

static linknd_t *list;		//linknd list ��ü, static ������ ���� �Ҵ�: �ۿ��� ������ �� ����. 

