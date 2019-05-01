
#include <stdio.h>

int maxSubArray(int array[],int n)
{

    //int max = array[0];
    //for(i=)

    int result =0, sum =0;
    int i;

    for (i=0;i<n;i++)
    {

        if(sum+array[i]>0)
        {

            sum+= array[i];
            if(sum>result)
            {
                result = sum;
            }
        }

        else
        {
            sum = 0;
        }
    }
    return result;
}

int main()
{

    int array[], size,i;
	printf("enter the size of array\n");
	scanf("%d",&size);

	for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
	printf("%d",maxSubArray(array,size));

    return 0;
}

