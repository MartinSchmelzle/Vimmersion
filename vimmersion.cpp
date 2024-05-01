#include <cstdlib>
#include <fstream>
#include <iostream>
#include <chrono>
#include <thread>
#include <cstring>
/* #include <cstdlib> */
using namespace std::literals::chrono_literals;

//we need to concatenate input with another string to call nvim
char* concatenateStrings(const char* a, const char* b) {
  // Get the lengths of both strings
  size_t length_a = strlen(a);
  size_t length_b = strlen(b);

  // Allocate memory for the concatenated string
  char* result = new char[length_a + length_b + 1]; // +1 for the null terminator

  // Copy the first string into the result
  strcpy(result, a);

  // Concatenate the second string to the end of the first one
  strcat(result, b);

  return result;
}

int main(int argc, char* argv[])
{
    /* std::system("tmux new-session -s vimmersion -A"); // executes the UNIX command "ls -l >test.txt" */
    //toggles full screen property of terminal => opens as full screen
    std::system("wmctrl -r :ACTIVE: -b toggle,maximized_vert,maximized_horz");

    std::system("tmux splitw -h");
    std::system("tmux resize-pane -t 0 -x 40");
    std::system("tmux select-pane -t 1 -T text");
    
    //if main has input parameters,we need to have input parameters
    char* c;
    if(argc>=2){c=concatenateStrings("echo nvim ",argv[1]);}
    else{c="echo nvim";}
    //todo: put c into the command below

    std::system("tmux pipe-pane -I 'echo nvim vimmersion.cpp'");
    std::system("tmux splitw -v");
    std::system("tmux resize-pane -t 2 -y 10");
    std::cout << std::ifstream("test.txt").rdbuf();

    //now that we have our three windows up, we can go through them and open the terminal applications
    //this isn't the most performant way, but seems less error-prone to me 
    std::system("tmux select-pane -t 0 -T text");
    std::system("echo 0");
    std::system("ranger");
    return 0;
}
