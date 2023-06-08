
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int main(){
    for (int i = 0; i < 3; i++)
    {
        printf("Hello World from for loop\n");
    }
    
    int j = 0;
    do{
        printf("Hello from Do While loop\n");
        j++;
    }
    while(j!= 3);

    // int age;
    int randNum;
    srand(time(NULL));
    randNum = rand()%20;
    printf("%d\n", randNum);
    // printf("Enter your age : ");
    // scanf("%d", &age);
    // if(age >= 18){
    //     printf("You can enter casino and play games");
    //     getch();
    // }else{
    //     printf("Sorry you cannot access to enter");
    //     getch();
    // }
}
