#ifdef __unix__
  #include<unistd.h>
#else
  #include<windows.h>
#endif
#include <iostream>
#include <stdlib.h>
using namespace std;
void clearScreen(){
  #ifdef __unix__
    system("clear");
  #else
    system("CLS");
  #endif
}
int main(){
    string ans;
    //Eve to WALLE
    cout << "Can we end future suffering: ";
    //trigger python animation here
    getline(cin, ans);
    while(ans != "no"){
      cout << "Can we end future suffering: ";
      getline(cin, ans);
    }
    //trigger python animation here
    cout << "\nSo are humans doomed to suffer?\n";
    sleep(3);
    clearScreen();
    cout << "Consider how many ways we can end future suffering.\n";
    sleep(3); 
    clearScreen();
    cout << "Computing solutions to the suffering problem: ";
    getline(cin, ans);
    //cout << atoi(ans.c_str()) << "\n" ;
    cout << "> 1 solutions found. Stored in answer_var.\n";
    sleep(3);
    clearScreen();
    cout << "There is no single answer to the solution.\n";
    sleep(3);
    clearScreen();
    cout << "Recomputing solutions with parameters: answer_var != 1 && answer_var > 1.\n";
    sleep(3);
    clearScreen();
    cout << "Theres thousands of answers, you can be the answer.\n";
    sleep(3);
    clearScreen();


    cout << "added parameter, answer_var >= 1000\n";
    cout << "Affirmative, [this.self] executing process \"answer_var\".\n";
    sleep(3);
    clearScreen();
    cout << "THE END\n";
    //WALLE and eve?
    //cleaning animation (build up blocks)
}
