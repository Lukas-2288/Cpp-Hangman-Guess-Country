#include <iostream>

using namespace std;

int main()
{
    
        
    cout<< "Welcome to hangman.. guess a country name"<<endl;

    cout<<"Each letter is represented by a star"<<endl;

    cout<<"You have to type only one letter in one try"<<endl;

    cout<<"You have 5 tries to try and guess the word"<<endl;
    cout<<"------------------------------------------"<<endl;
 
    string words[]=
    {
    "japan",
    "turkey",
    "nepal",
    "malaysia",
    "philippines",
    "australia",
    "america",
    "ethiopia",
    "oman",
    "indonesia",
};
    char letter;
    int remaining_guesses = 5;
    
    srand(time(NULL));
    int n=rand()% 10;
    string word=words[n];
    

    string guessed_letters(word.length(),'*');
    cout<<guessed_letters<<endl;
    
    
    while(remaining_guesses>0 && guessed_letters !=word){
    
        cout << "Guess a letter: ";
        cin >> letter;

        bool found = false;
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] == letter)
            {
                guessed_letters[i] = letter;
                found = true;

            }
 
        }
    if (found)    //by default it is read as true 
        {
            cout<<"\nYou found a letter! Isn't that exciting!"<<endl;
            cout<<"You have "<< remaining_guesses<<" guesses left.\n"<<endl;
        }
        else
        {
            remaining_guesses--;
            cout << "Whoops that letter isn't in there!"<< endl;
            cout<< "You have "<< remaining_guesses<<" guesses left.\n"<<endl;
                
        }

        cout << guessed_letters << endl;
    }

    if (guessed_letters == word){
        cout << "Yeah, you got it!" << endl;
    }
    else
    {
            cout << "Wrong!\n Correct word is: " <<word<< endl;
        
    }

    return 0;
}


