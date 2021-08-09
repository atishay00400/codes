#include <bits/stdc++.h>
using namespace std;

char mat[10] = {'0','1','2','3','4','5','6','7','8','9'};

int gameover();
void grid();

int main()
{
	int player = 1,i,pos;
    char turn;

    do
    {
        grid();
        player=(player%2)?1:2;

        cout << "\t\tPlayer " << player << ": enter a number:  ";
        char a;
        cin>>a;
        pos=int(a)-'0';

        turn=(player == 1) ? 'X' : '0';

        if (pos == 1 && mat[1] == '1')
            mat[1] = turn;

        else if (pos == 2 && mat[2] == '2')
            mat[2] = turn;

        else if (pos == 3 && mat[3] == '3')
            mat[3] = turn;

        else if (pos == 4 && mat[4] == '4')
            mat[4] = turn;

        else if (pos == 5 && mat[5] == '5')
            mat[5] = turn;

        else if (pos == 6 && mat[6] == '6')
            mat[6] = turn;

        else if (pos == 7 && mat[7] == '7')
            mat[7] = turn;

        else if (pos == 8 && mat[8] == '8')
            mat[8] = turn;

        else if (pos == 9 && mat[9] == '9')
            mat[9] = turn;

        else
        {
            cout<<"\t\tINVALID MOVE ";

            player--;
            cin.ignore();
            cin.get();
        }

        i=gameover();
        player++;

    }while(i==-1);

    grid();
    if(i==1)

        cout<<"\n\t\t==>\aPlayer "<<--player<<" win ";
    else
        cout<<"\n\t\t==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

int gameover()
{
    if (mat[1] == mat[2] && mat[2] == mat[3])
        return 1;

    else if (mat[4] == mat[5] && mat[5] == mat[6])
        return 1;

    else if (mat[7] == mat[8] && mat[8] == mat[9])
        return 1;

    else if (mat[1] == mat[4] && mat[4] == mat[7])
        return 1;

    else if (mat[2] == mat[5] && mat[5] == mat[8])
        return 1;

    else if (mat[3] == mat[6] && mat[6] == mat[9])
        return 1;

    else if (mat[1] == mat[5] && mat[5] == mat[9])
        return 1;

    else if (mat[3] == mat[5] && mat[5] == mat[7])
        return 1;

    else if (mat[1] != '1' && mat[2] != '2' && mat[3] != '3'
                    && mat[4] != '4' && mat[5] != '5' && mat[6] != '6'
                  && mat[7] != '7' && mat[8] != '8' && mat[9] != '9')

        return 0;

    else
        return -1;
}


void grid()
{
    system("cls");
    cout << "\t\tTic Tac Toe\n\n";

    cout << "\t\tPlayer 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "\t\t _________________" << endl;
    cout << "\t\t|     |     |     |" << endl;
    cout << "\t\t|  " << mat[1] << "  |  " << mat[2] << "  |  " << mat[3] <<"  |"<< endl;
    cout << "\t\t|_____|_____|_____|" << endl;
    cout << "\t\t|     |     |     |" << endl;
    cout << "\t\t|  " << mat[4] << "  |  " << mat[5] << "  |  " << mat[6] <<"  |"<< endl;
    cout << "\t\t|_____|_____|_____|" << endl;
    cout << "\t\t|     |     |     |" << endl;
    cout << "\t\t|  " << mat[7] << "  |  " << mat[8] << "  |  " << mat[9] <<"  |"<< endl;
    cout << "\t\t|_____|_____|_____|" << endl << endl;
}
