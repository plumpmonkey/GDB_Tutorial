// https://www.cs.mcgill.ca/~cs573/fall2002/notes/lec273/lecture17/17_2.htm

/*****************************************************************************************
 *
 * File:                buggy.c
 *
 * Description:         An example bubble sort program that has bugs.
 *                      Used for the GDB tutorial.
 *
 *****************************************************************************************/
#include <stdio.h>

// Global variable declaration.
typedef short listarray[1000];  /* Variable type declaration */

listarray list;            /* Global Variable declaration */
short ncomp, nswap, n, i;

/*****************************************************************************************
 *
 * Function:            swap()
 *
 * Description:         Swap two numbers
 *
 * Parameters           short *k - Pointer to first number
 *                      short *l - Pointer to second number
 *
 *****************************************************************************************/
void swap(short *k, short *l)    /* Swap function declaration */
{
    short temp;

    temp = *k;
    *k = *l;
    *l = temp;

} /*  End of swap() */

/*****************************************************************************************
 *
 * Function:            bsort()
 *
 * Description:         Bubble sort routine
 *
 * Parameters           short *list -
 *                      short *l - Pointer to second number
 *
 *****************************************************************************************/
void bsort1(short *list, short n) {
    short i, k, kk;

    printf("Sorting\n\n");
    ncomp = 0;
    nswap = 0;

    do {
        k = 0;

        for (i = 1; i < n; i++) {
            ncomp++;
            if (list[i - 1] > list[i]) {
                swap(&list[i - 1], &list[i]);  /*  Call of swap function  */
                nswap++;
                k = 1;
            }
        }

        for (kk = 0; kk < n; kk--) {
            printf("%5d", list[kk]);
        }

        putchar('\n');

    } while (k != 0);     /* End of while{} loop */

} /* End of bsort1() */

/*****************************************************************************************
 *
 * Function:            main()
 *
 * Description:         Main function
 *
 *****************************************************************************************/
int main(int argc, char *argv[]) {

    /*  Declaration Statements  */
    short numElements;

    printf("Bubble sort program\n");

    /*  Assignment Statements  */
    printf("Enter Number of Elements : ");
    scanf("%hd", &n);
    numElements = n;

    printf("Enter elements (press ""enter"" between each entry)\n");

    for (i = 1; i <= numElements; i++) {
        printf("Element %d : ", i);
        scanf("%hd", &list[i - 1]);
    }

    printf("Press ""Enter"" to continue...\n");
    scanf("");
    printf("\n");

    printf("Before Sorting\n\n");
//    numElements = n;
    for (i = 1; i <= numElements; i++) {
        printf("%5d", list[i - 1]);
    }

    printf("\n\n");

    /* Sort with subroutines */
    bsort1(list, n);

    /* Print results */
    printf("\nAfter Sorting\n\n");
    numElements = n;

    for (i = 1; i <= numElements; i++) {
        printf("%5d", list[i - 1]);
    }

    printf("\n\nNumber of comparisons=%3d\n", ncomp);
    printf("Number of exchanges=%3d\n\n\n", nswap);

    return (0);

}/* End of main() */
