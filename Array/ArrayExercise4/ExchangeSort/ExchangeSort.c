#include<stdio.h>
int main(){
	int n,temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if (arr[i]>arr[j]){
		temp=arr[i];
		arr[i]=arr[j];
		arr[i]=temp;
	}
}
}

for(int i=0;i<n;i++)
	printf("%d\n",arr[i]);

return 0 ;
}