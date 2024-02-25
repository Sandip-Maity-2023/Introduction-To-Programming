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


// Function to convert a single Roman numeral character to its value
int romanCharToInt(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return -1; // Invalid character
    }
}

// Function to convert a Roman numeral string to an integer
int romanToInt(char *roman) {
    int result = 0, prev = 0;
    while (*roman) {
        int current = romanCharToInt(*roman);
        if (current < 0) {
            return -1; // Invalid character
        }
        // Check for subtractive notation
        if (current > prev) {
            result = result - prev + current; // Subtract previous and add current
        } else {
            result += current; // Simply add current
        }
        prev = current;
        roman++;
    }
    return result;
}

// Function to get the Roman numeral representation of a digit
char* digitToRoman(int digit) {
    switch (digit) {
        case 1: return "I";
        case 2: return "II";
        case 3: return "III";
        case 4: return "IV";
        case 5: return "V";
        case 6: return "VI";
        case 7: return "VII";
        case 8: return "VIII";
        case 9: return "IX";
        default: return ""; // Invalid digit
    }
}

// Function to convert integer to Roman numeral
void integerToRoman(int num) {
    int decimalVals[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
    const char *romanVals[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

    // Iterate through decimalVals
    for (int i = 0; num > 0; ++i) {
        // Repeat while the current decimalVals[i] is less than or equal to num
        while (num >= decimalVals[i]) {
            printf("%s", romanVals[i]); // Print corresponding Roman numeral
            num -= decimalVals[i]; // Subtract decimalVals[i] from num
        }
    }
}

int addition(int z){
    int add=0;
    for(int i=1;i<=z;i++){
        add+=i;
    }
    return add;
}




