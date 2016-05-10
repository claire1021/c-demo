#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<string>

//打印 排序
//分装成函数

//问题的本质是：myArray+1和 的一种模型的myArray+1不一样
//指针的步长不一样
//指针所指向的内存空间的数据类不一样
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
			if(strcmp(myArray[i],myArray[j])>0){         //交换的是内存块
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

	//myArray:编译器只会关心：有10行，每行30列..... myArray+1 多维数组名的本质
	{
		int len1 = sizeof(myArray);
		int len2 = sizeof(myArray[0]);
		int num = len1/len2;
	}

	printf("排序之前:\n");
	//打印
	printMyArray(myArray,num);

	sortMyArray(myArray,num);
	printf("排序之后:\n");
	printMyArray(myArray,num);
	system("pause");
	return 0;

}*/