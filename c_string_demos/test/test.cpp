// test.cpp : 定义控制台应用程序的入口点。

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<error.h>
#include<string>

//str用来存储输入的数组，而且n是最大读入字符
//入股输入行包含多余n个的字符，read_line函数将忽略多余的字符
//返回实际存储在str中的字符数量（在0到n之间的任意数）
//read_line函数主要有一个循环构成，只要str留有空间，
//那么此循环就逐个读入字符并且把它们存储起来。在读入换行的时候循环终止




int read_line(char str[],int n){
	int i=0;
	char ch;
	while( (ch=getchar()) != '\n'&&ch!=EOF){
		if(i<n)
			str[i++] = ch;
	}
	str[i] = '\0';
	return i;
}

int count_spaces(const char s[]){
	int count=0,i;
	for(i=0;s[i]!='\0';i++){
		//if(s[i]==' ')
		if(isspace(s[i]))
			count++;
	}
	return count;
}

int count_spaces1(const char *s){
	int count = 0;
	for(;*s!='\0';s++){
		if(*s==' ')
			count++;
	}
	return count;
}

char *my_strcat(char *dest,const char *src){
	char *tmp = dest;
	//while(*tmp++) ;    //注意这里会出错

	while(*tmp)
		tmp++;

	while( *tmp++=*src++) ;
	//*tmp = '\0';
	return dest;
}

char *strat(char *dest,const char *src)
{
	char *tmp = dest;
	while(*tmp)
			tmp++;
	while(*tmp++ = *src++);
	return dest;
}
int strcmp(const char *src,const char *dst){
	/*  方法一
	int ret = 0;
	while(!(ret=*(unsigned char*)src-*(unsigned char*)dst)&& *dst)
		++src,++dst;
	if(ret<0)
		ret = -1;
	else if(ret>0)
		ret = 1;
	return ret;
	*/
	//方法二
	int i;
	for(i=0;dst[i]==src[i];i++){
		if(src[i]=='\0')
			return 0;
	}
	return dst[i]-src[i];
}

int my_strlen(const char *s){
	int count = 0;
	while(*s++)
		count++;
	return count;
}

#define NUM_PLANETS 9
int main(int argc,char *argv[])         //argc命令行参数的数量 。argv（参数向量）指向命令行参数的指针数组
{
	char *planets[]={"Mercury","Venus","Earth",
		"Mars","Jupi ter","Saturn",
	     "Uranus","Neptune","Pluto"};
	int i,j;
	for(i=0;i<argc;i++){
		for(j=0;j<NUM_PLANETS;j++){
			if(strcmp(argv[i],planets[j])==0){
				printf("%s is planet %d\n",argv[i],j+1);
				break;
			}
			if(j==NUM_PLANETS)
				printf("%s is not a planet\n",argv[i]);
		}
		return 0;

	}
	system("pause");
	return 0;
}

