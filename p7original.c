#include<stdio.h>
#include<math.h>
struct _point{
    float x,y;
};
typedef struct _point Point;
struct _line{
Point p1,p2;
float distance;
};
typedef struct _line Line;
Point input_point()
{
    Point pt;
    printf("enter the coordinates for the points:");
    scanf("%f %f",&pt.x,&pt.y);
    return pt;
}
Line input_line(Point p1,Point p2)
{
    Line l;
    l.p1=p1;
    l.p2=p2;
    return l;
}
void find_length(Line *l)
{
     l->distance=sqrt((l->p2.x-l->p1.x)*(l->p2.x-l->p1.x)+(l->p2.y-l->p1.y)*(l->p2.y-l->p1.y));
}
void output(Line l)
{
    printf("the length of the line is %f",l.distance);
}
int main()
{
    Point p1,p2;
    Line L;
    p1=input_point();
  p2=input_point();
  L=input_line(p1,p2);
  find_length(&L);
  output(L);
  return 0;
}