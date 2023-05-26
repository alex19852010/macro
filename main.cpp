#include<iostream>
#include<string>

using namespace std;

#define  WINTER  1
#define  SPRING  2
#define  SUMMER  3
#define  AUTUMN  4


main()
{

#define SEASON SPRING


 #if SEASON == WINTER
 cout << "winter" << endl;

 #elif SEASON == SPRING
 cout << "spring" << endl;

 #elif SEASON == SUMMER
 cout << "summer" << endl;

 #elif SEASON == AUTUMN
 cout << "autumn" << endl;

 #else
 cout << "error season" << endl;

 #endif

 return 0;
}   