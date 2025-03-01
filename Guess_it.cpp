#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

int generateRabdomnumber();
int getPlayerGuess();
void answer( int guess, int secret);
char question();
void main_programme();

int main()
{
    int ti = 0;       // số lần chơi
    while(question() != 'N')    // hỏi xem có muốn chơi tiếp không
    {
        ti += 1;
        cout<<"     Game: "<<ti<<'\n';
        main_programme();
    }


}

void rand(unsigned int seed);

int generateRabdomnumber()
{
    srand(time(0));
    return rand()%100 + 1; // sinh so ngau nhien
}

int getPlayerGuess() // nguoi choi nhap so
{
    int number;
    cout<<"Enter your gues (1...100): ";
    cin>>number;
    return number;
}

void answer( int guess, int secret) // kiem tra xem hai so bang nhau chua
{
    if(guess > secret)
    {
        cout<<"Your number is too big"<<'\n';
    }
    else if(guess < secret)
    {
        cout<<"Your number is too small"<<'\n';
    }
    else
    {
        cout<<"Congratulation! You win."<<'\n';
    }
}

char question()
{
    cout<<"Do you want to play?"<<'\n';
     cout<<"Your answer: ";
    char ans;
    cin>>ans;

    return ans;
}

void main_programme()
{
    int secret_number = generateRabdomnumber();
    int guess = 0, times = 0;

    do
    {
        guess = getPlayerGuess();
        times += 1;// số lần đoán
        cout<<"Number your guesses is "<<times<<'\n';
        answer(guess, secret_number);
    }
    while(guess != secret_number);
    cout<<"Your score "<< 100 - times<<'\n';
}


