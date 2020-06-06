#include <stdio.h>  //Standard Library for performing input end output
#include <stdlib.h>


typedef struct { double x; double y; } coord_t;

coord_t c[6] = 
{
    {20, 37300.02},
    {40, 16300.02},
    {60, 7700.542},
    {80, 3800.452}, 
    {90, 2800.453}, 
    {100,2100.123}
};    

double interp( coord_t* c, double x, int n )
{
    int i;

    for( i = 0; i < n-1; i++ )
    {
        if ( c[i].x <= x && c[i+1].x >= x )
        {
            double diffx = x - c[i].x;
            double diffn = c[i+1].x - c[i].x;

            return c[i].y + ( c[i+1].y - c[i].y ) * diffx / diffn; 
        }
    }

    return 0; // Not in Range
}

int main(int argc, char** argv) 
{
    double y = interp( c, 95, 6 );

    printf("Hello World!\n"); //output
    printf("Result: %lf \n",y); //output
    system("pause");
    return 0;
}