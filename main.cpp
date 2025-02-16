#include <iostream>
#include <cstdlib>
#include <random>
#include <string>
using namespace std;

enum enGameChoice {Stone = 1 , Paper = 2 , Scissors = 3 };
enum enWinner {Player = 1 , Computer = 2 , Draw = 3};

struct stRoundInfo {
    short RoundNumber = 0;
    enGameChoice Player1Choice;
    enGameChoice ComputerChoice;
    enWinner Winner;
    string WinnerName;
};

struct stGameResults {
    short GameRounds = 0;
    short PlayerWinTimes = 0;
    short ComputerWinTimes = 0;
    short DrawTimes = 0;
    enWinner GameWinner;
    string WinnerName = "";
};

int RandomNumber(int From , int To) {
    return rand() % (To - From + 1) + From;
}

string WinnerName(enWinner Winner) {
    string arrWinnerName[3] = {"Player1" , "Computer" , "No Winner"};
    return arrWinnerName[Winner - 1];
}

enWinner WhoWonTheRound(stRoundInfo RoundInfo) {
    if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice) {
        return enWinner::Draw;
    }
    if ((RoundInfo.Player1Choice == Stone && RoundInfo.ComputerChoice == Scissors) ||
        (RoundInfo.Player1Choice == Paper && RoundInfo.ComputerChoice == Stone) ||
        (RoundInfo.Player1Choice == Scissors && RoundInfo.ComputerChoice == Paper)) {
        return Player;
    }
    return Computer;
}

string ChoiceName(enGameChoice Choice) {
    string arrGameChoices[3] = {"Stone" , "Paper" , "Scissors"};
    return arrGameChoices[Choice - 1];
}

void SetWinnerScreenColor(enWinner Winner) {
#ifdef _WIN32
    switch (Winner) {
        case Player:
            system("color 2F"); break;
        case Computer:
            system("color 4F"); cout << "\a"; break;
        default:
            system("color 6F"); break;
    }
#else

    switch (Winner) {
        case Player:
            cout << "\033[32m"; break; // green
        case Computer:
            cout << "\033[31m"; cout << "\a"; break; // sound + red
        default:
            cout << "\033[33m"; break; // yellow
    }
#endif
}

void PrintRoundResults(stRoundInfo RoundInfo) {
    cout << "\n____________ Round [" << RoundInfo.RoundNumber << "] ____________\n";
    cout << "Player1 Choice: " << ChoiceName(RoundInfo.Player1Choice) << endl;
    cout << "Computer Choice: " << ChoiceName(RoundInfo.ComputerChoice) << endl;
    cout << "Round Winner: [" << RoundInfo.WinnerName << "]\n";
    cout << "__________________________________\n" << endl;
    SetWinnerScreenColor(RoundInfo.Winner);
}

enWinner WhoWonTheGame(short PlayerWinTimes, short ComputerWinTimes) {
    if (PlayerWinTimes > ComputerWinTimes)
        return Player;
    if (ComputerWinTimes > PlayerWinTimes)
        return Computer;
    return Draw;
}

stGameResults FillGameResults(int GameRounds, short PlayerWinTimes, short ComputerWinTimes, short DrawTimes) {
    stGameResults GameResults;
    GameResults.GameRounds = GameRounds;
    GameResults.PlayerWinTimes = PlayerWinTimes;
    GameResults.ComputerWinTimes = ComputerWinTimes;
    GameResults.DrawTimes = DrawTimes;
    GameResults.GameWinner = WhoWonTheGame(PlayerWinTimes, ComputerWinTimes);
    GameResults.WinnerName = WinnerName(GameResults.GameWinner);
    return GameResults;
}

enGameChoice ReadPlayerChoice() {
    short Choice = 1;
    do {
        cout << "\nYour Choice: [1]: Stone, [2]: Paper, [3]: Scissors ? ";
        cin >> Choice;
    } while (Choice < 1 || Choice > 3);
    return static_cast<enGameChoice>(Choice);
}

enGameChoice GetComputerChoice() {
    return static_cast<enGameChoice>(RandomNumber(1, 3));
}

stGameResults PlayGame(short HowManyRounds) {
    stRoundInfo RoundInfo;
    short PlayerWinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;

    for (short GameRound = 1; GameRound <= HowManyRounds; GameRound++) {
        cout << "\nRound [" << GameRound << "] begins: \n";
        RoundInfo.RoundNumber = GameRound;
        RoundInfo.Player1Choice = ReadPlayerChoice();
        RoundInfo.ComputerChoice = GetComputerChoice();
        RoundInfo.Winner = WhoWonTheRound(RoundInfo);
        RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

        if (RoundInfo.Winner == enWinner::Player) PlayerWinTimes++;
        else if (RoundInfo.Winner == enWinner::Computer) ComputerWinTimes++;
        else DrawTimes++;

        PrintRoundResults(RoundInfo);
    }
    return FillGameResults(HowManyRounds, PlayerWinTimes, ComputerWinTimes, DrawTimes);
}

string Tabs(short NumberOfTabs) {
    return string(NumberOfTabs, '\t');
}

void ShowGameOverScreen() {
    cout << Tabs(2) << "__________________________________________________________\n";
    cout << Tabs(2) << "              ~~~ G a m e  O v e r ~~~\n";
    cout << Tabs(2) << "__________________________________________________________\n\n";
}

void ShowFinalGameResults(stGameResults GameResults) {
    cout << Tabs(2) << "_____________________ [Game Results] _____________________\n";
    cout << Tabs(2) << "Game Rounds         : " << GameResults.GameRounds << endl;
    cout << Tabs(2) << "Player Won Times    : " << GameResults.PlayerWinTimes << endl;
    cout << Tabs(2) << "Computer Won Times  : " << GameResults.ComputerWinTimes << endl;
    cout << Tabs(2) << "Draw Times          : " << GameResults.DrawTimes << endl;
    cout << Tabs(2) << "Final Winner        : " << GameResults.WinnerName << endl;
    cout << Tabs(2) << "_________________________________________________________\n";
    SetWinnerScreenColor(GameResults.GameWinner);
}

short ReadHowManyRounds() {
    short GameRounds;
    do {
        cout << "How Many Rounds (1 to 10) ? ";
        cin >> GameRounds;
    } while (GameRounds < 1 || GameRounds > 10);
    return GameRounds;
}

void ResetScreen() {
#ifdef _WIN32
    system("cls");
    system("color 0F");
#else
    system("clear");
#endif
}

void StartGame() {
    char PlayAgain;
    do {
        ResetScreen();
        stGameResults GameResults = PlayGame(ReadHowManyRounds());
        ShowGameOverScreen();
        ShowFinalGameResults(GameResults);
        cout << Tabs(3) << "Do You Want To Play Again? (Y/N): ";
        cin >> PlayAgain;
    } while (PlayAgain == 'Y' || PlayAgain == 'y');
}

int main() {
    srand((unsigned)time(NULL));
    StartGame();
    return 0;
}
