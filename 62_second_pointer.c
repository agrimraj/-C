/*the second-largest distinct element using a pointer-based function.*/
#include <stdio.h>

int largest(int *p, int n)
{
    int max = *p;

    for(int i = 1; i < n; i++)
    {
        if(*(p + i) > max)
        {
            max = *(p + i);
        }
    }

    return max;
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid array size");
        return 1;
    }

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }

    int large = largest(arr, n);
    int count=0,j=0;
    int new[n-1];
    for(int i=0;i<n;i++){
        if (arr[i] == large){
            i++;
            continue;
        }
        else {
            new[j]=arr[i];
            j++;
            count++;
        }
    }
    if (count==0) printf("repeated elements");
    else{
         int second=largest(new,count);
    printf("The second largest element is %d",second);
    }
    return 0;
}
