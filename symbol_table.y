#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>



char variable_name[1001][1001];
int data[1001];
int id = 1;
int Declared(char *now){
	for(int i=1;i<id;i++){
		if(strcmp(variable_name[i],now)==0){
			return i; 
		}
	}
	return 0;
}
int addNewVal(char *now){
	if(Declared(now)!=0)return 0;
	strcpy(variable_name[id],now);
	data[id]=0;
	id++;
}
int getVal(char *now){
	return data[Declared(now)];
}
int setVal(char *now,int v){
	int id = Declared(now);
	data[id] = v;
}
