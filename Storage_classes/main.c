#include <stdio.h>
#include <stdlib.h>
#include "extern.c"

unsigned int Number1 = 55; /* Global Variable Initialized */
unsigned int Number2; /* Global Variable Not Initialized  equal 0*/
unsigned int Number3 = 0; /* Global Variable Initialized To 0 */

//register unsigned int Number= 0; // not allowed

const unsigned int Number4 = 55; /* Constant Global Variable Initialized To 55 */

extern unsigned int Number12; /* declartion varible */
extern const unsigned int Number14 ; /* declartion varible  read only value*/

static const unsigned int Number10 = 99; /*  in this file only  */

const unsigned int Get_Summing(unsigned int Num1, unsigned int Num2);
//static unsigned int Get_Summing(unsigned int Num1, unsigned int Num2);

int main()
{

    unsigned int Number1 = 55; /* Local Variable Initialized */
    unsigned int Number2; /* Local Variable Not Initialized  garbage value*/
    unsigned int Number3 = 0; /* Local Variable Initialized To 0 */

    const unsigned int Number4 = 55; /* Constant Local Variable Initialized To 55 */

    register unsigned int Number9; /*  storage in register in CPU if possible */
    // register const unsigned int Number11; // not allowed

    static unsigned int Number6; /* storage in .data in SRAM */
    static unsigned int Number5 = 55; /* Static Local Variable Initialized */
    static const unsigned int Number8 = 55; /* Static Constant Local Variable Initialized To 55 */
     Number1 =Get_Summing(1,2);
     printf("%i",Number1);

    return 0;
}

 const unsigned int Get_Summing(unsigned int Num1, unsigned int Num2)
{
    unsigned int Number1 = 55; /* Local Variable Initialized */
    unsigned int Number2; /* Local Variable Not Initialized  garbage value*/
    unsigned int Number3 = 0; /* Local Variable Initialized To 0 */

    return (Num1 + Num2);
}


