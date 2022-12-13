// your name surname and age from user
#include <stdio.h>

int main()
{    
    char Name[50], Surname[50];
    int age;
    
    printf("Enter Your Name.\n");
    scanf("%s",Name);
    printf("Enter Your SurName.\n");
    scanf("%s",Surname);
    printf("Enter Your age.\n");
    scanf("%d",&age);
    
    printf("your name is %s %s and your age ıs %d", Name, Surname, age);
        
        
        


    return 0;
}
