#include <stdio.h>  // Rule 8.4
// Global static structure definition and declaration together
static struct Config {  // Rule 8.6,Rule 8.4
    int mode;           
    int speed;  
} sysConfig;            
// Function that modifies global static variable
void UpdateConfig(void)  // Rule 8.1
{
    // Using uninitialized static structure variable
    sysConfig.mode = 1;    // Rule 9.1 
    sysConfig.speed = 100;
}
int main(void)   // Rule 8.1, Rule 15.5
{
    UpdateConfig();       
    printf("Mode: %d, Speed: %d\n", sysConfig.mode, sysConfig.speed);
    return 0;             
}
