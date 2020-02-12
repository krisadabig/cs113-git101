#include <stdio.h>

int main()
{ 
    int x = 100;
    // printf("x = %d\n",x);
    // printf("reference of x = %lu\n",&x); // %lu reference = base 10
    // printf("reference of x = %p\n",&x); //%p pointer in base 16 

    // printf("index 1 = %d\n", number[1]);
    // printf("reference of number[1] = %p\n",&number[1]); //address number == number[0] 
    // printf("reference of number+1 = %p\n",&number+1); // pointer+1 --> int +4 in address  (plus by size of value)
    // printf("reference of number = %p\n",&number);

    // int *ptr = &x;
    // int *arrPtr; 
    // arrPtr = number;
    // *arrPtr += 3; // *ptr = check address (arrPtr = number[0]+=3 addess(12) = number[3](12 in memory)) and operate(+=3) to value in that addess is 4+3 = 7
    
    // int number[] = {1, 2, 3, 4, 5, 6};
    // for(int *ptr = number; ptr <= &number[4]; ptr++){
    //     printf("[%p] = %d\n", ptr, *ptr);
    // }
    // int *ptr2 = number;
    // for (int i = 0; i<5; i++){
    //     printf("[%p] = %d\n", ptr2+i, *(ptr2+i));
    // }

    char input[100];
    int count = 0;
    char c;

    while((c= getchar()) != '\n'){
        input[count] = c ;
        ++count;
    }
    for(char *cPtr = input ; *cPtr != '\0'; cPtr++){
        printf("%c\n", *cPtr);

    }


    // char s[100]; 
    // int i;
    // char c;
    // scanf("%d = %c = %s", &i, &c, s); // array store addess no need to use &
    // printf("%d--%c--%s", i, c, s);

}