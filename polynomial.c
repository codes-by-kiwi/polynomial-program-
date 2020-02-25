/*C program to solve polynomial equation */


#include <stdio.h>

float poly(float coeff[], int, float);
//coeff[20] is storing all the coeff of the polynomial 
// x is the value the function is evaluated at 
// answer is the result when the func is evaluated at that specific x 
// degree is the highest power of the polynomial 
int main()
    {   float x,coeff[20],answer;
        int degree,i;

        printf("Enter the degree of polynomial equation: ");
        scanf("%d", &degree);
        printf("Enter the value of x for which the function is to be solved ");
        scanf("%f", &x);

        for(i=0; i<=degree; i++) 
        {
            printf("Enter the coeff of x to the power %d: ",i);
            scanf("%f",&coeff[i]);// enter the coeff for x^0 to x^degree
        }
        answer = poly(coeff,degree,x);
        printf("The value of polynomial equation for the value of x = %f is: %f\n",x,answer);
        return 0;
    }

    float poly(float coeff[], int degree, float x)
{
	float p;
	int i;
	
	p = coeff[degree]; // stores the coefficient of the highest power into p 
	
	for(i=degree;i>=1;i--)
	{
		p = (coeff[i-1] + x*p);
	}
	
	return p;
}

/*when the function is called it executes like this:

i is the degree
1)p = coeff[i-1] + x* coeff[i],
i is reduced by 1 
2)p = coeff[i-1] + x*(previous step p)
i is reduced further till the condition for for loop is possible
.
.
. 

*/


