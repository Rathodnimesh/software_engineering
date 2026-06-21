#include<stdio.h>
#include<conio.h>
int  main(){
	char meal[10];
	
	printf("Enter a meal time (breakfast/lunch/dinner/snack):");
	scanf("%s",meal);
	
	switch(meal[0]){
		case 'b':
			if(strcmp(meal,"breakfast")==0)
			printf("suggestion poha or idil");
			else
			printf("Try other breakfast");
			break;
			
			case 'l':
				if(strcmp(meal,"lunch")==0)
				printf("suggistion dal rise or punjabi,gujarati thail");
				else
				printf("try other lunch");
				break;
				
				case 'd':
					if(strcmp(meal,"dinner")==0)
					printf("suggisiton 	westindian");
					else
					printf("try other dinner");
					break;
					
					case 's':
						if(strcmp(meal,"snack")==0)
						printf("Suggistion smosa and vadapow,sandwitch");
						else
						printf("Try other snack");
						break;
						
						default:
							printf("Try other ");
	}
	return 0;
}
