#include <iostream>
#include <cmath>
#include <string>

// I learnt that large files not to use an entire namespace as a global but rather to only get what I want
using std::cout;
using std::endl;
using std::cerr;
using std::cin;
using std::string;

void geometric(int& intTerm, int& intRatio, int& intCurrent); // non-returning pass-by-reference function
void counting(int intStart, int intEnd, int intStep); // non-returning pass-by-value function
string reverse(string strWord); // value-returning fucntion

int main()
{
    bool boolContinue = true;

    char chOption;

    do
    {
        cout << endl;

        cout << "Option A: Geometric Sequence" << endl
             << "Option B: Counting Sequence" << endl
             << "Option C: Reverse Word" << endl
             << "Option X: Exit";

        cin >> chOption;

        switch(chOption)
        {
            case 'A':
            case 'a':
            {
                int intNumTerms, intRatio, intFirstTerm;

                cout << "How many terms";
                cin >> intNumTerms;
                cout << "What is your common ratio";
                cin >> intRatio;
                cout << "What is your first term";
                cin >> intFirstTerm;

                for(int i = 1; i <= intNumTerms; i++)
                {
                    geometric(intFirstTerm, intRatio, i); // For pass-by-reference is has to be an lvalue not rvalue
                }
                
                break;
            }

            case 'B':
            case 'b':
            {
                int intStart, intEnd, intStep;

                cout << "What is your starting value";
                cin >> intStart;
                cout << "What is your ending value";
                cin >> intEnd;
                cout << "What is your stepping value";
                cin >> intStep;

                counting(intStart, intEnd, intStep);
                break;
            }

            case 'C':
            case 'c':
            {
                string strWord;
                cout << "Enter a word of phrase";
                cin.ignore();
                getline(cin, strWord);

                cout << reverse(strWord) << endl;
                break;
            }

            case 'X':
            case 'x':
            {
                cout << "Thank you for participating." << endl;
                boolContinue = false;
                break;
            }

            default:
            {
                cerr << "Invalid option. Please try again." << endl; // I do not need to put a break keyword in default
            }
        }
    } while (boolContinue);
    

    return 0;
}

void counting(int intStart, int intEnd, int intStep)
{
        if(intEnd >= intStart)
        {
            while(intStart <= intEnd)
            {
                cout << intStart << ", ";
                intStart += intStep;
            }

            cout << endl;
        }else if(intEnd <= intStart)
        {
            while(intEnd <= intStart)
            {
                cout << intStart << ", ";
                intStart -= intStep;
            }
        }
    
}

void geometric(int& intTerm, int& intRatio, int& intCurrent)
{
    int intResult = intTerm * (pow(intRatio, (intCurrent - 1)));
    cout << intResult << ", ";
}

string reverse(string strWord)
{
    string strReverse;

    for(char c : strWord)
    {
        strReverse = c + strReverse;
    }

    return strReverse;
}