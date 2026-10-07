#include <stdio.h>
#include <stdlib.h>

int main()
{
     char studentName[50] = "";
     int studentMarks = 0;
     char grade = '\0';

      printf("Please enter the students name:");
      scanf(" %s", studentName);
      printf("Please enter the students marks:");
      scanf("%d", &studentMarks);

      if(studentMarks < 100 && studentMarks >= 70){
        printf("You have grade A");
      }else if(studentMarks <70 && studentMarks >= 60){
        printf("You have grade B");
      }else if(studentMarks <60 && studentMarks >= 50){
        printf("You have grade C");
        }else if(studentMarks <50 && studentMarks >= 40){
        printf("You have grade D");
        }else if(studentMarks <40 && studentMarks >= 0){
        printf("You have grade F");
        } else {
         printf("Please input a valid number\n");
        }


    return 0;
}
