#include<stdio.h>
#define PI 3.14
enum Type{
Circle=1,
Rectangle
};
union dimensions{
struct circle{
float radius;
}c;
struct rectangle{
float radius;
float length;
}r;
};
struct Shape{
union dimensions d;
enum Type type;
};
int main(){
struct Shape area;
float k;
scanf("%d",&area.type);
switch(area.type){
case Circle:
scanf("%f",&area.d.c.radius);
k = PI * area.d.c.radius * area.d.c.radius;
printf("Area of the circle: %.4f units",k);
break;
case Rectangle:
scanf("%f",&area.d.r.radius);
scanf("%f",&area.d.r.length);
k = area.d.r.radius * area.d.r.length;
printf("Area of the rectangle: %.4f units",k);
break;
default:
printf("Invalid choice!");
}
return 0;
}
