

#include <iostream>

using namespace std;

int main()
{
    int play1,play2,count1=0,count2=0;
    char condition='y';
    cout<<"choice number as below shown for your choice accordingly"<<endl<<endl;
    cout<<"1 for paper"<<endl;
    cout<<"2 for scissor"<<endl;
    cout<<"3 for stone"<<endl;

    while(condition=='y'||condition=='Y')
    {
       cout<<endl<<"give us your choice 1: ";
    cin>>play1;
     cout<<"give us your choice 2: ";
    cin>>play2;
    if(play1>3||play2>3||play1<1||play2<1)
    {
        cout<<"you give wrong inputs give within 1--3"<<endl;
        continue;
    }
    if(play1>play2)
    {
        if(play1==3&&play2==1)
        {
            cout<<"wow! player 2 you got point";
            count2++;
        }
        else
        {
                  cout<<"wow! player 1 you got point";
                  count1++;
        }
    }
    else if(play2>play1)
    {
        if(play1==1&&play2==3)
        {
                   cout<<"wow! player 1 you got point";
                   count1++;
 
        }
        else
        {
                  cout<<"wow! player 2 you got point";
                  count2++;
   
        }
    }
    else
    cout<<"Hey you both have tie so no one can get any point";
     cout<<endl<<"DO YOU WANT TO CONTINUE GAME Y/N: ";
    cin>>condition;
    
    }cout<<endl;
    cout<<"Score of player 1 :-"<<count1<<endl<<"Score of player2:-"<<count2<<endl;
    if(count1>count2)
    cout<<"CONGRATULATIONS!!!!! PLAYER 1 YOU WON THE GAME.........";
    else if(count2>count1)
    cout<<"CONGRATULATIONS!!!!! PLAYER 2 YOU WON THE GAME.........";
    else
    cout<<"HEY!!!BROOOOO IT'S TIE";
    
    return 0;
}
