#include <iostream>
#include <cmath>    // for pow() function
using namespace std;
int main()
{
    const float PI = 3.14159;
    int user_choice;

    cout << "\nEnter your choice (1-4): \n"
         << "\n1. Calculate the Area of a Circle\n"
         << "2. Calculate the Area of a Rectangle\n"
         << "3. Calculate the Area of a Triangle\n"
         << "4. Calculate the area of a Trapezoid\n"
         << "5. Quit\n";

    cin >> user_choice;
    cout << endl;

    switch (user_choice)
    {
        float area;

        case 1:
            int radius;

            cout << "What is the radius: ";
            cin >> radius;

            if (radius < 0)
            {
                cout << "\nWe're sorry \nthe radius must be "
                     << "a positive number.\n"
                     << "Rerun the program and try again.\n" 
                     << endl;
            }
            else
            {
                area = PI * pow (radius, 2);
                cout << "The area of the Circle is " <<  area << endl;
            }
            break;

        case 2:
            float width, length;

            cout << "What is the length? " << endl;
            cin >> length;

            if (length > 0) 
            {
                cout << "What is the width? " << endl;
                cin >> width;

                if (width > 0) 
                {
                    area = length * width;
                    cout << "The area of Rectangle is "<< area << endl;
                }
                else 
                {
                    cout << "\nWe're sorry \nWidth must be greater than 0." << endl;
                    cout << "Rerun the program and try again."<< endl;
                }
                
            }
            else
            {
                cout << "\nWe're sorry \nLength must be greater than 0." << endl;
                cout << "Rerun the program and try again." << endl;
            }
            break;

        case 3:
            float height,
                  base;

            cout << "What is base base? ";
            cin >> base;

            if (base > 0)
            {
                cout << "What is the height? ";
                cin >> height;

                if (height > 0) 
                {
                    area = (base * height) * 1/2;
                    cout << "The area of Triangle is " 
                         << area 
                         << endl;
                }
                else 
                {
                    cout << "\nWe're sorry \nHeight must be greater than 0.\n" << "Rerun the program and" 
                         << "try again." 
                         << endl;
                }
                
            }
            else
            {
                cout << "\nWe're sorry. \nBase length must"
                     << " be greater than 0.\n"
                     << "Rerun the program and try again." << endl;
            }
            break;

        case 4:
            float verticalHeight, baseA, baseB;

            cout << "What is base A? ";
            cin >> baseA;

            cout << "What is base B? ";
            cin >> baseB;

            if (baseA > 0 and baseB >0)
            {
                cout << "What is the vertical height? ";
                cin >> verticalHeight;

                if (verticalHeight > 0) 
                {
                    area = (baseA + baseB)/2 * verticalHeight;
                    cout << "The area of Trapezoid is " 
                         << area << endl;
                }
                else 
                {
                    cout << "\nWe're sorry \nVertical height must be greater than 0.\n" << "Rerun the program and" 
                         << "try again." 
                         << endl;
                }
                
            }
            else
            {
                cout << "\nWe're sorry \nBase length must"
                     << " be greater than 0.\n"
                     << "Rerun the program and try again." << endl;
            }
            break;
            
        case 5:
            cout << "Good-bye prof. Xu" << endl;
            break;

        default:
            cout << "We're sorry \nYour choice must "
                 << "between 1 and 4.\n"
                 << "Rerun the program and try again." 
                 << endl;
            break;
    }

    cout << endl;

    return 0;
}