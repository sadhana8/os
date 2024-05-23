//best_fit.c
#include<stdio.h>
 
int main()
{
    int fragment[20], b[20], p[20], i, j, nb, np, temp, lowest = 9999;
    static int barray[20], parray[20];

    printf("\n\t\t\tMemory Management Scheme - Best Fit");

    // Input the number of blocks
    printf("\nEnter the number of blocks:");
    scanf("%d", &nb);

    // Input the number of processes
    printf("Enter the number of processes:");
    scanf("%d", &np);

    // Input the size of the blocks
    printf("\nEnter the size of the blocks:-\n");
    for (i = 1; i <= nb; i++)
    {
        printf("Block no.%d:", i);
        scanf("%d", &b[i]);
    }

    // Input the size of the processes
    printf("\nEnter the size of the processes:-\n");
    for (i = 1; i <= np; i++)
    {
        printf("Process no.%d:", i);
        scanf("%d", &p[i]);
    }

    // Initialize barray to keep track of allocated blocks
    for (i = 1; i <= nb; i++)
        barray[i] = 0;

    // Perform best fit allocation
    for (i = 1; i <= np; i++)
    {
        lowest = 9999;
        for (j = 1; j <= nb; j++)
        {
            if (barray[j] == 0)
            {
                temp = b[j] - p[i];
                if (temp >= 0 && lowest > temp)
                {
                    parray[i] = j;
                    lowest = temp;
                }
            }
        }
        fragment[i] = lowest;
        barray[parray[i]] = 1;
    }

    // Display allocation details
    printf("\nProcess_no\tProcess_size\tBlock_no\tBlock_size\tFragment");
    for (i = 1; i <= np && parray[i] != 0; i++)
        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d", i, p[i], parray[i], b[parray[i]], fragment[i]);
        return 0;
}
