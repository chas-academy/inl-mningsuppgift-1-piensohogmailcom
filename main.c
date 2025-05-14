#include <stdio.h>
#include <stdlib.h>

int main() {
    srand (1);
    int dice_roll[100];
    

    for (int i=0; i<100; i++){
    dice_roll[i] = (rand() % 6) +1;
    //printf("roll %d\n", dice_roll[i]);
    }

    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int sum = 0;
    int avr = 0;

    for (int i = 0; i <100; i++){
       if (dice_roll[i] == 1){one++;}
       if (dice_roll[i] == 2){two++;}
       if (dice_roll[i] == 3){three++;}
       if (dice_roll[i] == 4){four++;}
       if (dice_roll[i] == 5){five++;}
       if (dice_roll[i] == 6){six++;}
       sum+= dice_roll[i];
    }

    printf("%d\n", one);
    printf("%d\n", two);
    printf("%d\n", three);
    printf("%d\n", four);
    printf("%d\n", five);
    printf("%d\n", six);
    printf("%d\n", sum);
    printf("%.1f\n", sum / 100.0);  
   

    return 0;
}