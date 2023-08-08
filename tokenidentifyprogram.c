#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 30
int main(){
	char a[max],id[max],ct[max],op[max];
	int i,j,ic=0,cc=0,oc=0,n;
	printf("enter the string=");
	scanf("%s",&a);
	n=strlen(a);
	for(i=0;i<n;i++){
		if(isspace(a[i])){
			continue;
		}
		else if(isalpha(a[i])){
			id[ic]=a[i];
			ic+=1;
		}
		else if(isdigit(a[i])){
			ct[cc]=(a[i]-'0');
			cc+=1;
		}
		else{
			if(a[i]=='+' || a[i]=='*' || a[i]=='-' || a[i]=='/'){
				op[oc]=a[i];
				oc+=1;
			}
		}
	}
	printf("\n identifiers :");
	for (j=0;j<ic;j++){
		printf("%c",id[j]);
	}
	printf("\n constants :");
	for (j=0;j<cc;j++){
		printf("%d",ct[j]);
	}
	printf("\n operators :");
	for (j=0 ;j<oc ;j++){
		printf("%c",op[j]);
	}
	return 0;
}
