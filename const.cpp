#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>

//��ֵ����   const��*��� ��ָ���ڴ�ֵ����  ��*�ұ�ָ�뱾����Ա�

void getmem(const char *p){
    char *tmp = "abc";
	p = tmp;                  //pָ������޸�
	//*p = "abcd";             //p��ָ��ֵ�����޸�
	printf("pָ����tmp:%s\n",p);
}
void getmem1(char *const p){
	//const��*�ұߣ�pָ���ֵ���Ա䣬����pָ�뱾���ܱ�
	char *tmp = "abc";
	//p = tmp;
	p[0] = 'b';
	printf("p�ĵ�һ���ַ���Ϊb:%s\n",p);
}

void getmem2(const char *const p){
	//ֻ��
	char *tmp = "abc";
	printf("%c\n",p[1]);
}
int main(){
	char p[10] = "abcd";
	getmem(p);
	getmem1(p);
	getmem2(p);
	system("pause");
	return 0;
}