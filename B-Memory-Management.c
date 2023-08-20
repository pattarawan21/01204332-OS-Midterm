#include <stdio.h>
#include <stdlib.h>
//3 Global variable
int i=0;
int j=1;
int k=2;

void recursive_fuction_call_stack(int n){
    if (n==0){
        return;
    }
    int local_var=0;
    printf("Recursive Function call stack address :%p\n ",&local_var);
    recursive_fuction_call_stack(n-1);
}
int main(){
    printf("Show stack growth\n");
    recursive_fuction_call_stack(3);
    int *hp1,*hp2,*hp3;
    hp1 = (int*)malloc(sizeof(int));
    hp2 = (int*)malloc(sizeof(int));
    hp3 = (int*)malloc(sizeof(int));
    printf("Show heap growth\n");
    printf("hp1 address Function call stack address in func:%p\n ",hp1);
    printf("hp2 address Function call stack address in func:%p\n ",hp2);
    printf("hp3 address Function call stack address in func:%p\n ",hp3);
    printf("Show address global variable\n");
    printf("Global_Variable address i:%p\n ",&i);
    printf("Global_Variable address j:%p\n ",&j);
    printf("Global_Variable address k:%p\n ",&k);
    free(hp1);
    free(hp2);
    free(hp3);
    return 0;
}