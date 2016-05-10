#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<string>

//二级指针做输入的第一种模型

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
				    	tmp = myArray[i];               //注意  交换的是数组元素 交换的是指针的值//改变指针的指向
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
	//数组 数组中每个元素是指针  指针数组
	char *myArray[] = {"aaaa","cccc","bbbb","11111"};

	//打印
	num = sizeof(myArray)/sizeof(myArray[0]);
	printf("排序之前\n");
	printMyArray(myArray,num);
	sortMyArray(myArray,num);
	printf("排序之后\n");
	printMyArray(myArray,num);
	system("pause");
	return;
}*/