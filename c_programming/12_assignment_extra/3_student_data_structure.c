#include <stdio.h>
#include <string.h>

// Array of stuctures



typedef struct {
        int rollno;
        int marks[3];
        float total;
        char grade[10];
}student;


void main(){
    student s1[20];
    int avg,nos=10;  

    for (int i=0;i<nos;i++){
        printf("Enter Roll number of student %d: \n",i+1);
        scanf("%d",&s1[i].rollno);
            
        s1[i].total = 0;    
        printf("Enter marks of 3 subjects: \n");
        for (int j=0;j<3;j++){
            scanf("%d",&s1[i].marks[j]);
            s1[i].total+=s1[i].marks[j];
        }
        
        avg = (s1[i].total)/3.0;

        if (avg<50){
            strcpy(s1[i].grade,"Fail");
        } else if (avg>=50 & avg <=60){
            strcpy(s1[i].grade, "B");
        } else if (avg>=50 & avg <70){
            strcpy(s1[i].grade, "A");
        } else if (avg>=70) {
            strcpy(s1[i].grade, "A+");
        }
    }

    //printf("\n +++++++++++++ Student Data ++++++++++++\n");
    for (int i=0;i<nos;i++){
        printf("Student %d \t Roll number %d \t Grade %s\n",i+1, s1[i].rollno, s1[i].grade);
    }
    //printf("+++++++++++++++++++++++++++++++++++++++++++\n");


    // Count the number of students in each grade
    int fcount=0, bcount=0, acount=0, apcount=0;
    for (int i=0;i<nos;i++){
        if (strcmp(s1[i].grade,"Fail")==0){
            fcount+=1;
        } else if (strcmp(s1[i].grade,"B")==0){
            bcount+=1;
        } else if (strcmp(s1[i].grade,"A")==0){
            acount+=1;
        } else if (strcmp(s1[i].grade,"A+")==0){
            apcount+=1;
        }
    }
    printf("Number of students with Grade 'A+' are %d: \n",apcount);
    printf("Number of students with Grade 'A' are %d: \n",acount);
    printf("Number of students with Grade 'B' are %d: \n",bcount);
    printf("Number of students with Grade 'Fail' are %d: \n",fcount);
}







