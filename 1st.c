//declaration and initialization
/*why do we need to initialize an array or variable?
answer: declaring tells the computer that a variable exists (allocating memory), while initializing gives that 
variable its very first value*/
#include <stdio.h>
void arrf(){ 
    //declaring array
    int arr[5];
    //initializing the array
    arr[0]=11;
    arr[1]=88;
    arr[2]=51;
    arr[3]=99;
    arr[4]=654;
    //reading the array
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    //reading an array
    printf("********************\n");
    printf("%d",arr[0]);


}
int main(){
    arrf();
    return 0;

}

