#include "mbed.h"

DigitalOut myled(LED1);
DigitalOut myled2(LED2);
unsigned long counter = 0;
unsigned int delay = 0;
unsigned char i = 0;
unsigned int counter_limit = 0, delay_limit = 0;
unsigned int array[] = {0,1,0,1,0,1,0,1};

int main()
{
    myled = 1;
    myled2 = 1;
    while(1) { 
       myled = 1;
       myled2 = 1;
       wait_ms(1000);
       myled = 0;
        do
        {          
         if (array[i++] == 0)
            {
                  //myled = 1;
                  myled2 = 0; 
                  wait_ms(100);
            }
            else  
            {
                // myled = 1;
                 myled2 = 1;
                 wait_ms(100);
             }            
        }while(i < 8);   
        //wait_ms(4167);
        i = 0;
    }
}

