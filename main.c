//
//  main.c
//  Fibonacci
//
//
//

#include <stdio.h>
int input();
int fibonacci();
FILE *fp;
int main() {
    fp = fopen("csis.txt", "w");
    
    int in1 = fibonacci(input()) ;
    
    fibonacci(in1);
    
    fclose(fp);
    return 0;
}

int input() {
    int in1 = 0;
   
    printf("Enter a Number:\n");
    fprintf(fp, "Enter a Number:\n");
    scanf("%d", &in1);
    
    while(in1 < 0) {
    
        printf("Invalid User Input, Enter a Positive Number\n");
        fprintf(fp, "Invalid User Input, Enter a Positive Number\n");
        scanf("%d", &in1);
    }
    
    return in1;
}

int fibonacci(int in1){
    int t1 = 0, t2 = 1, next_term = 0, num_terms = 6;
    
    printf("\nNumber of Terms:%d", num_terms);
    printf("\nFibonacci Series: %d, %d, ", t1, t2 );
    fprintf(fp, "Number of Terms:%d", num_terms);
    fprintf(fp, "\nFibonacci Series: %d, %d, ", t1, t2 );
    
    next_term = t1 + t2;
    
    while(next_term <= in1 )
    {
        num_terms++;
        printf("%d, ",next_term);
        fprintf(fp, "%d, ",next_term);
        t1 = t2;
        t2 = next_term;
        next_term = t1 + t2;
       
    }
    return 0;
}
