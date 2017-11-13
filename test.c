/**
******************************************************************************
* @file    sort.c
* @author  GYC
* @version V1.0
* @date    2017-11-19
* @brief   排序
******************************************************************************
* @attention None

******************************************************************************
======================================================================================
Revision History:
					  Nodification
	Author			     Data		                       Major Changes
--------------      -------------------         --------------------------------------
	GYC					2017.11.12						Add ...
======================================================================================
*/

#include <stdio.h>
#include <stdlib.h>




/**
*@function int Selection_Sort(int buf[])
* @brief  对传递的数组进行选择排序. 排序完成后,数组中元素为升序.
* @param  buf[]: 存储待排序的元素的数组
* @param  flag: 0
* @retval 正常排序时---所排序的元素个数;   其它---0
* @attention  None
*/
int Selection_Sort(int buf[])
{
	int i, j;	//循环索引[i,j,k,...] 
	int buf_len = (sizeof(buf) / sizeof(int));	//获取数组中元素总数(即数组长度) 
	int temp_index;	//元素交换时暂存数据 
	printf("%d     ", buf_len);
	for (i = 0; i<buf_len; i++) {
		for (j = i, temp_index = i; j<buf_len; j++) {
			if (buf[temp_index] > buf[j]) {
				temp_index = j;
			}
		}
		buf[i] = buf[temp_index];
	}

	return buf_len;
}

int main(int argc, char *argv[]) {

	int i;
	int buf[] = { 5, 1, 2, 5, 1, 6, 2, 33, 11, 8, 111, 91, 2, 0, 66 };	//待测试数组 
	int buf_len = (sizeof(buf) / sizeof(int));			//数组长度 

	Selection_Sort(buf);
	printf("GYC:%d     ", buf_len);
	/*输出数组*/
	for (i = 0; i<buf_len; i++) {
		printf("%d ", buf[i]);
	}

	getchar();

	return 0;
}


