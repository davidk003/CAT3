#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
using namespace std;



void printImage(vector<string>* vec){
  string output;
  for(auto line: *vec){
    output = output + line + "\n";
  }
  cout << output;
}
vector<string>* buildImage(int pixels){
    string plant[] = {
"                    =+========+=                    \n"
"               +====================+               \n"
"            ============================            \n"
"         +===============+================+         \n"
"       +===============+    ================+       \n"
"      ================+      -================      \n"
"    +================          ================-    \n"
"   +================.           ================+   \n"
"  +================+            +================-  \n"
"  =================              =================  \n"
" ==================              =================+ \n"
" ==================              ================== \n"
"+==================              ==================:\n"
"+==================+            +==================+\n"
"+===================-          -===================+\n"
"+=====================        +====================.\n"
" ========.       -====+++++=======:       :======== \n"
" ========+          +=+=======+=          +=======+ \n"
"  ========            ===  ===            ========  \n"
"  +========            +=  ==            ========-  \n"
"   +========+          ==  ==          +========+   \n"
"    +=========+       ===  ===       ===========    \n"
"      ===================  ==================+      \n"
"       +=================  ================++       \n"
"         +===============  ===============+         \n"
"           .============================            \n"
"               +====================+               \n"
"                    +++=======++                    "};
  vector<string>* output = new vector<string>;
  string temp(plant[0].size(), ' ');
  for(int i = 0; i < 29; i++){
    output->push_back(temp);
  }
  for(int i = (int)(pixels/size(plant[0])); i > 0 ; i--){
    for(int j = 0; j < i; j++){
      output->at(j)=plant[j];
    }
  }
    int workingLine=(int)(pixels/size(plant[0]));
    string padding(size(plant[0])-(pixels%size(plant[0])), ' ');
    if(workingLine<size(plant)){
      output->at(workingLine) = plant[workingLine].substr(0,pixels%size(plant[0])) + padding;
    }
  return output;
}

int main(){
  for(int i = 0; i < 29*54;i=i+10){
    vector<string>* temp = buildImage(i);
    printImage(temp);
    usleep(10000);
    system("clear");
    
  }
}
