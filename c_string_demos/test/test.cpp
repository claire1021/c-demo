// test.cpp : �������̨Ӧ�ó������ڵ㡣

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<error.h>
#include<string>

//str�����洢��������飬����n���������ַ�
//��������а�������n�����ַ���read_line���������Զ�����ַ�
//����ʵ�ʴ洢��str�е��ַ���������0��n֮�����������
//read_line������Ҫ��һ��ѭ�����ɣ�ֻҪstr���пռ䣬
//��ô��ѭ������������ַ����Ұ����Ǵ洢�������ڶ��뻻�е�ʱ��ѭ����ֹ




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
	//while(*tmp++) ;    //ע����������

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
	/*  ����һ
	int ret = 0;
	while(!(ret=*(unsigned char*)src-*(unsigned char*)dst)&& *dst)
		++src,++dst;
	if(ret<0)
		ret = -1;
	else if(ret>0)
		ret = 1;
	return ret;
	*/
	//������
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
int main(int argc,char *argv[])         //argc�����в��������� ��argv������������ָ�������в�����ָ������
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

