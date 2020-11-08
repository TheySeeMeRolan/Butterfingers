//
// Created by ro on 2020/11/07.
//

#include <algorithm>
#include <string>
#include "Log.h"

const vector<int> &Log::getScores() const {
    return scores;
}

const vector<string> &Log::getTeamNames() const {
    return teamNames;
}

void Log::AddTeams(vector<Team *> teams) {
    vector<  Team*  >::iterator team_it = teams.begin();

    for(team_it= teams.begin(); team_it!= teams.end(); ++team_it)
    {
        teamNames.push_back((*team_it)->getTeamResources()->getCompany());

    }
}

void Log::addScores(vector<int> inPoints) {

    int counter =0;
    vector<  int  >::iterator it = scores.begin();

    for(it= scores.begin(); it!= scores.end(); ++it)
    {
       *it = *it + inPoints.at(counter);
        counter ++;
    }


}

Log::Log()
{
    bestCarScore = -999;
    companyWithBestCar = "";
    scores = {0,0,0,0,0,0,0,0,0,0};
    cout<<"Constructed a Log "<< endl;

}

void Log::printStandings()
{
    cout<<setw(22)<<""<< "> > > > > > > > CHAMPIONSHIP LOG < < < < < < < <"<< endl;

    vector<string> teamsPos;
    vector<int> scorePos = scores;
    vector<int> scoreReset = scores;
    sort(scorePos.begin(),scorePos.end());


    int place = 1;
    int pos = -1;
    int counter = 0;




    vector<  int  >::iterator it = scores.begin();
    vector<  int  >::reverse_iterator rit = scorePos.rbegin();

    for(rit= scorePos.rbegin(); rit!= scorePos.rend(); ++rit)
    {
        pos = -1;
        counter = 0;

        for(it= scores.begin(); it!= scores.end(); ++it)
        {
            if (*rit==*it)
            {
                (*it)++;
                pos = counter;
                string placeS = "#";
                string pointS = "Points:";
                placeS.append(to_string(place));
                pointS.append(to_string(*rit));
                cout<<setw(22)<<""<< "TEAM " << left<<setw(3)<<placeS<<" - - - - "<<setw(10)<< pointS<<" - - - - "<< teamNames[pos] << endl;
                place++;

                break;
            }
            counter ++;

        }

    }


    cout<<setw(22)<<""<< "> > > > > > > > END OF CHAMP LOG < < < < < < < <"<< endl;
    scores = scoreReset;



}

void Log::printFinalStandings()
{


    vector<string> teamsPos;
    vector<int> scorePos = scores;
    vector<int> scoreReset = scores;
    sort(scorePos.begin(),scorePos.end());


    int place = 1;
    int pos = -1;
    int counter = 0;
    string WINNER = "";
    int wPOINTS ;



    vector<  int  >::iterator it = scores.begin();
    vector<  int  >::reverse_iterator rit = scorePos.rbegin();

    for(rit= scorePos.rbegin(); rit!= scorePos.rend(); ++rit)
    {
        pos = -1;
        counter = 0;

        for(it= scores.begin(); it!= scores.end(); ++it)
        {
            if (*rit==*it)
            {

                (*it)++;
                pos = counter;

                if(place==1)
                {
                    cout<< "\U0001F3C6"<<"\U0001F3C6"<<"\U0001F3C6"<< "\U0001F3C6"<<"\U0001F3C6"<<"\U0001F3C6"<< "\U0001F3C6"<<"\U0001F3C6"<<"\U0001F3C6"
                        <<" WINNER OF THE DRIVERS CHAMPIONSHIP: " <<teamNames[pos]<<" "
                        <<"\U0001F3C6""\U0001F3C6""\U0001F3C6""\U0001F3C6""\U0001F3C6""\U0001F3C6""\U0001F3C6""\U0001F3C6""\U0001F3C6" <<endl;
                    cout<< "\U0001F527"<<"\U0001F527"<<"\U0001F527"<< "\U0001F527"<<"\U0001F527"<<"\U0001F527"<< "\U0001F527"<<"\U0001F527"<<"\U0001F527"
                        <<" WINNER OF THE CONSTRUCTORS CHAMPIONSHIP: " <<companyWithBestCar<<" "
                        <<"\U0001F527""\U0001F527""\U0001F527""\U0001F527""\U0001F527""\U0001F527""\U0001F527""\U0001F527""\U0001F527" <<endl;

                    cout<<"" "============================ FINAL CHAMPIONSHIP STANDINGS ============================"<< endl;

                }
                string placeS = "#";
                string pointS = "Points:";
                placeS.append(to_string(place));
                pointS.append(to_string(*rit));
                cout<< setw(17) <<""<< "TEAM " << left<<setw(3)<<placeS<<" - - - - "<<setw(10)<< pointS<<" - - - - "<< teamNames[pos] << endl;
                place++;


                break;
            }
            counter ++;

        }

    }


    cout<< "======================================================================================"<< endl;
    scores = scoreReset;





}

void Log::saveBestCarData(tuple<string, int> inT)
{
if (get<1>(inT)>bestCarScore)
{
    bestCarScore = get<1>(inT);
    companyWithBestCar = get<0>(inT);
}

}
