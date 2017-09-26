#include <stdio.h>


int main(){
	printf("Enter a year: ");
	int curYear = 0;
	scanf("%d", &curYear);
	while(curYear!=0){
		if(curYear%2==0 || curYear >= 1896){
			if(curYear >= 1994){
				if(curYear%4 == 0){
					printf("Summer Olympics");
				}else if(curYear%4 == 2){
					printf("Winter Olympics");
				}else{
					printf("No Olympics");
				}
			}else{
				if(curYear >= 1924){
					if(curYear%4 == 0){
						printf("Summer and Winter Olympics");
					}else{
						printf("No Olympics");	
					}
				}else{
					if(curYear%4 == 0){
						printf("Summer Olympics");
					}else{
						printf("No Olympics");
					}
				}
			}	
		}
		else{
			printf("No OIympics");
		}
		printf("\nEnter a year: ");
		scanf("%d", &curYear);	
	}
	printf("Done\n");
}
