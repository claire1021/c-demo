#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<string>

//����ָ��������ĵ�һ��ģ��

//void printMyArray(char *myArray[],int num){
/*
void printMyArray(char **myArray,int num){
		int i;
		for(i=0;i<num;i++){
		printf("%s\n",*(myArray+i));
	}
}
void sortMyArray(char **myArray,int num){
	    int i,j;
		char *tmp;
		for(i=0;i<num;i++){
			for(j=i+1;j<num;j++){
				if(strcmp(myArray[i],myArray[j])>0){
				    	tmp = myArray[i];               //ע��  ������������Ԫ�� ��������ָ���ֵ//�ı�ָ���ָ��
				    	myArray[i] = myArray[j];   
				    	myArray[j] = tmp;
				 }
		   }
	  }
}

void main(){
	int i,j;
	char *tmp = NULL;
	int num = 0;
	//���� ������ÿ��Ԫ����ָ��  ָ������
	char *myArray[] = {"aaaa","cccc","bbbb","11111"};

	//��ӡ
	num = sizeof(myArray)/sizeof(myArray[0]);
	printf("����֮ǰ\n");
	printMyArray(myArray,num);
	sortMyArray(myArray,num);
	printf("����֮��\n");
	printMyArray(myArray,num);
	system("pause");
	return;
}*/