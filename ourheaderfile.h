int sum(int x,int y){
    return x+y;
}
int sub(int x,int y){
    return x-y;
}
int multiply(int x,int y){
    return x*y;
}
int divide(int x,int y){
    return x/y;
}
int mod(int x,int y){
    return x%y;
}

int armstrong(int num){
    int lastdigit=0;
    int sum=0;
    int power=0;
    int n=num;
    while(n!=0){
        lastdigit=n%10;
        power=lastdigit*lastdigit*lastdigit;
        sum=sum+power;
        n=n/10;
    }
    if(sum==num) {
        return 0;
    }  else{
      return 1;}
}

int SumOfNaturalNumbers(int n) {
    if(n==0){
        return 0;
    }else{
        return n+SumOfNaturalNumbers(n-1);
    }
}

float SgpaToPercentage(float sgpa){
    return (sgpa-0.75)*10.0;
}
float PercentageToSgpa(float percentage){
    return (percentage/10.0)+0.75;
}

int AreaOfCircle(int k);

// Function to generate Fibonacci series
void generateFibonacciSeries(int n) {
    int i, firstTerm = 0, secondTerm = 1, nextTerm;
        for (i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if (i == 1) {
            printf("%d, ", firstTerm);
            continue;
        }
        if (i == 2) {
            printf("%d, ", secondTerm);
            continue;
        }
        // Computes the next term in the series.
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;

        printf("%d", nextTerm);

        // Adds comma and space if it's not the last term.
        if (i != n) {
            printf(", ");
        }
    }
    printf("\n");
}
void generateTriangularSequence1(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}

void generateTriangularSequence2(int n) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

void printFloydsTriangle(int rows) {
    int number = 1, i, j;

    printf("Floyd's Triangle:\n");

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
}

void generateTriangleShape(int rows){
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

float cgpa;
float calculateCGPA(float Sgpa[], int n) {
float sum = 0;
for (int i = 0; i < n; i++) {
sum += Sgpa[i];
}
cgpa = sum / n;
return cgpa;
}


int percentile_to_rank_conversion(int total,float p) {
    int rank = total * (100 - p) / 100;
    return rank;
}

float convert_rank_to_percentile(float rank,float total) {
    return ((total-rank)/total)*100;
}
