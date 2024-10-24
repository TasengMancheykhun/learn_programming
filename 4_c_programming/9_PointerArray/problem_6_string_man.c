#include <stdio.h>

int main(){ 
    char a[30],*pa, b[30],*pb, c[30], *pc;
    int i,choice=0,len1=0,len2=0,status=1;

    pa = a;
    pb = b;
    pc = c;

    printf("Enter string 1: \n");
    scanf("%s",pa);

    printf("Enter string 2: \n");
    scanf("%s",pb);

    printf("Enter what to do with the string: \n"); 
    printf("[1] Calculate length of strings \n"); 
    printf("[2] Copy string 2 to string 1 \n"); 
    printf("[3] Compare string 1 and string 2 \n");
    printf("[4] Concatenate string 1 and string 2 \n");

    printf("Enter choice: \n");
    scanf("%d",&choice);

    switch(choice){
        case 1:   // length of strings using pointers
            for (len1=0,pa=a;*pa!='\0';pa++,len1++);
            printf("length of string 1 is %d\n",len1);

            for (len2=0,pb=b;*pb!='\0';pb++,len2++);
            printf("length of string 2 is %d\n",len2);

            break;


        case 2:   // copy using pointers  
            //pa=a;
            //pb=b;
            for(i=0;i<5;i++){
                pa[i]=pb[i];
            }
    
            printf("After copying string 2 to string 1, string 1 becomes, \n");
            for (i=0;i<5;i++){
            printf("%c",a[i]);
            }
            printf("\n");
            break;

        case 3:   // compare using pointers
             for (len1=0,pa=a;*pa!='\0';pa++,len1++);
             for (len2=0,pb=b;*pb!='\0';pb++,len2++);


            if(len1==len2){
                for(pa=a,pb=b;*pa!='\0';pa++,pb++){
                    if(*pa != *pb){
                        status=0;
                        break;
                    }
                }
            }

            if(status==0){
                 printf("Strings are not equal\n");
            }
            else{
                printf("Strings are equal\n");
            }
            break;

        case 4:  //concatenate string using pointers
            for (pa=a,pc=c;*pa!='\0';pa++,pc++){
                 *pc=*pa;
            }
  
            for (pb=b;*pb!='\0';pb++,pc++){
                 *pc=*pb;
            }

            printf("The merged string is %s \n",c);
    }

    return 0;
}