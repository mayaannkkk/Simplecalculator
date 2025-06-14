#include<stdio.h>
void division(double a,double b);
void product(double a,double b);
void modulus(int a ,int b );
void difference(double a ,double b );
void sum(double a ,double b );
void print_menu();
int choice;

int main(){
    
    double First,Second;
    while(1){
        print_menu();
        scanf("%d",&choice);
        
        if(choice==6){
            break;
        }
        if(choice<1||choice>6){
            printf("Invalid choice\n");
            continue;
        }
        if(choice>=1&&choice<6){
            printf("Enter two number: ");
            scanf("%lf %lf",&First,&Second);
            switch (choice){
            case 1:
            sum(First,Second);
            break;
            case 2:
            difference(First,Second);
            break;
            case 3:
            product(First,Second);
            break;
            case 4:
            division(First,Second);
            break;
            case 5:
            modulus((int) First,(int) Second);
            break;
            default:
            printf("Nothing is here.\n");
            }

        }
    }
    return 0;
}
void print_menu(){
    printf("\n----------------------\n");

    printf("Enter the choice: \n1. sum\n2. difference\n3. product\n4.  division\n5. modulus\n6. exit\n ");

}
void sum(double a ,double b ){
    printf("%lf\n",a+b);
}
void difference(double a ,double b ){
    printf("%lf\n",a-b);
}
void product(double a ,double b ){
    printf("%lf\n",a*b);
}
void division(double a ,double b ){
    if(b==0){
        printf("Number can't be divisible.\n");
    }
    else printf("%lf\n",a/b);
}
void modulus(int a ,int b ){
    if(b==0){
        printf("Modulus can not defined\n");
    }
    else printf("%d\n",a % b);
}





