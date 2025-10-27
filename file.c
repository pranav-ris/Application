//Adoption Application Form
#include<stdio.h>
#include <stdlib.h>
void main()
{
    printf("\n_________________________________________________________________\n\n");
    int choice, score=0, cat;
    char name[100];
    printf("        Welcome to Adoption Application form ! \n ");
    printf("      Please Enter '1' , '2', '3', according to questions asked \n");
    printf("**Please note all details will be verified by our team ** \n");
    printf("\n____________________________________________________________________\n");
    printf("\nPlease Enter Your name : \t");
    scanf("%[^\n]%",name);
    printf("\n Which category do you perfectly fit in ? \n");
    printf(" 1.Married couple \t 2.Single Male \t 3.Single Female\n");
     scanf("%d",&cat);
    printf("\n__________________________________________________________________\n");
    printf("Please answer the questions given below :");
    switch (cat)
    {
    case 1:
         printf("\n You can adopt any gender\n");
         printf("Question 1 Please describe your house  \n");
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
          printf(" 1. less than 8Lac \t 2.8 to 15 Lacs \t 3.more Than 15 lacs\n");
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
          printf(" 1. Both Parents are physically fit \t 2. one parent is physically abled  \n");
           scanf("%d",&choice);
            if(choice==1)
         {
              score+=10;
         }
         if(choice==2)
         {
             printf("Unfit for adoption");
              exit(EXIT_SUCCESS);
         }
         printf("\n_________________________________________________________________\n\n");
         printf("Name : %s",name);
         printf("Category ; Married couple \n");
         if(score>35)
         printf("You are at First priority ");
         if(score>30&&score<=35)
         printf(" You are at second priority");
         if(score<=30&&score>=25)
         printf("You are in the waiting list for verification");
         if(score<25)
          printf("Unfit for adoption");
       
        break;
    case 2:
        printf("\n You can adopt only a boy\n");
        printf("Question 1 Describe your house  \n");
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
          printf(" 1. less than 8Lac \t 2.8 to 15 Lacs \t 3.more Than 15 lacs\n");
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
             printf("Unfit for adoption");
              exit(EXIT_SUCCESS);
         }
         printf("\n__________________________________________________________________\n\n");
          printf("Name : %s \n",name);
         printf("Category ; Single Male\n");
          if(score>35)
         printf("You are at First priority ");
         if(score>30&&score<=35)
         printf(" You are at second priority");
         if(score<=30&&score>=25)
         printf("You are in the waiting list for verification");
         if(score<25)
          printf("Unfit for adoption");
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
          printf(" 1. less than 8Lac \t 2.8 to 15 Lacs \t 3.more Than 15 lacs\n");
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
            printf("Unfit for adoption");
              exit(EXIT_SUCCESS);
         }
         printf("\n______________________________________________________________________\n\n");
          printf("Name : %s \n",name);
         printf("Category : Single Female\n ");
          if(score>35)
         printf("You are at First priority ");
         if(score>30&&score<=35)
         printf(" You are at second priority");
         if(score<=30&&score>=25)
         printf("You are in the waiting list for verification");
         if(score<25)
          printf("Unfit for adoption");
          break;
    default:
    printf("\n\n____________________________________________________________________\n");
        printf(" Wrong Choice , Please enter valid answer");
        break;
   
}
printf("\n\n____________________________________________________________________\n");
}

