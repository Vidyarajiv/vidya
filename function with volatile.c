#include <stdio.h>
volatile int sensorvalue = 0; //sensorvalue is volatile it can vary at any time due to internal interpts or user can chane the value
void readSensor()
{
    printf("Sensor %d\n", sensorvalue);// print the values after the function call.
}
void main()
{
    sensorvalue(); 
}