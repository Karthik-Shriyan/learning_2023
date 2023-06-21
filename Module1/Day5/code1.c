#include <stdio.h>
struct box{
    double length;
    double width;
    double height;
};
typedef struct box box;
 double calVolume(box* );
 double calSurfaceArea(box* );
 int main(){
    box b1;
    box* bPtr=&b1;

    (*bPtr).length=6.0;
    (*bPtr).width=3.0;
    (*bPtr).height=2.0;

    bPtr->length=6.0;
    bPtr->width=3.0;
    bPtr->height=2.0;

    double vol =calVolume(bPtr);
    double surfacearea=calSurfaceArea(bPtr);

    printf("Volume: %.2f\n", vol);
    printf("Surface Area: %.2f\n",surfacearea);

    return 0;
 }
 double calVolume(box* bPtr) {
    return bPtr->length*bPtr->width *bPtr->height;
 }

 double calSurfaceArea(box* bPtr){
    double length=bPtr->length;
    double width=bPtr->width;
    double height=bPtr->height;

    return 2 * (length*width+length*height+width*height);
 }