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
