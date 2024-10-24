# include<stdio.h>

int prime(int num)
    {
        int flag=0;
        for (int i=1;i<=num;i++){
            if(num%i==0)
                flag++;
        }

        if (flag>2){
            return 0;
        }
        else
            return 1; 
    }

void main (){
    int n=50,t=0;
    
    printf("Prime numbers from 1 to 50 are: \n");
    for (int i=1;i<=n;i++){
        t=prime(i);
        if (t == 1){
            printf("%d ",i);
        }

    }
}