#include <stdio.h>

// Array of stuctures



typedef struct {
        int rollno;

        struct marks {
        int m1,m2,m3; 
        };

        int total;
        char grade;
}student;



void main(){
     student s1[10];
     struct marks m1,m2,m3;

    for (int i=0;i<10;i++){
        printf("Enter Roll number: \n");
        scanf("%d",&s1[i].rollno);
            
        printf("Enter marks of 3 subjects: \n");
            for (int j=0;j<3;j++){
                scanf("%d",&s1[i].m1[j]);
            }
        }
}






