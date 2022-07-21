#include<iostream>
#include<cmath>
#include<cstdlib>/*Needed use the random numbers.*/
#include<ctime>  /*Using this header file we would choose the amount of time the code should run.*/

using namespace std;


int main (){
  
  srand(time(0)); /* "seeding" the random generator */
  
  const int size=60;
  
  cout << "Enter a letter to begin \n ";
  
  char x; cin>> x;
  
  int position = size / 2;
  
  while (true) {
    cout << "|START|" ;

    for (int i=0; i<size;i++) {
      if (i == position) 
        cout << x;
      else cout << " ";
      }
    
    cout << "|FINISH|" << endl;
  
    int move= rand()%3 - 1; /* here "move" makes sure that the random movement that are returned 
                             are from 0-2 to make the randomness working properly. */
  
    position = position + move; /*Here we make the positions according to the randomness and move the 
                                 man.*/
    
    if (position <1) {cout << "You could not finish the race!" <<endl; break;}
    
    if (position >size-1) {cout << "Yay! You finished the race" << endl; break;}
    
    for(int sleep=0; sleep< 1000000 ; ++ sleep); /*Running the code for 1000000 times*/
  }   
  return 0; 
}