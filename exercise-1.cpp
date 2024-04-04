#include<iostream>
#ifdef __unix__
  #include<unistd.h>
#else
  #include<windows.h>
#endif

using namespace std;

string stripString(string s){
  for(int i = 0; i < s.size(); i++){
    if((s[i] < 'A' || s[i] > 'Z') && (s[i] < 'a' || s[i] > 'z')){
          s.erase(i,1);
          i--;
    }
  }
  for (char &c : s){
    c = tolower(c);
  }
  return s;
}

int main () {
  string answer;
  string ascii_boy = "o\nT\n^\n";
  cout << "Okay,\n";
  sleep(2);
  cout << ascii_boy << "So what’s the answer\n";
  cout << "[to how to end future suffering]:";
  getline(cin, answer);
  while(stripString(answer) != "thereisntone")
  { 
    cout << "(Type there isn't one)\n";
    getline(cin, answer);
    
  }
  


  return 0;
}
