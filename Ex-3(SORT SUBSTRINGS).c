//SORT SUBSTRINGS IN C
#include<stdio.h>
#include<string.h>
char* sort(char[]);

char* sort(char str[]){
	
	if(str =='\0'){
		return '\0';
	}
	
	int i,j,index=0,size;
	char temp;
	for(size=0;str[size]!='\0';size++);
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if((int)str[i]<(int)str[j]){
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		
	    }
	}
	return str;
	
}

int main(){
	int i=0;
	char str[100];
	printf("enter string");
	scanf("%[^\n]s",str);
	char final[100]={'\0'};
	
	int dig_index=0,alp_index=0;
	while(str[i]!='\0'){
	    char dig[100]={'\0'};
	    char alp[100]={'\0'};
		
		while(str[i]>='0' && str[i]<='9'){
			dig[dig_index++]=str[i];
			i++;
		}
		dig_index=0;
		strcat(final,sort(dig));
		
	
		while((str[i]>='A' && str[i]<'Z')||(str[i]>='a' && str[i]<'z')){
			alp[alp_index++]=str[i];
			i++;
		}
		strcat(final,sort(alp));
		alp_index=0;
		
	}
	printf("\n");
	printf("%s ",final);
	return 0;
	
}
