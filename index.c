#include <stdio.h>
#include <string.h>

int main(){
	int k = 0;
	int input;
	int shiftingValue;
	char msg[300];
	char remsg[300];
	int keeper;
	char keeperchar;
	int shell;
	char target[] = " the ";
	scanf("%d ", &input);
	while(k < input){
	scanf("%d ", &shiftingValue);
	fgets(msg, sizeof(msg), stdin);
	size_t len = strlen(msg);
    	if (len > 0 && msg[len - 1] == '\n') {
        	msg[len - 1] = '\0';
    	}
	if(strstr(msg, target) != NULL){
		for(int i = 0; i < strlen(msg); i++){
    		keeper = msg[i];
    		if(keeper == 32){
    			keeperchar = keeper;
    			remsg[i] = keeperchar;
    			printf("%c", keeperchar);
    			continue;
    		}
    		if(keeper - 97 >= shiftingValue ){
    			keeper = keeper - shiftingValue;
    			keeperchar = keeper;
    			remsg[i] = keeperchar;
    			printf("%c", keeperchar);
    		}
    		else{
    			shell = keeper - 97;
    			shell = shiftingValue - shell;
    			keeper = 123 - shell;//kaymadan dolayı 123 olarak aldık
    			keeperchar = keeper;
    			remsg[i] = keeperchar;
    			printf("%c", keeperchar);	
    		}
    	}
	printf("\n");
	}else{
		for(int i = 0; i < strlen(msg); i++){
    		keeper = msg[i];
    		if(keeper == 32){
    			keeperchar = 32;
    			remsg[i] = keeperchar;
    			printf("%c", keeperchar);
    			continue;
    		}
    		if(122 - keeper >= shiftingValue ){
    			keeper = keeper + shiftingValue;
    			keeperchar = keeper;
    			remsg[i] = keeperchar;
    			printf("%c", keeperchar);
    		}
    		else{
    			
    			keeper = shiftingValue + keeper - 26;
    			keeperchar = keeper;
    			remsg[i] = keeperchar;	
    			printf("%c", keeperchar);
    		}
    	}
	printf("\n");
	}
	
		k++;
	}																							
	
	
	return 0;
}
