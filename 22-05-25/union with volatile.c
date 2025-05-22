#include <stdio.h>
// Define a union
typedef union {
    int i;
    float f;
} Data_t;
// Declare a volatile union variable (simulating a hardware register)
volatile Data_t sensor_data;
int main(void)
{
    // Assign an integer value (simulated write from software)
    sensor_data.i = 42;
    // Read and print the integer value (simulated read from hardware)
    printf("Sensor Data (int): %d\n", sensor_data.i);
    // Assign a float value
    sensor_data.f = 3.14f;
    // Read and print the float value
    printf("Sensor Data (float): %.2f\n", sensor_data.f);
    return 0;
}
