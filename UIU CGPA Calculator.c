#include <stdio.h>
#include <math.h>

int main(){

    int a;
    float b, c, d, e, sum =0;

    printf("How many subject you take: ");
    scanf("%d",&a);
    printf("How much Credit you take: ");
    scanf("%d",&c);

    for(int i = 1; i<=a; i++){
        printf("Enter the number what you get in Subject%d: ", i);
        scanf("%f",&b);
        printf("Enter the Credit number of Subject%d: ", i);
        scanf("%d",&d);

      if (b>=0 && b<=100){

        if(b>89){
           printf("You got A\n");
           e = d*4;
           sum = sum + e;
        }
        else if(b>=86 && b<=89){
           printf("You got A-\n");
           e = d*3.67;
           sum = sum + e;
        }
        else if(b>=82 && b<=85){
           printf("You got B+\n");
           e = d*3.33;
           sum = sum + e;
        }
        else if(b>=78 && b<=81){
           printf("You got B\n");
           e = d*3;
           sum = sum + e;
        }
        else if(b>=74 && b<=77){
           printf("You got B-\n");
           e = d*2.67;
           sum = sum + e;
        }
        else if(b>=70 && b<=73){
           printf("You got C+\n");
           e = d*2.33;
           sum = sum + e;
        }
        else if(b>=66 && b<=69){
           printf("You got C\n");
           e = d*2;
           sum = sum + e;
        }
        else if(b>=62 && b<=65){
           printf("You got C-\n");
           e = d*1.67;
           sum = sum + e;
        }
        else if(b>=58 && b<=61){
           printf("You got D+\n");
           e = d*1.33;
           sum = sum + e;
        }
        else if(b>=55 && b<=57){
           printf("You got D\n");
           e = d*1;
           sum = sum + e;
        }
        else{
           printf("You got F\n");
           e = d*0;
           sum = sum + e;
        }
    }
    else{
       printf("Not a Valid Number");
    }

    }
    printf("\nYou CGPA is %.2f", sum/c);


    getch();
}

