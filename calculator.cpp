#include <iostream>
#include <cmath>

using namespace std;

void print_calc_menu(int x, int y);
double add_nums(int x, int y);
double sub_nums(int x, int y);
double multi_nums(int x, int y);
double div_nums(int x, int y);

int power_of(int x, int y);
int square_root(int x);
int absolute_value(double x);
void print_answer_label();


int main(){
    int selection;
    int x;
    int y;

    do{
        cout << "*******************************\n";
        cout << "         Calculator            \n";
        cout << "*******************************\n";
        cout << "    1. (+) - Add               \n";
        cout << "    2. (-) - subtract          \n";
        cout << "    3. (*) - Multiply          \n";
        cout << "    4. (/) - Divide            \n";
        cout << "    5. (^) - Power Of          \n";
        cout << "    6. (√) - Square Root       \n";
        cout << "    7. Exit                    \n";
        cout << "*******************************\n";
        cout << " Enter Selection: \n";
        cin >> selection;
        

        switch (selection)
        {
        case 1:
            cout << "Enter First Number:";
            cin >> x;
            cout << " Enter Second Number:";
            cin >> y;
            print_answer_label();
            cout << x << " + " << y << " = "<< add_nums(x, y) << '\n';
            cout << "******************************************\n" << '\n';
            break;
        case 2:
            cout << "Enter First Number:";
            cin >> x;
            cout << " Enter Second Number:";
            cin >> y;
            print_answer_label();
            cout << x << " - " << y << " = "<< sub_nums(x, y) << '\n';
            cout << "******************************************\n" << '\n';
            break;
        case 3:
            cout << "Enter First Number:";
            cin >> x;
            cout << " Enter Second Number:";
            cin >> y;
            print_answer_label();
            cout << x << " * " << y << " = "<< multi_nums(x, y) << '\n';
            cout << "******************************************\n" << '\n';

            break;
        case 4:
            cout << "Enter First Number:";
            cin >> x;
            cout << " Enter Second Number:";
            cin >> y;
            print_answer_label();
            cout << x << " / " << y << " = "<< div_nums(x, y) << '\n';
            cout << "******************************************\n" << '\n';
            break;
        case 5:
            power_of(x, y);
            break;
        case 6:
            square_root(x);
            break;
        case 7:
            break;
        
        default:
            cout << "Invalid Selection! Please Select a Valid Option.";
            break;
        }
    }while(selection != 7);

    return 0;
}

// void print_calc_menu(int x, int y){
//     int selection;
//     do{
//         cout << "*******************************\n";
//         cout << "        Signs Menu             \n";
//         cout << "*******************************\n";
//         cout << "    1. (+) - Add               \n";
//         cout << "    2. (-) - subtract          \n";
//         cout << "    3. (*) - Multiply          \n";
//         cout << "    4. (/) - Divide            \n";
//         cout << "    5. (^) - Power Of          \n";
//         cout << "    6. (√) - Square Root       \n";
//         cout << "    7. Back                    \n";
//         cout << "*******************************\n";
//         cout << " Enter Selection: \n";
//         cin >> selection;
        

//         switch (selection)
//         {
//         case 1:
//             cout << "Enter First Number:";
//             cin >> x;
//             cout << " Enter Second Number:";
//             cin >> y;
//             print_answer_label();
//             cout << x << " + " << y << " = "<< add_nums(x, y) << '\n';
//             cout << "******************************************\n" << '\n';
//             break;
//         case 2:
//             cout << "Enter First Number:";
//             cin >> x;
//             cout << " Enter Second Number:";
//             cin >> y;
//             print_answer_label();
//             cout << x << " - " << y << " = "<< sub_nums(x, y) << '\n';
//             cout << "******************************************\n" << '\n';
//             break;
//         case 3:
//             cout << "Enter First Number:";
//             cin >> x;
//             cout << " Enter Second Number:";
//             cin >> y;
//             print_answer_label();
//             cout << x << " * " << y << " = "<< multi_nums(x, y) << '\n';
//             cout << "******************************************\n" << '\n';

//             break;
//         case 4:
//             cout << "Enter First Number:";
//             cin >> x;
//             cout << " Enter Second Number:";
//             cin >> y;
//             print_answer_label();
//             cout << x << " / " << y << " = "<< div_nums(x, y) << '\n';
//             cout << "******************************************\n" << '\n';
//             break;
//         case 5:
//             power_of(x, y);
//             break;
//         case 6:
//             square_root(x);
//             break;
//         case 7:
//             break;
        
//         default:
//             cout << "Invalid Selection! Please Select a Valid Option.";
//             break;
//         }
//     }while(selection != 7);
// }
double add_nums(int x, int y){
    return x + y;
}
double sub_nums(int x, int y){
    return x - y;
}
double multi_nums(int x, int y){
    return x * y;
}
double div_nums(int x, int y){
    return x / y; 
}
int power_of(int x, int y){
    int num1;
    int num2;
    cout << "Enter Number: \n";
    cin >> num1;
    cout << "To the Power of: \n";
    cin >> num2;
   print_answer_label();
    cout << num1 << " To the Power of " << num2 << " = " << pow(num1, num2) << '\n';
    cout << "*****************************************\n" << '\n';
    return pow(num1, num2);
    
}
int square_root(int x){
    
    cout << "Enter number for the Square Root: \n";
    cin >> x;
    print_answer_label();
    cout << "The Square Root of: " << x << " = " << sqrt(x) << '\n';
    cout << "*****************************************\n" << '\n';
    return sqrt(x);
}
int absolute_value(double x){
    cout << "Enter number for Absolute Value: \n";
    cin >> x;
    print_answer_label();
    cout << "The Absolute Value of: " << (double)x << " = " << abs(x) << '\n';
    cout << "******************************************\n" << '\n';
    return abs(x);

}
void print_answer_label(){
    cout << "\n*****************************************\n";
    cout << "              Answer:                    \n";
    cout << "******************************************\n";
}