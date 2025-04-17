#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
#include <cstdlib>

using namespace std;

void CharacterCreation(int &playerRaceNum, int NUMRACES, int &playerClassNum, int NUMCLASSES);
int diceRoller(int diceType, int numDice);
void AbilityScoreExplanation();
void AbilityScoreAssignment(int &_STR, int &_DEX, int &_CON, int &_INT, int &_WIS, int &_CHA);

int HP = 0, AC = 0, GOLD = 0, _STR = 0, _DEX = 0, _CON = 0, _INT = 0, _WIS = 0, _CHA = 0;

const int NUMRACES = 4;
int playerRaceNum = 0;

const int NUMCLASSES = 4;
int playerClassNum = 0;

string playerRaceStrings[NUMRACES] = {"Human", "Elf", "Dwarf", "Half-Orc"};
string playerClassStrings[NUMRACES] = {"Fighter", "Rogue", "Wizard", "Ranger"};

int main()
{

    srand(time(0));

    CharacterCreation(playerRaceNum, NUMRACES, playerClassNum, NUMCLASSES);

    AbilityScoreExplanation();
    AbilityScoreAssignment(_STR, _DEX, _CON, _INT, _WIS, _CHA);

    return 0;
}


void CharacterCreation(int &playerRaceNum, int NUMRACES, int &playerClassNum, int NUMCLASSES)
{

    cout << "Choose a race: " << endl
         << "1. Human" << endl
         << "2. Elf" << endl
         << "3. Dwarf" << endl
         << "4. Half-Orc" << endl;

    int raceChoice = 0;
    cin >> raceChoice;

    for (int i = 0; i <= NUMRACES; i++)
    {
        if (raceChoice == i + 1)
        {
            playerRaceNum = i;
        }
    }

    system("cls");

    cout << "Choose a class: " << endl
         << "1. Fighter" << endl
         << "2. Rogue" << endl
         << "3. Wizard" << endl
         << "4. Ranger" << endl;

    int classChoice = 0;
    cin >> classChoice;

    for (int i = 0; i <= NUMCLASSES; i++)
    {
        if (classChoice == i + 1)
        {
            playerClassNum = i;
        }
    }

    system("cls");
}

void AbilityScoreExplanation()
{

    string abilityExplanation1 =
        "Your character has six abilities: Strength, Dexterity, Constitution, Intelligence, Wisdom, and Charisma.";

    for (int i = 0; i < abilityExplanation1.length(); i++)
    {
        cout << abilityExplanation1[i];
        Sleep(25);
    }

    cout << "\n\n";

    Sleep(1000);

    string abilityExplanation2 =
        "Your character's scores for these abilities will be used in various ways, including determining your odds of success when attempting certain tasks.";

    for (int i = 0; i < abilityExplanation2.length(); i++)
    {
        cout << abilityExplanation2[i];
        Sleep(25);
    }

    cout << "\n\n";

    Sleep(1000);

    string abilityExplanation3 =
        "You will have 27 'points' to spend on setting certain scores within the 6 categories.";

    for (int i = 0; i < abilityExplanation3.length(); i++)
    {
        cout << abilityExplanation3[i];
        Sleep(25);
    }

    cout << "\n\n";

    Sleep(500);

    cout << "Score | Cost" << endl
         << "------------" << endl
         << "  8   |   0" << endl
         << "  9   |   1" << endl
         << "  10  |   2" << endl
         << "  11  |   3" << endl
         << "  12  |   4" << endl
         << "  13  |   5" << endl
         << "  14  |   7" << endl
         << "  15  |   9";

    cout << "\n\n";

    Sleep(500);

    string abilityExplanation4 =
        "In this way, you will be able to assign a set of scores ranging from three high and three low (15, 15, 15, 8, 8, 8), to six nearly equal ones (13, 13, 13, 12, 12, 12).";

    for (int i = 0; i < abilityExplanation4.length(); i++)
    {
        cout << abilityExplanation4[i];
        Sleep(25);
    }

    cout << "\n\n";

    Sleep(1000);

    string abilityExplanation5 =
        "Based on your chosen race and class, consider which abilities you will prioritize. You will next be asked to assign a score to each class. In the event of any errors, you will be asked to reenter your scores.";

    for (int i = 0; i < abilityExplanation5.length(); i++)
    {
        cout << abilityExplanation5[i];
        Sleep(25);
    }

    cout << "\n\n";

    system("pause");
    system("cls");
}

void CharacterCreation(int &playerRaceNum, int NUMRACES, int &playerClassNum, int NUMCLASSES);
int diceRoller(int diceType, int numDice);
void AbilityScoreExplanation();
void AbilityScoreAssignment(int &_STR, int &_DEX, int &_CON, int &_INT, int &_WIS, int &_CHA)
{
    cout << "Score | Cost" << endl
         << "------------" << endl
         << "  8   |   0" << endl
         << "  9   |   1" << endl
         << "  10  |   2" << endl
         << "  11  |   3" << endl
         << "  12  |   4" << endl
         << "  13  |   5" << endl
         << "  14  |   7" << endl
         << "  15  |   9";

    cout << "\n\n";

    int costCount = 0;
    int scoreTemp = 0;

    cout << "Enter Strength Score: ";
    cin >> scoreTemp;
    _STR = scoreTemp;

    switch (scoreTemp)
    {
    case 8:
        costCount += 0;
        break;
    case 9:
        costCount += 1;
        break;
    case 10:
        costCount += 2;
        break;
    case 11:
        costCount += 3;
        break;
    case 12:
        costCount += 4;
        break;
    case 13:
        costCount += 5;
        break;
    case 14:
        costCount += 7;
        break;
    case 15:
        costCount += 9;
        break;
    }

    cout << "\n";

    cout << "Enter Dexterity Score: ";
    cin >> scoreTemp;
    _DEX = scoreTemp;

    switch (scoreTemp)
    {
    case 8:
        costCount += 0;
        break;
    case 9:
        costCount += 1;
        break;
    case 10:
        costCount += 2;
        break;
    case 11:
        costCount += 3;
        break;
    case 12:
        costCount += 4;
        break;
    case 13:
        costCount += 5;
        break;
    case 14:
        costCount += 7;
        break;
    case 15:
        costCount += 9;
        break;
    }

    cout << "\n";

    cout << "Enter Constitution Score: ";
    cin >> scoreTemp;
    _CON = scoreTemp;

    switch (scoreTemp)
    {
    case 8:
        costCount += 0;
        break;
    case 9:
        costCount += 1;
        break;
    case 10:
        costCount += 2;
        break;
    case 11:
        costCount += 3;
        break;
    case 12:
        costCount += 4;
        break;
    case 13:
        costCount += 5;
        break;
    case 14:
        costCount += 7;
        break;
    case 15:
        costCount += 9;
        break;
    }

    cout << "\n";

    cout << "Enter Intelligence Score: ";
    cin >> scoreTemp;
    _INT = scoreTemp;

    switch (scoreTemp)
    {
    case 8:
        costCount += 0;
        break;
    case 9:
        costCount += 1;
        break;
    case 10:
        costCount += 2;
        break;
    case 11:
        costCount += 3;
        break;
    case 12:
        costCount += 4;
        break;
    case 13:
        costCount += 5;
        break;
    case 14:
        costCount += 7;
        break;
    case 15:
        costCount += 9;
        break;
    }

    cout << "\n";

    cout << "Enter Wisdom Score: ";
    cin >> scoreTemp;
    _WIS = scoreTemp;

    switch (scoreTemp)
    {
    case 8:
        costCount += 0;
        break;
    case 9:
        costCount += 1;
        break;
    case 10:
        costCount += 2;
        break;
    case 11:
        costCount += 3;
        break;
    case 12:
        costCount += 4;
        break;
    case 13:
        costCount += 5;
        break;
    case 14:
        costCount += 7;
        break;
    case 15:
        costCount += 9;
        break;
    }

    cout << "\n";

    cout << "Enter Charisma Score: ";
    cin >> scoreTemp;
    _CHA = scoreTemp;

    switch (scoreTemp)
    {
    case 8:
        costCount += 0;
        break;
    case 9:
        costCount += 1;
        break;
    case 10:
        costCount += 2;
        break;
    case 11:
        costCount += 3;
        break;
    case 12:
        costCount += 4;
        break;
    case 13:
        costCount += 5;
        break;
    case 14:
        costCount += 7;
        break;
    case 15:
        costCount += 9;
        break;
    }

    cout << "\n";

    if (costCount != 27)
    {
        system("cls");
        cout << "ERROR FOR SCORE ASSIGN ------- FIXME" << endl;
        AbilityScoreAssignment(_STR, _DEX, _CON, _INT, _WIS, _CHA);
    }

    cout << "The scores you entered were:\n\n"
         << "Strength: "     << _STR << endl
         << "Dexterity: "    << _DEX << endl
         << "Constitution: " << _CON << endl
         << "Intelligence: " << _INT << endl
         << "Wisdom: "       << _WIS << endl
         << "Charisma: "     << _CHA << endl << endl;

    cout << "Is this correct? (y/n): ";

    char choice;
    bool Continue = true;
    while(Continue == true){
        cin >> choice;
        if(choice == 'n'){
            system("cls");
            cout << "ADD SOMETHING" << endl << endl;
            AbilityScoreAssignment(_STR, _DEX, _CON, _INT, _WIS, _CHA);
        }else if(choice == 'y'){
            Continue = false;
        }else{
            cout << "Please enter y or n: ";
        }
    }

    system("cls");

    cout << "The scores you entered were:\n\n"
         << "Strength: "     << _STR << endl
         << "Dexterity: "    << _DEX << endl
         << "Constitution: " << _CON << endl
         << "Intelligence: " << _INT << endl
         << "Wisdom: "       << _WIS << endl
         << "Charisma: "     << _CHA << endl << endl;

    cout << "Based on your choices for Race and Class, some abilities scores may receieve bonuses. Any bonuses are reflected below:" << endl;

    cout << "You are playing as a " << playerRaceStrings[playerRaceNum] << " " << playerClassStrings[playerClassNum] << "." << endl;

}

int diceRoller(int diceType, int numDice)
{
    int total = 0;

    for (int i = 0; i < numDice; i++)
    {
        total += rand() % diceType + 1;
    }

    return total;
}