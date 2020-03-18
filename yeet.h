//don't judge, i made this in 1 hour
#ifndef YEET_H_INCLUDED
#define YEET_H_INCLUDED
#endif // YEET_H_INCLUDED
#include <iostream>
using namespace std;

class rectangle
{
private:
    int width;
    int height;
    int field;

public:
    void read()
    {
        cout << " " << endl;
        cout << "enter the width of your rectangle (only whole numbers allowed)" << endl;
        cin >> width;
        cout << "now enter the height" << endl;
        cin >> height;
    }

    void draw()
    {
        //send help idk how i got here oh god oh fuck oh shit
    if( width < 101 && height < 201)
    {
        for (int i = 1; i < width; i++)
        {
            cout << "." ;
            cout << " ";
        }
        cout << "." << endl;

        for ( int i = 1; i < height; i++)
        {
            cout << ".";
            for ( int j = 1; j < width; j++)
            {
                cout << "  " ;

            }
            cout <<"." << endl;


        }

        for ( int i = 0; i < width; i++)
        {

            cout << "." ;
            cout << " " ;
        }
        cout << " " << endl;
      }
      else
      {
          cout << "this rectangle is too   C H O N K  to be displayed, the max is 100x200" << endl;
          cout << "i calculated the field anyways: " << endl;
      }
    }


    void fieldCalculate()
    {
        field = height * width;
        cout <<"the field of this rectangle equals " << field << " dots " <<endl;
    }
};
