#include<stdio.h>
#include<limits.h>
int main(){

    int i,n;

    printf("Enter the size of array : ");
    scanf("%d",&n);
    //Declaring array
    int arr[n];

    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
	
    //Declaring maximum element
    int maximum = INT_MIN;

    //Comparing with each element and find maximum element
    for(i=0;i<n;i++) {
        if(arr[i] > maximum) {
            maximum = arr[i];
        }
    }
    printf("The maximum value is : %d", maximum);

    int second_max = INT_MIN;

    //Finding Second largest element.
    //Comparing with each element and also checking it is not equal to max
	
    for(i=0;i<n;i++) {
        if(arr[i] > second_max && arr[i]!=maximum) {
            second_max = arr[i];
        }
    }
    printf("\nThe second maximum value is : %d", second_max);
}
