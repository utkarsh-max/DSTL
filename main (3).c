/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/




#include <stdio.h>

int main()
{
    int n1,n2,a[20],i,j,k,b[20],c[40],flag=0;
    printf("Enter Number of Elements");
    scanf("%d",&n1);
    printf("Enter Your Elements");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("Output is \n");
    for(i=0;i<n1;i++){
        printf("%d \n",a[i]);
    }
    
    printf("Enter Number Of Elements of Second Array");
    scanf("%d",&n2);
    printf("Enter the Elements \n");
    for(j=0;j<n2;j++){
        scanf("%d",&b[j]);
    }
    
    
    
    printf("Loop");
printf("Your output is ");
for(j=0;j<n2;j++){
    printf("%d\n",b[j]);
}




    for(i=0;i<n1;i++){
        
        c[k]=a[i];
        k++;
        
    }
    
    
    printf("First Loop");
    
    for(i=0;i<n1;i++){
        flag = 0;
    
    for(j=0;j<n2;j++){
        if(b[i]==c[j]){
            flag=1;
            break;
                
        }
    }
    }
    
    
    
    printf("Second");
    if(flag==0){
        c[k]=b[i];
        k++;
    }
    
    printf("\n Union of Two Arrays is : \n");
    for(i=0;i<k;i++){
        printf("%d",c[i]);
    }




    return 0;
}

