#include <stdio.h>
enum Status {OFF,ON};
void main()     
{
    enum Status s = ON;  
    FILE *f = fopen("status.txt", "w"); // it will opens the file
    fprintf(f, "%d", s); // printing the value of variable s inside the file
    fclose(f);// closes the file
    int val;
    f = fopen("status.txt", "r"); // opens the file
    fscanf(f, "%d", &val); // reading the contant in the file
    fclose(f);// closes the file
    if (val == ON)     // it will checks the val is on or off
    {
        printf("Status is ON\n"); // it will print status is on if val is on otherwise it will status is off
    }
    else
    {
        printf("Status is OFF\n");
    }
}