//Adoption Application Form 
#include<stdio.h>
#include <stdlib.h>
void main()
{
    printf("\n\n\n\n");
    printf("\n__________________________________________________________________________________________________________________\n\n\n\n");
    int choice, score=0, cat;
    char name[100], nam[50];
    printf("        Welcome to Adoption Application form ! \n ");
    printf("      Please Enter '1' , '2', '3', according to questions asked \n");
    printf("\033[0;31m**Please note all details will be verified by our team **\033[0m \n");
    printf("\n__________________________________________________________________________________________________________________\n");
    printf("\nPlease Enter Your name : \t");
    scanf("%s %s",name,nam);
    printf("\n Which category do you perfect fit in ? \n");
    printf(" 1.Married couple \t 2.Single Male \t 3.Single Female\n");
    printf("\n__________________________________________________________________________________________________________________\n");
    scanf("%d",&cat);
    printf("Please answer the questions given below :");
    switch (cat) 
    {
    case 1:
         printf("\n You can adopt any gender\n");
         printf("Question 1 Please descibe your house ? \n");
         printf(" : 1.1BHK \t 2.2BHK \t 3.More than 2BHK\n");
         scanf("%d",&choice);
         if(choice==1)
         {
             score+=0;
         }
         if(choice==2)
         {
             score+=5;
         }
         if(choice==3)
         {
             score+=10;
         }
         printf("Question 2 What age group do you fit in? \n");
          printf(" 1.27-40 \t 2.40 to 50 \t 3.more than 50 \n");
           scanf("%d",&choice);
            if(choice==1)
         {
              score+=10;
         }
         if(choice==2)
         {
              score+=5;
         }
         if(choice==3)
         {
              score+=0;
         }
         printf("Question 3 What is your Anual Income ? \n");
          printf(" 1. less than 8Lac \t 2.8 to 15 Lacs \t 3.more Than 5 lacs\n");
           scanf("%d",&choice);
            if(choice==1)
         {
              score+=0;
         }
         if(choice==2)
         {
              score+=5;
         }
         if(choice==3)
         {
              score+=10;
         }
          //  printf(" 1. \t 2. \t 3.\n");
         printf("Question 4 Medical Fitness  \n");
          printf(" 1. Both Parents are physically fit \t 2. one parent is physically ables  \n");
           scanf("%d",&choice);
            if(choice==1)
         {
              score+=10;
         }
         if(choice==2)
         {
             printf("\033[0;31mUnfit for adoption\033[0m");
              exit(EXIT_SUCCESS); 
         }
         printf("\n__________________________________________________________________________________________________________________\n\n\n\n");
         if(score>35)
         printf("You are at First priority ");
         if(score>30&&score<=35)
         printf(" You are at second priority");
         if(score<30&&score>=25)
         printf("You are in the waiting list for verification");
         if(score<25)
          printf("\033[0;31mUnfit for adoption\033[0m");
        
        break;
    case 2:
        printf("\n You can adopt only a boy\n");
        printf("Question 1 Descibe your house ? \n");
         printf(" 1.1BHK \t 2.2BHK \t 3.More than 2BHK\n");
         scanf("%d",&choice);
         if(choice==1)
         {
             score+=0;
         }
         if(choice==2)
         {
             score+=5;
         }
         if(choice==3)
         {
             score+=10;
         }
         printf("Question 2 What is your age ? \n");
          printf(" 1.27-40 \t 2.40 to 50 \t 3.more than 50 \n");
           scanf("%d",&choice);
            if(choice==1)
         {
              score+=10;
         }
         if(choice==2)
         {
              score+=5;
         }
         if(choice==3)
         {
              score+=0;
         }
         printf("Question 3 What is your Anual Income ? \n");
          printf(" 1. less than 8Lac \t 2.8 to 15 Lacs \t 3.more Than 5 lacs\n");
           scanf("%d",&choice);
            if(choice==1)
         {
              score+=0;
         }
         if(choice==2)
         {
              score+=5;
         }
         if(choice==3)
         {
              score+=10;
         }
          //  printf(" 1. \t 2. \t 3.\n");
         printf("Question 4 Medical Fitness  \n");
          printf(" 1.  physically fit \t 2.  physically challenged \n");
           scanf("%d",&choice);
            if(choice==1)
         {
              score+=10;
         }
         if(choice==2)
         {
             printf("\033[0;31mUnfit for adoption\033[0m");
              exit(EXIT_SUCCESS); 
         }
         printf("\n__________________________________________________________________________________________________________________\n\n\n\n\n");
          if(score>35)
         printf("You are at First priority ");
         if(score>30&&score<=35)
         printf(" You are at second priority");
         if(score<30&&score>=25)
         printf("You are in the waiting list for verification");
         if(score<25)
          printf("\033[0;31mUnfit for adoption\033[0m");
          break;
    case 3:
      printf("\n You can adopt any gender\n");
        printf("Question 1 Descibe your house ? \n");
         printf(" 1.1BHK \t 2.2BHK \t 3.More than 2BHK\n");
         scanf("%d",&choice);
         if(choice==1)
         {
             score+=0;
         }
         if(choice==2)
         {
             score+=5;
         }
         if(choice==3)
         {
             score+=10;
         }
         printf("Question 2 What is your age ? \n");
          printf(" 1.27-40 \t 2.40 to 50 \t 3.more than 50 \n");
           scanf("%d",&choice);
            if(choice==1)
         {
              score+=10;
         }
         if(choice==2)
         {
              score+=5;
         }
         if(choice==3)
         {
              score+=0;
         }
         printf("Question 3 What is your Anual Income ? \n");
          printf(" 1. less than 8Lac \t 2.8 to 15 Lacs \t 3.more Than 5 lacs\n");
           scanf("%d",&choice);
            if(choice==1)
         {
              score+=0;
         }
         if(choice==2)
         {
              score+=5;
         }
         if(choice==3)
         {
              score+=10;
         }
         printf("Question 4 Medical Fitness  \n");
          printf(" 1.  physically fit \t 2.  physically challenged \n");
           scanf("%d",&choice);
            if(choice==1)
         {
              score+=10;
         }
         if(choice==2)
         {
            printf("\033[0;31mUnfit for adoption\033[0m");
              exit(EXIT_SUCCESS); 
         }
         printf("\n__________________________________________________________________________________________________________________\n\n\n\n\n");
          if(score>35)
         printf("You are at First priority ");
         if(score>30&&score<=35)
         printf(" You are at second priority");
         if(score<30&&score>=25)
         printf("You are in the waiting list for verification");
         if(score<25)
          printf("\033[0;31mUnfit for adoption\033[0m");
          break;
    default:
    printf("\n\n\n\n__________________________________________________________________________________________________________________\n");
        printf("\033[0;31m Wrong Choice , Please enter valid answer\033[0m");
        break;
    
}
printf("\n\n\n\n__________________________________________________________________________________________________________________\n");
}
