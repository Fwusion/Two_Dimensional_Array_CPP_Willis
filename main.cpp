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

  
  
     /* const int CITY = 2;

      const int WEEK = 7;

      int** forecast = new int*[CITY];
    for(int i =0;i < CITY; i++)
      {
        forecast[i] = new int[WEEK];
      }
  
  

   
   

 

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {
           cout << "Enter all temperature for a week of first city and then second city. \n";
          
            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";

            cin >> forecast[i][j];

          system("clear");

        }

    }

    cout << "Your Citys' Weekly Forecast:" << endl;
 

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            if(i == 0)
            {
              cout << "Arlington"
            }

        }

    }


  

   /*For up to 5 Points Extra Credit

      Expand this program:

      1. Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, assume that value 0 represents day 1, 1 represents day 2....

      2. Create a on dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , assume that value 0 represents day 1, 1 represents day 2....

      3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], where i is index of the City Number, and j is the index of the temp for the day.

      4. print the results of temperature[i][j]; to the screen.

    */

 

 

    return 0;

}