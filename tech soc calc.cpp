//KSHITIZ GUPTA CIVIL ENGG FIRST YEAR
//TASK 1.5



#include <iostream>


using namespace std;

float inRadians(float num1)
{
    return(num1*3.14159)/180;
}

int main()
{
    int choice;
    cout<<" Press 1 for addition , subtraction , multiplication and division"<<endl;
    cout<<" Press 2 for exponential function"<<endl;
    cout<<" Press 3 for sin ,cosine, tangent function but rnter value of angle in radians"<<endl;
    cin>>choice;
    double num1,num2;
    char op ;
    if (choice==1){
    cout<<"enter first number: ";
    cin>>num1;

    cout<<"enter operator: ";
    cin>>op;

    cout<<"enter second number: ";
    cin>>num2;

    int Result;

    if (op=='+'){
        Result = num1 + num2;
        return Result;
    }
    else if (op=='-'){
        Result= num1 - num2;
        return Result;
    }
    else if (op=='*'){
        Result = num1*num2;
        return Result;
    }
    else if (op =='/'){
        Result = num1/num2;
        return Result;
    }

    }


    if (choice==2){
            cout<<"Enter base: "<<endl;
             cin>>num1;
             cout<<"enter exponent: "<<endl;
             cin>>num2;

            float result=1.00;
            for(float i= 1; i <=num2; i++){
            result = result*num1;
            }num1=result;
            return result;
    }


    if (choice==3){
            float radians;

        cout<<"Enter angle in degree: "<<endl;
        cin>>num1;

        cout<<"Enter the function( s for sin, c for cos , t for tan : "<<endl;
        cin>>op;
        num1 = inRadians(num1);




        if(op=='s'){

            num1= num1-((num1*num1*num1)/6.00)+((num1*num1*num1*num1*num1)/120.00);
            cout<<"your answer is"<<num1<<endl;
            return 0;
        }
        else if (op=='c'){

            num1= 1-((num1*num1)/2.00)+((num1*num1*num1*num1)/24.00);
            cout<<"your answer is" <<num1<<endl;
            return 0;
        }
        else if (op=='t'){

            num1= num1+((num1*num1*num1)/3.00)+(((num1*num1*num1*num1*num1)*2)/15.00);
            cout<<"your answer is"<<num1<<endl;
            return 0;
        }


    }
}

