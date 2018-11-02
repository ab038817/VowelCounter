#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>




int main()
{
    printf("Please enter some text below: ");
    char msg[10];

    scanf("%s",&msg);


    int AaCount = 0;
    int EeCount = 0;
    int IiCount = 0;
    int OoCount= 0;
    int UuCount= 0;

    int x = 0;

    for(x = 0; x < 10; x++)
{


        if (msg[x]== 'A' || msg[x] == 'a')
        {
            AaCount++;
        }

           if (msg[x]== 'E' || msg[x] == 'e')
          {
                 EeCount++;
          }
            if (msg[x]== 'I' || msg[x] == 'i')
        {
            IiCount++;
        }

          if (msg[x]== 'O' || msg[x] == 'o')
          {
                 OoCount++;
          }
          if (msg[x]== 'U' || msg[x] == 'u')
          {
                 UuCount++;
          }



}
//do to every vowel
printf("Aa = %d\n", AaCount);
printf("Ee = %d\n", EeCount);
printf("Ii = %d\n", IiCount);
printf("Oo = %d\n", OoCount);
printf("Uu = %d\n", UuCount);

    return 0;
}
