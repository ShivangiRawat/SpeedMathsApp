#include<stdio.h>
#include<math.h>
#include <time.h>

int score = 0;
void add(int a, int b, int f){
    int x, y;
    printf("Add the following numbers: \n");
    printf("%d \n%d\n", a, b);
    x = a+b;
    scanf("%d", &y);
    if(x==y){
        printf("Correct! ");
        score++;
    }
    if(f){
        printf("The correct answer is: %d", x);
    }
}

void sub(int a, int b, int f){
    int x, y;
    printf("Subtract the following numbers: \n");
                if(a>b){
                    printf("%d \n%d\n", a, b);
                    x = a-b;
                }
                else{
                    printf("%d \n%d\n", b, a);
                    x = b-a;
                }
                scanf("%d", &y);
                if(x==y){
                    printf("Correct! ");
                    score++;
                }
                if(f){
                    printf("The correct answer is: %d", x);
                }
}


void add_sq(int a, int b, int f){
    int x, y;
printf("Add the square of the following numbers: \n");
                printf("%d \n%d\n", a, b);
                x = a*a + b*b;

                scanf("%d", &y);
                if(x==y){
                    printf("Correct! ");
                    score++;
                }
                if(f){
                    printf("The correct answer is: %d", x);
                }
}

void sub_sq(int a, int b, int f){
    int x, y;
printf("Subtract the squares of the following numbers: \n");
                if(a>b){
                    printf("%d \n%d\n", a, b);
                    x = a*a - b*b;
                }
                else{
                    printf("%d \n%d\n", b, a);
                    x = b*b - a*a;
                }
                scanf("%d", &y);
                if(x==y){
                    printf("Correct! ");
                    score++;
                }
                if(f){
                    printf("The correct answer is: %d", x);
                }
}

void add_cb(int a, int b, int f){
    int x, y;
printf("Add cube of the following numbers: \n");
                printf("%d \n%d\n", a, b);
                x = a*a*a + b*b*b;
                scanf("%d", &y);
                if(x==y){
                    printf("Correct! ");
                    score++;
                }
                if(f){
                    printf("The correct answer is: %d", x);
                }
}

void sub_cb(int a, int b, int f){
    int x, y;
printf("Subtract cube of the following numbers: \n");
                if(a>b){
                    printf("%d \n%d\n", a, b);
                    x = a*a*a - b*b*b;
                }
                else{
                    printf("%d \n%d\n", b, a);
                    x = b*b*b - a*a*a;
                }
                scanf("%d", &y);
                if(x==y){
                    printf("Correct! ");
                    score++;
                }
                if(f){
                    printf("The correct answer is: %d", x);
                }
}


void rem(int a, int b, int f){
    int x, y;
printf("Remainder of the following numbers: \n");
                if(a>b){
                    printf("%d \n%d\n", a, b);
                    x = a%b;
                }
                else{
                    printf("%d \n%d\n", b, a);
                    x = b%a;
                }
                scanf("%d", &y);
                if(x==y){
                    printf("Correct! ");
                    score++;
                }
                if(f){
                    printf("The correct answer is: %d", x);
                }
}


void mult(int a, int b, int f){
    int x, y;
printf("Multiply the following numbers: \n");
                printf("%d \n%d\n", a, b);

                x = a*b;
                scanf("%d", &y);
                if(x==y){
                    printf("Correct! ");
                    score++;
                }
                if(f){
                    printf("The correct answer is: %d", x);
                }
}

void div(int a, int b, int f){
    int x, y;
printf("Divide the following numbers: \n");
                if(a>b){
                    printf("%d \n%d\n", a, b);
                    x = a/b;
                }
                else{
                    printf("%d \n%d\n", b, a);
                    x = b/a;
                }
                scanf("%d", &y);
                if(x==y){
                    printf("Correct! ");
                    score++;
                }
                if(f){
                    printf("The correct answer is: %d", x);
                }
}


int main(){
    // 1. test design, 2.

    while(1){
        //We have 6 different options
        printf("What do you want to practice: \n Press 1 for Addition \n Press 2 for Subtraction \n Press 3 for multiplication \n Press 4 for Division(Only integer part) \n Press 5 for Adding 2 Squares \n Press 6 for Subtracting squares\n Press 7 for Adding cube \n Press 8 for Subtracting cubes \n Press 9 for remainder \n Press 10 for Random questions \n");
        int f=1;
        int m;

        //m should be one of the 6 options
        while(f){
            scanf("%d", &m);
            if(m<=6 && m>=1){
                f = 0;
            }
        }

        //we can select how long should our numbers be
        int d1, d2;
        printf("How many digits in number1 and number 2 respectively \n");
        printf("Digits in number 1: ");
        scanf("%d", &d1);
        printf("Digits in number 2: ");
        scanf("%d", &d2);
        int n;

        //Display flag - To display answers with each answer
        f=0;
        printf("Answers will not be displayed along the questions by default. Only score and time taken will be shown at the end.\n");

        printf("Choose 0 for answers not displayed\nChoose 1 to display answers\n");
        scanf("%d", &f);


        //To select the number of questions in the test
        printf("Number of questions: ");
        scanf("%d", &n);


        int q= n;
        time_t start_t, end_t;
        double diff_t;
        time(&start_t);
        while(n--){
            int a, b;
            int x, y;
            int z, w;
            z = pow(10, d1);
            w = pow(10, d2);
            a = rand() % z;
            b = rand() % w;

            // Random Logic


                //Addition Logic
                if(m==1){
                    add(a, b, f);
                    printf("\n");
                }

                //Logic for subtraction
                else if(m==2){
                    sub(a, b, f);
                    printf("\n");
                }

                else if(m==3){
                    mult(a, b, f);
                    printf("\n");
                }


                //Division Logic
                else if(m==4){
                    div(a, b, f);
                    printf("\n");
                }

                //Square Logic addition
                else if(m==5){
                    add_sq(a,b,f);
                    printf("\n");
                }

                // Square Logic subtraction
                else if(m==6){
                    sub_sq(a, b, f);
                    printf("\n");
                }

                //Cube logic addition
                else if(m==7){
                    add_cb(a, b, f);
                    printf("\n");
                }

                //Cube logic subtraction
                else if(m==8){
                    sub_cb(a, b, f);
                    printf("\n");
                }

                //Remainder Logic
                else if(m==9){
                    rem(a, b, f);
                    printf("\n");
                }



        }
        time(&end_t);
    diff_t = difftime(end_t, start_t);
    printf("Your score is %d out of %d\n", score, q);
    printf("Total time taken is %f seconds\n", diff_t);

    }


}
