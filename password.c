
#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int generate(int level, char* pass){
	time_t t;
srand((unsigned)time(&t));
	switch(level){
		case 1: {
					int i=0;
					for(i;i<20;i++){
						char e=(char)((rand())%26+65);
						char f=(char)((rand())%26+97);
						int w=rand()%2;
						if(w==0){
							pass[i]=e;
						}
						else
							pass[i]=f;					}
					break;
				}
		case 3: {
					int i=0;
					for(i;i<20;i++){
						int e=rand()%93+33;
						pass[i]=(char)(e);
					}
					break;
				}

		case 2: {
					int i=0;
					for(i;i<20;i++){
						int e=rand()%26+65;
						int f=rand()%26+97;
						int q=rand()%10+48;
						int w=rand();
						if(w%3==0){
							pass[i]=(char)e;

						}
						else if(w%3==2)
							pass[i]=(char)f;
						else
							pass[i]=q;
					}
					break;
				}		
	}

	return 0;
}


int main(){
	int flag=1;
	while(flag==1){
		printf("enter the difficulty of password (1 or 2 or 3)");
		int diff;
		scanf("%d",&diff);
		if(!(diff==1||diff==2||diff==3)){
			printf("Wrong input.\nPlease try again");
			continue;
		}
		char pass[30];
		generate(diff,pass);
		printf("\n\n\nthe generated random password is:\n\n\n%s\n\n\n",pass);
		int flag2=1;
		while(flag2==1){
			printf("try again? (y/n)\n");
			scanf("%*%");
			char tryAgain;
			scanf("%c",&tryAgain);
			if(tryAgain=='y'||tryAgain=='Y'){
				flag2=0;
				continue;
			}
			else if(tryAgain=='n'||tryAgain=='N'){
					flag=0;
					flag2=0;
					continue;}
				else{
					printf("Wrong input.\nPlease try again\n");
					continue;
				}
		}
	}
}


