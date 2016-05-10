#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>

//左值右针   const在*左边 所指的内存值不变  在*右边指针本身可以变

void getmem(const char *p){
    char *tmp = "abc";
	p = tmp;                  //p指针可以修改
	//*p = "abcd";             //p所指的值不能修改
	printf("p指向了tmp:%s\n",p);
}
void getmem1(char *const p){
	//const在*右边，p指向的值可以变，但是p指针本身不能变
	char *tmp = "abc";
	//p = tmp;
	p[0] = 'b';
	printf("p的第一个字符变为b:%s\n",p);
}

void getmem2(const char *const p){
	//只读
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