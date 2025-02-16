#include <iostream>
#include <cstdlib>
using namespace std;

enum enGameChoice {Stone = 1 , Paper = 2 , Scissors = 3 };
enum enWinner {Player = 1 , Computer = 2 , Draw = 3};

struct  stRoundInfo {
    short RoundNumber = 0;
    enGameChoice Player1Choice;
    enGameChoice ComputerChoice;
    enWinner Winner;
    string WinnerName;
};

struct stGameResults {
    short GameRounds = 0;
    short PlayerWinTimes = 0;
    short Computer2WinTimes = 0;
    short DrawTimes = 0;
    enWinner GameWinner;
    string WinnerName = "";
};


int main() {


}