#include<stdio.h>
int main(){
    int arr[50];
    int n, flag;
    printf("Enter the Size of Array");
    sacnf("%d",&n);
    printf("Enter the array Elements");
    for(int i = 0; i,n;i++)
    {
        sacnf("%d",&arr);

    }
    for(int i=0; i<n;i++){
        int num = arr[i];
        flag=0;

        if(num <= 1){
            flag=1;
        }
        else{
            for(int j=2 ; j <= num/2;j++)
            {
                if(num %j ==0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
        {
            printf("%d\n", num);

        }

    }

    return 0;

}