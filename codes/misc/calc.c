    #include<stdio.h>
    int main()
{
    float a,b,c;
    int d;
    printf("enter first number ");
    scanf("%f",&a);
    {
        case 1: // code to be executed if d = 1;
            c = a + b;
            printf("the answer is %.2f \n",sum(a,b));
            break;
        case 2: // code to be executed if d = 2;
            c = a - b;
            printf("the answer is %.2f \n",sub(a,b));
            break;
        case 3: // code to be executed if d = 2;
            while(b==0){
                    printf("Please enter number other than 0 ");
                    scanf("%f",&b);
            }
            c = a / b;
            printf("the answer is %.2f \n",div(a,b));
            break;
        default: // code to be executed if d doesn't match any cases
            c =  a * b;
            printf("the answer is %.2f \n",mul(a,b));
    }
    printf("the answer is %f \n",c);
    return 0;

}

float sum(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float div(float a, float b) {
    return b==0 ? 0 : a / b ;
}

float mul(float a, float b) {
    return a * b;
}
