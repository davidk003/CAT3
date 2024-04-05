#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
using namespace std;



void printImage(vector<string>* vec){
  for(auto line: *vec){
    cout << line << "\n";
  }
}
vector<string>* buildImage(int pixels){
  string plant[] = {"*****","*****","*****","*****","*****","*****","*****","*****","*****","*****","*****","*****","*****","*****","*****","*****","*****"};
  vector<string>* output = new vector<string>;
  string temp(plant[0].size(), '_');
  for(int i = 0; i < 17; i++){
    output->push_back(temp);
  }
  //printImage(output);
  for(int i = (int)(pixels/size(plant[0])); i > 0 ; i--){
    cout << i << "\n";
    for(int j = 0; j < i; j++){
      //cout << "i=" << i << "j=" << j << "\n";
      output->at(j)=plant[j];
    }
    if(i<size(plant)){
      output->at(i) = plant[i].substr(0,pixels%size(plant[0]));
    }
  }
  return output;
}

int main(){
  for(int i = 0; i < 90; i++){
    vector<string>* temp = buildImage(i);
    //cout << sizeof(test)/sizeof("*****") << "\n";
    printImage(temp);
    usleep(50000);
    system("clear");
    
  }
}
