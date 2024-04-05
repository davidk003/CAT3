#ifdef __unix__
  #include<unistd.h>
#else
  #include<windows.h>
#endif
#include <iostream>
#include <stdlib.h>
#include <array>
using namespace std;
void clearScreen(){
  #ifdef __unix__
    system("clear");
  #else
    system("CLS");
  #endif
}
string* buildImage(int pixels, string* strArr){
  string plant[] = {"*****","*****","*****","*****","*****","*****","*****","*****","*****","*****","*****","*****","*****","*****","*****","*****","*****"};
  string* output = new string(sizeof(plant)/sizeof(plant[0]));
  string temp(plant[0].size(), ' ');
  for(int i = 0; i < sizeof(output)/sizeof(output[0]); i++){
    output[i] = temp; 
  }
  for(int i = (int)(pixels/size(plant[0])); i < sizeof(plant)/sizeof(plant[0]); i++){
    for(int j = 0; j < i; j++){
      output[j]=plant[j];
    }
  }
  strArr = output;
  return strArr;
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
    for(string line: eveRight)
    {
      cout << padding << line;
    }
    usleep(5000);
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
    for(string line: eveLeft)
    {
      cout << padding << line;
    }
    usleep(5000);
    clearScreen();
  }

}

int main(){
    string ans;
    //Eve to WALLE
    string walle="                                            .          .                                            \n                                        @@@%  @@    @@  #@@@                                        \n                                    @@@@:   @  @    @  @   .@@@@                                    \n                               #@@@@*  :@@@   =@%@@%@*   @@@-  +@@@@%                               \n                           @@@@@@          @@ @@    @@ @@          @@@@@@                           \n                         @@   =*   @@@@@@   @@@@    @@@@   @@@@@@   +*   @@.                        \n                       +@    -@   @@    @@   %@      @@   @@    @@   @*    @#                       \n                      .@  @@ =@   @@    #@   @@ #@@% @@   @@    @@   @# @@  @=                      \n                      @%      @-   @@@@@@   @@        @@   @@@@@@   .@      #@                      \n                      @=      .@%          %@@@@@@@@@@@@@          #@-      :@                      \n                      *@        @@@      @@@.           @@@      @@@        @#                      \n                       @=          @@@@@#@@@            @@@#@@@@@          :@.                      \n                        @@      @@      %.  @@@@@@@@@@@@  .@      @@      @@.                       \n                         @@@+       +@@@@# =@%@      @%@+ *@@@@#       -@@@                         \n                            @@@@@@@@@     +. @@      @@ .+     @@@@@@@@@                            \n                                             %@      @@                                             \n                                            @@@@@@@@@@@@                                            \n                                           @@          @@                                           \n                                           @@@@@@@@@@@@@@                                           \n                                           @@          @@                                           \n                                           @@          @@                                           \n                                           %@          @@                                           \n                         =@@@@@@@@@@@@@@@@@@@%@@@@@@@@%@@@@@@@@@@@@@@@@@@@*                         \n                      .@@@         %@.                         @@         #@@.                      \n                    @@@=@           @       ....               @:          @*@@@                    \n                   :@   @@@@@@@@@@@@@   @@-+###*.@@    @@@:    @@@@@@@@@@@@@   @+                   \n                    @   @           @   @@       @@   @@  @@   @=          @   @                    \n                  -@@@@@@@@@@@@@-   @   @@       @@    @@@@    @=  :@@@@@@@@@@@@@+                  \n                 @:        @    #@@@@@@ %@@@@@@@@@:          @@@@@@%    @.        @                 \n                @@@@@      @         :@                      @%         @:     @@@@@                \n                @   #%     @         .@@@@@@@@@@@@@@@@@@@@@@@@#         @     +%   @                \n                @   +@@@@@@@@@@@@@@@@@@                      @@@@@@@@@@@@@@@@@@#   @                \n                @.  +:             %                            @              #   @                \n                @   +@@@@@@@@@@@@@@@@@@                      @@@@@@@@@@@@@@@@@@#   @                \n                @   *#     @         .@                      @#         @     +%   @                \n                @@@@@.    .@         :@                      @%         @:     @@@@@                \n                 @.        @    *@@@@@@                      @@@@@@#    @         @                 \n                  -@@@@@@@@@@@@@+                                  +@@@@@@@@@@@@@*                  \n                        @                                                  @                        \n @@#+*************%@@:  @                                                  @  .@@@*************+#@@ \n *                  *-  @                                                  @  .*                  # \n.@                  +@@@@                                                  @@@@*                  @:\n-@                  -*  @                                                  @  =+                  @-\n *@@@@@@@@@@@@@@@@@@*+  @                                                  @  =*@@@@@@@@@@@@@@@@@@* \n-@                  -@  @                                                  @  %=                  @-\n *.@@@@@@@@@@@@@@@@#**  @                                                  @  =*#@@@@@@@@@@@@@@@@.* \n:@                  +%  @                                                  @  *#                  @-\n-@                  =@   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.  @+                  @-\n * %%%%%%%%%%%%%%%#=**@@          @                              @          @@#*+#%%%%%%%%%%%%%%% * \n-@                  --  @@@@@@@@@@@                              @@@@@@@@@@@. -=                  @-\n * %%%%%%%%%%%%%%%+:**  @         @                              @         @. +*:+%%%%%%%%%%%%%%% # \n-@                  =@  @     =   @                              @   *     @. %*                  @-\n:@                  =@.-@       *@@                              @@@       @+.@*                  @-\n % +++++++++++++++: ** :@@@@@@@@@                                  @@@@@@@@@+ +* .+++++++++++++++ @ \n-@                  -%                                                        *+                  @-\n * %@@@@@@@@@@@@@@#=*+                                                        =*=#@@@@@@@@@@@@@@% * \n *                  -:                                                        .-                  + ";
    string eve="                                                                                                    \n                                                                                                    \n                                                                                                    \n                                                          @@%@**.+@                                 \n                                                       @@:  -.       +                              \n                                                     .    :. .                                      \n                                                    +@@@@@+             -                           \n                                                   @@@@@@@@@@.           .                          \n                                                  *@%@@@@@@@@@@          .                          \n                                                  @@--@@@@@@@@@@@         *                         \n                                                  @@@@@@@---+@@@@@        @                         \n                                                   @@@@@@+--@@@@@@                                  \n                                                     @@@@@@@@@@@@@       @@@                        \n                                                      #-*@@@@@@     .@#%.@@%@                       \n                                                     @*:.=      .+%   -@@   @                       \n                                                    +#.@@@@@%**@@@@@@+      @                       \n                                                                       =*@@@@=                      \n                                                     @. ...  ...         :    @.                    \n                                                    +#=  .......      @ @      @:                   \n                                                    + @  .......      @.@@      @                   \n                                                    @  @  ......      @  @=      @                  \n                                                    @  .* ......      @ . @       @                 \n                                                    #   @  ......     @ -. @      %                 \n                                                    #= =:%  :.....   .@ = @ @      @                \n                                                     @ -  @  ......  .@. =   @     *                \n                                                      %@=  @  ...... .@  @    @    @                \n                                                       .    @   ...:.  @@     @:  @                 \n                                                              @. ..  #@         :#                  \n                                                                @.  %                               \n";
    string eveLeft="    %@@@@#@@            \n  -%          @         \n @@@@@         @        \n@@@@@@@@@       @       \n@-.@@@@@@@      %       \n@@@@:..%@@@     .       \n  @@@@@@@@@    @@@      \n  @@.=     @*=*@% @     \n  ==@@@@@@@@@:    :     \n  @          % =@@@@    \n +@:         @ @    @   \n @ @         @.@#    @  \n @  @        @.-@    .: \n #  @        @:+*@    @ \n  @  :       @: * @   % \n   @@ @      +@@   @  @ \n       :@***:@%     @@  ";
    // clearScreen();
    // cout << walle;
    // sleep(4);

    // cout << "\nCan we end future suffering?: ";

    // getline(cin, ans);
    // while(ans != "no"){
    //   cout << "\nCan we end future suffering: ";
    //   getline(cin, ans);
    // }
    // clearScreen();
    // cout << eve << "\nSo are humans doomed to suffer?\n";
    // sleep(3);
    // clearScreen();
    // cout << "Consider how many ways we can end future suffering.\n" << walle;
    // sleep(3); 
    // clearScreen();
    // cout << eve << "Computing solutions to the suffering problem: ";
    // getline(cin, ans);
    // //cout << atoi(ans.c_str()) << "\n" ;
    // clearScreen();
    // cout << eve << "num_of_solutions > 1 Stored in answer_var.\n";
    // sleep(3);
    // clearScreen();
    // cout << "There is no single answer to the solution.\n" << walle;
    // sleep(3);
    // clearScreen();
    // cout << "\nRecomputing solutions with parameters: num_of_solutions != 1 && num_of_solutions > 1.\n" << eve;
    // sleep(3);
    // clearScreen();
    // cout << "There could be thousands of answers, and you can be one of them.\n" << eve;
    // sleep(3);
    // clearScreen();


    // cout << "added parameter, num_of_solutions >= 1000\n";
    // cout << "Affirmative, [this.self] executing process \"become solution\".\n" << eve;
    // sleep(3);
    // clearScreen();
    //eveLeftToRight(0,150);
    //eveRightToLeft(0,150);
    for(int i = 0; i < 100; i++){
      string temp[] = {};
      buildImage(i, temp);
      for(int j = 0; j < sizeof(temp)/sizeof(temp[0]);j++){
        cout << temp[j] << "\n";
      }
      sleep(1);
      clearScreen();
    }
    cout << "THE END\n";
    //WALLE and eve?
    //cleaning animation (build up blocks)
}
