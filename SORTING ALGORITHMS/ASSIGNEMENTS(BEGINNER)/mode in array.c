#include<stdio.h>
int main(){

    int i, j, n;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of array : ");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    printf("Entered elements are : ");
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }

    int maxVal=0, count=0, maxCount=0;

    for(i=0;i<n;i++) {
        count = 0;
        for(j=0;j<n;j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxVal = arr[i];
         }
    }

    printf("\nThe mode is : %d as count is : %d",maxVal,maxCount);
	
	return 0;
}
