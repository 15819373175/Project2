#include<stdio.h>
#define MaxSize 20
typedef struct
{
	ElemType data[MaxSize]
		int front, rear;
}SqQueue;   //队空条件 front==rear;(队满条件rear==MaxSize-1)分为假溢出或真溢出，不一定真的队满
//因此，为了能够充分地利用数组中的存储空间，可以把数组的前端和后端连接起来，形成一个环形表，叫循环队列或环形队列
//环形表中，front==rear也有可能队满

/*规定：
*任设置队空条件为front==rear。
* 将队满条件设置为(rear+1)MOD MaxSize==front。     试探进队，若到达队头指针位置，则认为队满
    （在这种队满条件下任会有一个空闲单元，也就是说这样的队中最多只能进队MaxSize-1个元素。）*/


