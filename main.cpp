#include <iostream>
#include<cmath>
void start_game();
void end_game(int score);
using namespace std;


int main()
{
    string user_entry;
   cout <<"*****************Your are WELCOME******************"<<endl;
   cout<<"Enter 'play' to Start the Game"<<endl;
   cin >> user_entry;
   if(user_entry == "play")
   {
       cout<<"Let's Start the Game!!";
       start_game();
   }
   else
   {
       cout<<"NO! NO! wrong input"<<endl;
       end_game(0);
   }
   return 0;
}
void start_game()
{
    char answer;
    int score = 0;
    cout<<endl;
    cout<<"Q.1)" "How much is 7 to the power 3??" <<endl;
    cout<<"A) 343"<<endl;
    cout<<"B) 564"<<endl;
    cout<<"C) 349"<<endl;
    cout<<"D) 549"<<endl;
    cout <<"Enter your ANSWER from A, B, C, D"<<endl;
    cin>>answer;
    if (answer == 'A')
    {
        cout <<"Congrulations!!!!"<<endl;
        score ++;
    }
    else
    {
        cout <<"SORRY!! your ANSWER is Wrong!!"<<endl;
    }
     cout<<"Q.2)" "Who is the Prime minister of India?" <<endl;
    cout<<"A) Rahul Gandhi"<<endl;
    cout<<"B) Sudha Murty"<<endl;
    cout<<"C) Mukesh Ambani"<<endl;
    cout<<"D) Naredra Modi"<<endl;
    cout <<"Enter your ANSWER from A, B, C, D"<<endl;
    cin>>answer;
    if (answer == 'D')
    {
        cout <<"Congrulations!!!!"<<endl;
        score ++;
    }
    else
    {
        cout <<"SORRY!! your ANSWER is Wrong!!"<<endl;
    }
      cout<<"Q.3)" "Who wrote ROMEO and JULITE???" <<endl;
    cout<<"A) Rabindranath Tagore"<<endl;
    cout<<"B) J K Rolling"<<endl;
    cout<<"C) William Shakespeare"<<endl;
    cout<<"D) Enid Blyton"<<endl;
    cout <<"Enter your ANSWER from A, B, C, D"<<endl;
    cin>>answer;
    if (answer == 'C')
    {
        cout <<"Congrulations!!!!"<<endl;
        score ++;
    }
    else
    {
        cout <<"SORRY!! your ANSWER is Wrong!!"<<endl;
    }
      cout<<"Q.4)" "Who is the President of INDIA??" <<endl;
    cout<<"A) K M Karriappa"<<endl;
    cout<<"B) Droupadi Murmu"<<endl;
    cout<<"C) Nirmala Sitaraman"<<endl;
    cout<<"D) Pranav Mukherjee"<<endl;
    cout <<"Enter your ANSWER from A, B, C, D"<<endl;
    cin>>answer;
    if (answer == 'B')
    {
        cout <<"Congrulations!!!!"<<endl;
        score ++;
    }
    else
    {
        cout <<"SORRY!! your ANSWER is Wrong!!"<<endl;
    }
       cout<<"Q.5)" "Who was the First Field Marshal OF India??" <<endl;
    cout<<"A) K M Karriappa"<<endl;
    cout<<"B) Bipin Ravat"<<endl;
    cout<<"C) Vivan Shergill"<<endl;
    cout<<"D) Sam Bahadur"<<endl;
    cout <<"Enter your ANSWER from A, B, C, D"<<endl;
    cin>>answer;
    if (answer == 'D')
    {
        cout <<"Congrulations!!!!"<<endl;
        score ++;
    }
    else
    {
        cout <<"SORRY!! your ANSWER is Wrong!!"<<endl;
    }
    cout<<"Q.6)" "Second Governor of Independent India???" <<endl;
    cout<<"A) Lord Mountbatten"<<endl;
    cout<<"B) Lord William Bentinck"<<endl;
    cout<<"C) Warren Hastings"<<endl;
    cout<<"D) Chakravarti Rajagopalachari"<<endl;
    cout <<"Enter your ANSWER from A, B, C, D"<<endl;
    cin>>answer;
    if (answer == 'D')
    {
        cout <<"Congrulations!!!!"<<endl;
        score ++;
    }
    else
    {
        cout <<"SORRY!! your ANSWER is Wrong!!"<<endl;
    }
    cout<<"Q.7)" "At what age Lord Krishna left the Earth??" <<endl;
    cout<<"A) 125 years, 7 months, and 2 days"<<endl;
    cout<<"B) 125 years, 7 months, and 6 days"<<endl;
    cout<<"C) 125 years, 7 months, and 5 days"<<endl;
    cout<<"D) 125 years, 7months, and 3 days"<<endl;
    cout <<"Enter your ANSWER from A, B, C, D"<<endl;
    cin>>answer;
    if (answer == 'B')
    {
        cout <<"Congrulations!!!!"<<endl;
        score ++;
    }
    else
    {
        cout <<"SORRY!! your ANSWER is Wrong!!"<<endl;
    }
    cout<<"Q.8)" "At What Age did Pitamah  Bhishma Dies??" <<endl;
    cout<<"A) 304 years"<<endl;
    cout<<"B) 303 years"<<endl;
    cout<<"C) 305 years"<<endl;
    cout<<"D) 306 years "<<endl;
    cout <<"Enter your ANSWER from A, B, C, D"<<endl;
    cin>>answer;
    if (answer == 'D')
    {
        cout <<"Congrulations!!!!"<<endl;
        score ++;
    }
    else
    {
        cout <<"SORRY!! your ANSWER is Wrong!!"<<endl;
    }
     cout<<"Q.9)" "Total land Area of India is ???" <<endl;
    cout<<"A) 3.968 million sq. km"<<endl;
    cout<<"B) 3.598 million sq. km"<<endl;
    cout<<"C) 3.287 million sq. km"<<endl;
    cout<<"D) 3.458 million sq. km "<<endl;
    cout <<"Enter your ANSWER from A, B, C, D"<<endl;
    cin>>answer;
    if (answer == 'C')
    {
        cout <<"Congrulations!!!!"<<endl;
        score ++;
    }
    else
    {
        cout <<"SORRY!! your ANSWER is Wrong!!"<<endl;
    }
     cout<<"Q.10)" "Shortest River of India ???" <<endl;
    cout<<"A) Sahibi River"<<endl;
    cout<<"B) Sharavati River"<<endl;
    cout<<"C) Venna River"<<endl;
    cout<<"D) Megha River"<<endl;
    cout <<"Enter your ANSWER from A, B, C, D"<<endl;
    cin>>answer;
    if (answer == 'A')
    {
        cout <<"Congrulations!!!!"<<endl;
        score ++;
    }
    else
    {
        cout <<"SORRY!! your ANSWER is Wrong!!"<<endl;
    }
    end_game(score);
}
void end_game(int score)
{
    cout <<"Thanks for Playing"<<endl;
    cout<<"Your Score is "<<score<<endl;
}
