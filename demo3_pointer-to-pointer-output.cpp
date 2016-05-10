#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<string>


int main(){
	char **p1 = NULL;
	int num = 5;
    p1 = (char**)malloc(sizeof(char *)*num);

	for(int i=0;i<5;i++){
		p1[i] = (char*)malloc(sizeof(char)*100);   //char buf[100]
		sprintf(p1[i],"%d%d%d",i+1,i+1,i+1);
	}

	for(int i=0;i<num;i++){
		printf("%s\n",p1[i]);
	}

	//ÊÍ·ÅÄÚ´æ
	/*
	for(int i=0;i<num;i++){
		if(p1[i]!=NULL){
			free(p1[i]);
			p1[i] = NULL;
		}
	}
	*/
	system("pause");
	return 0;
}