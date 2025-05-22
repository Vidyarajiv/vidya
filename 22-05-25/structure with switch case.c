#include <stdio.h>                
typedef struct {
    int operand1;
    int operand2;
    int operation;          
} Operation_t;                  
// Function to perform operation based on structure
int CalculateResult(const Operation_t* const op)  // Rule 8.1, Rule 8.13, Rule 17.7
{
    int result = 0;         
    if (op != NULL)              
    {
        switch (op->operation)   // Rule 15.3
        {
            case 1:
                result = op->operand1 + op->operand2;
                break;           
            case 2:
                result = op->operand1 - op->operand2;
                break;           
            default:
                result = 0;
                break;          
        }
    }
    return result;
}
int main()                   
{
    const Operation_t myOp = {10, 5, 2};  
    int output = CalculateResult(&myOp);  
    printf("Result: %d\n", output);       
    return 0;                    
}
