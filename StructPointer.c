#include<stdio.h>
struct Point{
    int x,y;
};
int main(){
    struct Point p1 = {1, 2};
    // p2 is a pointer to structure p1
    struct Point *p2 = &p1;
    // Access Structure Members using Structure Pointer
    printf("%d %d",p2->x,p2->y);
    printf("\n%d %d",p1.x,p1.y);
    return 0;
}
