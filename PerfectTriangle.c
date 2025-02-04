#include <stdio.h>

int main()
{
    int a = 10;

    for (int i = 1; i <= a; i++)
    {

        for (int k = 0; k < a - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

/*
Output:
         *
        * *
       * * *
      * * * *
     * * * * *
    * * * * * *
   * * * * * * *
  * * * * * * * *
 * * * * * * * * *
* * * * * * * * * *


=== Code Execution Successful ===

*/

/*
while putting double space it will print as shown as below:

   Double space : printf("  ");
                  *
                * *
              * * *
            * * * *
          * * * * *
        * * * * * *
      * * * * * * *
    * * * * * * * *
  * * * * * * * * *
* * * * * * * * * *


=== Code Execution Successful ===


*/