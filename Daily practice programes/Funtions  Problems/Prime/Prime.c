#include<stdio.h>


int isprime(int);

int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    
    if(isprime(a))
        printf("Number is Prime\n");
    else
        printf("Number is not Prime\n");
    
    return 0;
}

int isprime(int x){
    if(x <= 1)  
        return 0;
        
    for(int i = 2; i <= x/2; i++){
        if(x % i == 0)
            return 0; 
    }
    return 1; 
}
