#include<iostream>
#include<cmath>
using namespace std;
void division(double a,double b);
void product(double a,double b);
void mod_ulus(double a ,double b );
void difference(double a ,double b );
void sum(double a ,double b );
void print_menu(); 
int choice;
int main(){
    
    double First,Second;
    while(1){
        print_menu();
        cin >> choice;
        
        if(choice==6){
            break;
        }
        if(choice<1||choice>6){
            cout << "Invalid Choice" << endl;
            continue;
        }
        if(choice>=1&&choice<6){
            cout << "Enter two number:" << endl;
            cin >> First;
            cin >> Second;
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
            mod_ulus( First, Second);
            break;
            default:
            cout << "Nothing. " << endl;
            }

        }
    }
    return 0;
}
void print_menu(){
    cout << endl <<"----------------------"<< endl ;

    cout << "Enter the choice:" << endl <<"1. sum " << endl << "2. difference" << endl << "3. product"<< endl <<  "4.  division " << endl << "5. modulus" << endl <<  "6. exit" << endl;

}
void sum(double a ,double b ){
    cout << a+b << endl;
}
void difference(double a ,double b ){
    cout << a-b << endl;
}
void product(double a ,double b ){
    cout << a*b << endl;
}
void division(double a ,double b ){
    if(b==0){
        cout << "Number can't be divisible." << endl;
    }
    else cout << a/b << endl;
}
void mod_ulus(double a ,double b ){
    if(b==0){
        cout  << "Modulus can not defined." << endl;
    }
    else cout << fmod(a,b) << endl;
}





