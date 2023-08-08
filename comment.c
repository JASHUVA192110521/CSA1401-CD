#include<stdio.h>
#include<string.h>
#define max 30
int main(){
	int i=0,n;
	char a[max];
	printf("enter the string = ");
	scanf("%s",a);
	n=strlen(a);
	if(a[i]=='/' && a[i+1]=='/'){
		printf("It is a comment  ");
	}
	else if(a[i]=='/' && a[n-1]=='/' && a[i+1]=='*' && a[n-2]=='*'){
		printf("\n it is a commet");
	}
	else{
		printf("\n it is not a comment");
	}
	return 0;
}
