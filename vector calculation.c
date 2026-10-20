#include<stdio.h>
#include<math.h>
#define pi 3.14159
 int main()
 {
    float p,q,r,s,t,theta,fx,fy,F,p1,p2,p3,p4,p5;
    
       printf("Enter the values of p, q, r, s, t ");
       scanf("%f %f %f %f %f", &p, &q, &r, &s, &t);
    
       printf("Enter the angle of the vector with respect to the x-axis (in degrees) : p1, p2, p3, p4, p5"  );
       scanf("%f %f %f %f %f", &p1, &p2, &p3, &p4, &p5);
    
    p1 = p1 * (pi/180);
    p2 = p2 * (pi/180); 
    p3 = p3 * (pi/180);
    p4 = p4 * (pi/180); 
    p5 = p5 * (pi/180);

// summation of vector by resolution method

    fx = p*cos(p1) + q*cos(p2) + r*cos(p3) + s*cos(p4) + t*cos(p5);
    fy = p*sin(p1) + q*sin(p2) + r*sin(p3) + s*sin(p4) + t*sin(p5);

       printf("The x-component of the resultant vector is: %.2f", fx);
       printf("\n The y-component of the resultant vector is: %.2f", fy);

//the resultant vector magnitude and direction
     
     F=sqrt(fx*fx + fy*fy);
     printf("The magnitude of the resultant vector is: %.2f", F);
//now for angle of resultant vector with respect to x-axis

     theta=atan2(fy,fx);
     printf("\n The angle of the resultant vector with respect to the x-axis is: %.2f", theta );
    
    
    return 0;
 }
