typedef struct linknd {				//밑에서 자주 쓸 거면 typedef 사용하는 게 좋음. 
	int data;
	
	//void *next; 가르키는 대상이 구조체임을 알고 있어서 void로 선언해도 괜찮다. 
	struct linknd *next;
} linknd_t;				


