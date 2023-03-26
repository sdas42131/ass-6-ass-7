// 12.	A student is awarded Ex grade if he gets more than 90 marks. He is awarded A grade if marks are between 80 and 89. Similarly range for B, C, D and P are 70-79, 60-69, 50-59, and 35-49 respectively. The student is awarded F grade if he gets less then 35 marks. Program reads marks of a student and prints his grade

#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks < 35)
        printf("Grade F");
    else{
        if (marks >= 90)
            printf("grade Ex");
        else if (marks >= 80 && marks < 89)
            printf("grade A");
        else if (marks >= 70 && marks < 79)
            printf("grade B");
        else if (marks >= 60 && marks < 69)
            printf("grade C");
        else if (marks >= 35 && marks < 49)
            printf("grade D");
    }
}