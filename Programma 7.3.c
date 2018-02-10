#include <stdio.h>
#include <wringPi.h>
#include <unistd.h>

void pinout();

int main() {
     
     wiringPiSetup();
     pinout();
     
     int wPi[5]={1,4,5,6,7};
     int i;
     
     printf("ft1060 in esecuzione...\n");
     printf("Premere Ctrl+C per terminare\n");
     
     while(1)
           {
           for(i=0; i<=4; i++)
           {
           digitalWrite (wPi[i],HIGH);
           usleep(60000);
           digitalWrite(wPi[i],LOW);
           usleep(60000);
           }
      for(i=3; i>=1; i--)
           {
           digitalWrite (wPi[i],HIGH);
           usleep(60000);
           digitalWrite (wPi[i],LOW);
           usleep(60000);
           }
      }
   return 0;
   }
