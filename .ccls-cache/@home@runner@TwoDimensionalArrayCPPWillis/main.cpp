//Student Name: Isaiah Willis

//Teacher: Dr. Tyson McMillan

//Date: 04/06/2022

//A program to practice working with multi-dimensional arrays

#include <iostream>

using namespace std;



int main()

{




  const int city = 2;
  const int days = 7;

  int** forecast = new int*[city];
  for(int i = 0; i < city; i++)
    {
      forecast[i] = new int[days];
    }

forecast[0][0] = 71;
forecast[0][1] = 86;
forecast[0][2] = 87;
forecast[0][3] = 85;
forecast[0][4] = 89;
forecast[0][5] = 89;
forecast[0][6] = 78;
forecast[1][0] = 80;
forecast[1][1] = 87;
forecast[1][2] = 83;
forecast[1][3] = 86;
forecast[1][4] = 89;
forecast[1][5] = 90;
forecast[1][6] = 83;
   


    cout << "\nApril 8th to 14th Weekly Forecast:" << endl;
 

    for (int i = 0; i < city; ++i)

    {
      cout << endl;
        for(int j = 0; j < days; ++j)

        {

            if(i == 0)
            {
              cout << "Arlington, ";
            }
          else 
            {
              cout << "Austin, ";
            }

          cout << "Day " << i + 1 << " : " << forecast[i][j] << endl;

        }

    }

    return 0;

}