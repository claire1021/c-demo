#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<string>

//��ӡ ����
//��װ�ɺ���

//����ı����ǣ�myArray+1�� ��һ��ģ�͵�myArray+1��һ��
//ָ��Ĳ�����һ��
//ָ����ָ����ڴ�ռ�������಻һ��
//void printMyArray_err(char **myArray,int num){
/*
void printMyArray(char myArray[10][30],int num){
	
		for(int i=0;i<4;i++){
		printf("%s\n",*(myArray+i));
	}
}

//void sortMyArray_err(char **myArray,int num){
void sortMyArray(char myArray[10][30],int num){
	char tmpBuf[30];
	for(int i=0;i<num;i++){
		for(int j=i+1;j<num;j++){
			if(strcmp(myArray[i],myArray[j])>0){         //���������ڴ��
				strcpy(tmpBuf,myArray[i]);
				strcpy(myArray[i],myArray[j]);
				strcpy(myArray[j],tmpBuf);
			}
		}
	}
}

int main(){

	char myBuf[30];
	char myArray[10][30] = {"aaaa","ccccc","bbbbb","11111111"};

	//myArray:������ֻ����ģ���10�У�ÿ��30��..... myArray+1 ��ά�������ı���
	{
		int len1 = sizeof(myArray);
		int len2 = sizeof(myArray[0]);
		int num = len1/len2;
	}

	printf("����֮ǰ:\n");
	//��ӡ
	printMyArray(myArray,num);

	sortMyArray(myArray,num);
	printf("����֮��:\n");
	printMyArray(myArray,num);
	system("pause");
	return 0;

}*/