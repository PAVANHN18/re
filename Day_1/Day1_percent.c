/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main(){
    int R_no;
    char name[30];
    int Total;
    double percentage;
    struct marks {
        int P_marks;
        int C_marks;
        int M_marks;
        
    };
    struct marks M;
 printf("Enter fullname of  Student: ");
 scanf("%[^\n]",name);
 //fgets(name,sizeof(name),stdin);
 printf("Enter Roll Number Student\n");
 scanf("%d", &R_no);
 printf("Enter marks of Physics Chemsitry Maths of a Student\n");
 scanf("%d %d %d" , &M.P_marks, &M.C_marks, &M.M_marks);
 Total = M.P_marks + M.C_marks + M.M_marks;
 percentage = ((M.P_marks + M.C_marks + M.M_marks)/300)*100;
 printf("Student name : %s , and Roll Number is : %d\n", name, R_no);
 printf("The total  marks is : %d and  percentage : %lf",Total,percentage);
 
 return 0; 
}