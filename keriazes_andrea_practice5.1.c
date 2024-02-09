/* 
COP3223 Spring 2024 Practice 5.1 
Copyright 2024 keriazes_andrea 
*/ 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
//1.
  //a) double hypotenuse(double side1, double side2)
  //b) int smallest(int x, int y, int z)
  //c) void instructions(void)
  //d) float intToFloat(int number)

//2.
   //a) double hypotenuse(double side1, double side2);
   //b) int smallest(int x, int y, int z);
   //c) void instructions(void);
   //d) float intToFloat(int number);

//3. static float lastValue;

//4. 
   //a) C does not support nested function definitions, I moved function 'h' outside of function 'g'
   int g(void) {
    printf("%s", "Inside function g\n");
   }
    int h(void) {
        printf("%s", "Inside function h\n");
        g();
    }

    //b) there was no return statement in the function body, I added return result; now the function properly returns the sum of x and y
     int sum(int x, int y) {
        int result = x + y;
        return result;
     }

    //c) the function definition should NOT end with a semicolon. Also, 'float a' is declared twice
      void f(float a) {
        printf("%f", a);
    }

    //d) there was no return statement for 'n + sum(n - 1)'
    int sum(int n) {
        if (0 == n) {
            return 0;
        }
        else {
           return n + sum(n - 1);
        }
    }

    //e a 'void' function canNOT return a value, the first printf statement is missing a semicolon, the 'return result' statement is removed
    void product(void) {
        printf("%s", "Enter three integers: ");
        int a;
        int b;
        int c;
        scanf("%d%d%d", &a, &b, &c);
        int result = a * b * c;
        printf("Result is %d", result);
        
    }
   
}