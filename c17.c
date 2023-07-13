//1 sum of first n natural numbers

// #include <stdio.h>
// int sum(int);
// int main(){
//      int a,b;
//      printf("Enter a number : ");
//       scanf("%d",&a);
//       b=sum(a);
//       printf("Sum of first %d natural number is %d",a,b);
//        return 0;
// }
// int sum(int n){
//     if(n==1)
//     return 1;
//     else
//     return n+sum(n-1);
// }




// 2
// #include <stdio.h>
// int sum(int n);
// int main(){
//     int a,b;
//     printf("Enter a number : ");
//     scanf("%d",&a);
//     b=sum(a);
//     printf("Sum is %d",b);
//     return 0;
// }
// int sum(int n){
//     if (n==1)
//     return 1;
//     else
//     return (2*n-1)+sum(n-1);
// }



//3
// #include <stdio.h>
// int sum(int n);
// int main(){
//     int a,b;
//     printf("Enter a number : ");
//     scanf("%d",&a);
//     b=sum(a);
//     printf("Sum is %d",b);
//     return 0;
// }
// int sum(int n){
//     if(n>0)
//     return (2*n)+sum(n-1);
// }



//4
// #include <stdio.h>
// int sumsquare(int n);
// int main(){
//     int a,b;
//     printf("Enter a number : ");
//     scanf("%d",&a);
//     b=sumsquare(a);
//     printf("Sum is %d",b);
//     return 0;
// }
// int sumsquare(int n){
//     if(n>0)
//     return (n*n)+sumsquare(n-1);
// }





//5
// #include <stdio.h>
//  int digsum(int);
//  int main(){
//     int a,b;
//     printf("Enter a number : ");
//      scanf("%d",&a);
//       b=digsum(a);
//       printf("Sum of digits of %d is %d",a,b);
//        return 0;
//  }
//  int digsum(int n){
//      if(n>0){
//         return (n%10)+digsum(n/10);
//      }
//  }






//6 factorial
// #include <stdio.h>
//  int fact(int);
//  int main(){
//      int a,b;
//      printf("Enter a number : ");
//       scanf("%d",&a);
//       b=fact(a);
//       printf("Factorial of %d is %d",a,b);

// return 0;
//  }
// int fact(int n){
//     if(n==0)
//     return 1;
//     else
//     return n*fact(n-1);
// }



//9
// #include <stdio.h>
// int sum(int n);
// int main(){
//     int a,b;
//     printf("Enter a number : ");
//     scanf("%d",&a);
//     b=sum(a);
//     printf("Sum is %d",b);
//     return 0;
// }
// int sum(int n){
    
//      if(n>0)
//         return 1+sum(n/10);
//          }  




//8   fibonacci recursion
// #include <stdio.h>
// void printfib(int);
// int fib(int);
//  int main(){
//      int a;
//      printf("Enter the terms upto which you want the fibonacci series : ");
//      scanf("%d",&a);
//      printfib(a);
//       return 0;
//  }
//  void printfib(int n){
//     if(n==0){
//         printf("%d\t",n);
//     }
//     else{                                 //we can use if(n>=0) inspite of upar walla if n==0
//         printfib(n-1);
//         printf("%d\t",fib(n));
//     }
//  }
//  int fib(int x){
// //   int i,a=-1, b=1,c;
// //     for(i=0;i<=x;i++){
// //         c=a+b;
// //         a=b;b=c;
// //     }
// //     return c;



// if(x==0|| x==1)
// return x;   //because fibonacci ka 0th term 0 hai or 1st term 1 hi aata hai
// else
// return fib(x-1)+fib(x-2);
//  }





//10
// #include <stdio.h>
// float power(float x,float y);
//  int main(){
//     int a,b,c;
//     printf("Enter number : ");
//     scanf("%d",&a);
//     printf("Enter power : ");
//     scanf("%d",&b);
//   c= power(a,b);
//   printf("Power is %d",c);
//     return 0;
//  }
//  float power(float x,float y){
//     if(y==0)
//     return 1;
//     else if(y>0)
//         return x*power(x,y-1);
//     else if(y<0)
//     return power(x,y+1)/x;
//  }