// This is the C program to calculate minutes into years and days.

#include <stdio.h>

int main(){
    
    int MinutesEntered   = 0;
    double years         = 0.0;
    double days          = 0.0;
    // double MinutesInYear = 0.0;
    double MinutesInYear = (60 * 24 * 365);
    
    printf("Enter the number of minutes: ");
    scanf("%d", &MinutesEntered);
    
    // MinutesInYear = (60 * 24 * 365);
    years = (MinutesEntered / MinutesInYear);
    days  = ((MinutesEntered / 60.0) / 24.0);         
    
    printf("%d minutes is approximately %f years %f days\n", MinutesEntered, years, days);
    
    return 0;
    
}