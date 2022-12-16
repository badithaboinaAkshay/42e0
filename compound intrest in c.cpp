#include<stdio.h>
#include<math.h>
int main()
{
    float CI,P,R,T;
    scanf("%f%f%f",&P,&R,&T);
    CI=P*(pow((1+(R/100.0)),T));
    printf("%.2f",CI-P);
    
}
