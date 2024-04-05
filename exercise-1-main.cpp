#ifdef __unix__
  #include<unistd.h>
#else
  #include<windows.h>
#endif
#include <iostream>
#include <stdlib.h>
#include <array>
#include <vector>
#include <string>
using namespace std;
void clearScreen(){
  #ifdef __unix__
    system("clear");
  #else
    system("CLS");
  #endif
}
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


void eveLeftToRight(int start, int end){
  string eveRight[] ={"           @@#@@@@.    \n",
  "        @           #  \n",
  "       @         @@@@@ \n",
  "      @       @@@@@@@@@\n",
  "      @      @@@@@@@.-@\n",
  "      :     @@@@..:@@@@\n",
  "     @@@    @@@@@@@@@  \n",
  "      #@%-*@     -.@@  \n",
  "         .@@@@@@@@@+.. \n",
  "   @@@@+ @          @  \n",
  "  @    @ @         .@# \n",
  " @    -@ @         @ @ \n",
  " =    @- @        @. @ \n",
  "@    @*+:@       .@  @ \n",
  "@   @ + .@       +  @  \n",
  "@  @   @@*      @ @@   \n",
  " @@     #@:***@+       \n"};
  string padding = "";
  for(int i=start; i < end; i++, padding=padding+" ")
  {
    string output;
    for(string line: eveRight)
    {
      output += padding + line;
    }
    cout << output;
    usleep(1000);
    clearScreen();
  }
}

void eveRightToLeft(int start, int end){
  string eveLeft[] = {"    %@@@@#@@            \n",
  "  -%          @         \n",
  " @@@@@         @        \n",
  "@@@@@@@@@       @       \n",
  "@-.@@@@@@@      %       \n",
  "@@@@:..%@@@     .       \n",
  "  @@@@@@@@@    @@@      \n",
  "  @@.=     @*=*@% @     \n",
  "  ==@@@@@@@@@:    :     \n",
  "  @          % =@@@@    \n",
  " +@:         @ @    @   \n",
  " @ @         @.@#    @  \n",
  " @  @        @.-@    .: \n",
  " #  @        @:+*@    @ \n",
  "  @  :       @: * @   % \n",
  "   @@ @      +@@   @  @ \n",
  "       :@***:@%     @@  \n"};
  string padding(end, ' ');
  for(int i=end; i>start; i--, padding.erase(0,1)){
    string output;
    for(string line: eveLeft)
    {
      output += padding + line;
    }
    cout << output;
    usleep(1000);
    clearScreen();
  }

}

int main(){
    string ans;
    //Eve to WALLE
    string walle="                                            .          .                                            \n                                        @@@%  @@    @@  #@@@                                        \n                                    @@@@:   @  @    @  @   .@@@@                                    \n                               #@@@@*  :@@@   =@%@@%@*   @@@-  +@@@@%                               \n                           @@@@@@          @@ @@    @@ @@          @@@@@@                           \n                         @@   =*   @@@@@@   @@@@    @@@@   @@@@@@   +*   @@.                        \n                       +@    -@   @@    @@   %@      @@   @@    @@   @*    @#                       \n                      .@  @@ =@   @@    #@   @@ #@@% @@   @@    @@   @# @@  @=                      \n                      @%      @-   @@@@@@   @@        @@   @@@@@@   .@      #@                      \n                      @=      .@%          %@@@@@@@@@@@@@          #@-      :@                      \n                      *@        @@@      @@@.           @@@      @@@        @#                      \n                       @=          @@@@@#@@@            @@@#@@@@@          :@.                      \n                        @@      @@      %.  @@@@@@@@@@@@  .@      @@      @@.                       \n                         @@@+       +@@@@# =@%@      @%@+ *@@@@#       -@@@                         \n                            @@@@@@@@@     +. @@      @@ .+     @@@@@@@@@                            \n                                             %@      @@                                             \n                                            @@@@@@@@@@@@                                            \n                                           @@          @@                                           \n                                           @@@@@@@@@@@@@@                                           \n                                           @@          @@                                           \n                                           @@          @@                                           \n                                           %@          @@                                           \n                         =@@@@@@@@@@@@@@@@@@@%@@@@@@@@%@@@@@@@@@@@@@@@@@@@*                         \n                      .@@@         %@.                         @@         #@@.                      \n                    @@@=@           @       ....               @:          @*@@@                    \n                   :@   @@@@@@@@@@@@@   @@-+###*.@@    @@@:    @@@@@@@@@@@@@   @+                   \n                    @   @           @   @@       @@   @@  @@   @=          @   @                    \n                  -@@@@@@@@@@@@@-   @   @@       @@    @@@@    @=  :@@@@@@@@@@@@@+                  \n                 @:        @    #@@@@@@ %@@@@@@@@@:          @@@@@@%    @.        @                 \n                @@@@@      @         :@                      @%         @:     @@@@@                \n                @   #%     @         .@@@@@@@@@@@@@@@@@@@@@@@@#         @     +%   @                \n                @   +@@@@@@@@@@@@@@@@@@                      @@@@@@@@@@@@@@@@@@#   @                \n                @.  +:             %                            @              #   @                \n                @   +@@@@@@@@@@@@@@@@@@                      @@@@@@@@@@@@@@@@@@#   @                \n                @   *#     @         .@                      @#         @     +%   @                \n                @@@@@.    .@         :@                      @%         @:     @@@@@                \n                 @.        @    *@@@@@@                      @@@@@@#    @         @                 \n                  -@@@@@@@@@@@@@+                                  +@@@@@@@@@@@@@*                  \n                        @                                                  @                        \n @@#+*************%@@:  @                                                  @  .@@@*************+#@@ \n *                  *-  @                                                  @  .*                  # \n.@                  +@@@@                                                  @@@@*                  @:\n-@                  -*  @                                                  @  =+                  @-\n *@@@@@@@@@@@@@@@@@@*+  @                                                  @  =*@@@@@@@@@@@@@@@@@@* \n-@                  -@  @                                                  @  %=                  @-\n *.@@@@@@@@@@@@@@@@#**  @                                                  @  =*#@@@@@@@@@@@@@@@@.* \n:@                  +%  @                                                  @  *#                  @-\n-@                  =@   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.  @+                  @-\n * %%%%%%%%%%%%%%%#=**@@          @                              @          @@#*+#%%%%%%%%%%%%%%% * \n-@                  --  @@@@@@@@@@@                              @@@@@@@@@@@. -=                  @-\n * %%%%%%%%%%%%%%%+:**  @         @                              @         @. +*:+%%%%%%%%%%%%%%% # \n-@                  =@  @     =   @                              @   *     @. %*                  @-\n:@                  =@.-@       *@@                              @@@       @+.@*                  @-\n % +++++++++++++++: ** :@@@@@@@@@                                  @@@@@@@@@+ +* .+++++++++++++++ @ \n-@                  -%                                                        *+                  @-\n * %@@@@@@@@@@@@@@#=*+                                                        =*=#@@@@@@@@@@@@@@% * \n *                  -:                                                        .-                  + ";
    string eve="                                                                                                    \n                                                                                                    \n                                                                                                    \n                                                          @@%@**.+@                                 \n                                                       @@:  -.       +                              \n                                                     .    :. .                                      \n                                                    +@@@@@+             -                           \n                                                   @@@@@@@@@@.           .                          \n                                                  *@%@@@@@@@@@@          .                          \n                                                  @@--@@@@@@@@@@@         *                         \n                                                  @@@@@@@---+@@@@@        @                         \n                                                   @@@@@@+--@@@@@@                                  \n                                                     @@@@@@@@@@@@@       @@@                        \n                                                      #-*@@@@@@     .@#%.@@%@                       \n                                                     @*:.=      .+%   -@@   @                       \n                                                    +#.@@@@@%**@@@@@@+      @                       \n                                                                       =*@@@@=                      \n                                                     @. ...  ...         :    @.                    \n                                                    +#=  .......      @ @      @:                   \n                                                    + @  .......      @.@@      @                   \n                                                    @  @  ......      @  @=      @                  \n                                                    @  .* ......      @ . @       @                 \n                                                    #   @  ......     @ -. @      %                 \n                                                    #= =:%  :.....   .@ = @ @      @                \n                                                     @ -  @  ......  .@. =   @     *                \n                                                      %@=  @  ...... .@  @    @    @                \n                                                       .    @   ...:.  @@     @:  @                 \n                                                              @. ..  #@         :#                  \n                                                                @.  %                               \n";
    string eveLeft="    %@@@@#@@            \n  -%          @         \n @@@@@         @        \n@@@@@@@@@       @       \n@-.@@@@@@@      %       \n@@@@:..%@@@     .       \n  @@@@@@@@@    @@@      \n  @@.=     @*=*@% @     \n  ==@@@@@@@@@:    :     \n  @          % =@@@@    \n +@:         @ @    @   \n @ @         @.@#    @  \n @  @        @.-@    .: \n #  @        @:+*@    @ \n  @  :       @: * @   % \n   @@ @      +@@   @  @ \n       :@***:@%     @@  ";
    clearScreen();
    cout << walle;
    sleep(1);

    cout << "\nIs there a solution to end future human suffering?: ";

    getline(cin, ans);
    while(ans != "no"){
      cout << "\nIs there a solution to end future human suffering?: ";
      getline(cin, ans);
    }
    clearScreen();
    cout << eve << "\nSo are humans doomed to suffer?\n";
    sleep(2);
    clearScreen();
    cout << walle << "\nThere isn't only one solution. Consider how many ways we can end future suffering.\n";
    sleep(2); 
    clearScreen();
    cout << eve << "Computing solutions to the suffering problem: ";
    getline(cin, ans);
    //cout << atoi(ans.c_str()) << "\n" ;
    clearScreen();
    cout << eve << "num_of_solutions > 1?\n";
    sleep(2);
    clearScreen();
    cout << walle << "\nThere is no single answer to the solution.\n";
    sleep(2);
    clearScreen();
    cout << "\nRecomputing solutions with parameters: num_of_solutions != 1 && num_of_solutions > 1.\n" << eve;
    sleep(2);
    clearScreen();
    cout << walle << "\nThere could be thousands of answers, and you can be one of them.\n";
    sleep(2);
    clearScreen();

    cout << "added parameter, num_of_solutions >= 1000\n";
    cout << "Affirmative, [this.self] executing process \"become solution\".\n" << eve;
    sleep(2);
    clearScreen();
    
    for(int i = 0; i < 10; i++)
    {
      eveLeftToRight(0,150);
      eveRightToLeft(0,150);
    }
    clearScreen();
    for(int i = 0; i < 29*54;i=i+10){
      vector<string>* temp = buildImage(i);
      // printImage(temp);
      string output;
      printImage(temp);

      usleep(10000);
      clearScreen();
      cout << output;
    
  }
    cout << "THE END\n";
    //WALLE and eve?
    //cleaning animation (build up blocks)
}
