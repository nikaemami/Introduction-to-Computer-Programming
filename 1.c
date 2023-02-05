#include<stdio.h>
int main(){
    int i,number,money,ten=0,twenty=0,forty=0,value=0;
    //get the number of people in line with logical input//
    if(scanf("%d", &number)==1){
        if(number<=0){
            return 0;
        }
    //take money from each person in line//
        for (i=1;i<=number; i++){
        scanf("%d",&money);
            //if the input is illegal,just get everyone's money and print no//
        if(value==2){
            continue;
        }
            // we need a 10 to give back to a 20, and three 10s, or a 20 and a 10 (preferably a 20 and a 10) to give back to a 40//
        if(money==10){
            ten=ten+1;}
        else if (money==20){
            twenty=twenty+1;
            ten=ten-1;
        }
        else if (money==40){
            forty=forty+1;
            if (twenty-1>=0) {
                twenty=twenty-1;
                ten=ten-1;}
            else {
                ten=ten-3;
            }
        }
            //if the bills aren't 10,20 or 40,quit the program with a message//
        else {
                printf("illegal input. \n");
            break ;
        }
            //check the conditions above//
        if ((ten>=0)&&(twenty>=0)){
            value=1;
        }
        else{
            value=2;
        }
        }
        //tell if we can or cannot give tickets to all people in line//
        if (value==1){
            printf("yes.\n");
        }
        else if (value==2) {
            printf("no.\n");
        }
                }
    //quit the program with a warning if the input for the number of people is not logical//
    else{
        printf("not logical. \n");
    }
        return 0;
}
