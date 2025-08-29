/* If you run a 10 kilometer race in 43 minutes 30 seconds:
 • Find your average time per km.
 • Find your average speed in km/h.*/
#include<stdio.h>

int main() {
    float distance;
    float time,time1;

    printf("enter distance travelled: ");
    scanf("%f",&distance);

    printf("enter time in min: ");
    scanf("%f",&time);

    time1 = time / 60.0;

    float avg_speed = distance / time1;
    float avg_time = time1 / distance;

    printf("average time per km= %.2f\n", avg_time);
    printf("average speed in km/h= %.2f\tkm/h.\n", avg_speed);

    return 0;

}