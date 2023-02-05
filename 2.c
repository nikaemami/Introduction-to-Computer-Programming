#include <stdio.h>
int main(){
    float h,b,w;
    int i=0;
    //get h as height of the ball, b as coefficient, and w as height of the window//
    if ((scanf("%f %f %f",&h,&b,&w))==3){
        //check the condition given in the question//
        if(w<=0){
            printf("-1\n");
        }
        else{
    if ((h>0)&&(b>0)&&(b<1)&&(w<h)){
        //calculate i (number of times the ball hits the ground) and tell the number of times the mom will see the ball//
        while (h>w){
            i=i+1;
            h=h*b;
        }
        printf("%d\n", (2*i)-1);
    }
    else {
        printf("-1\n");
    }
    }
    }
    //proper warning if the inputs are not numbers//
    else{
        printf("illegal input.\n");
    }
    return 0;
}
    
