#include <string>
#include <vector>

using namespace std;

int fisrt_per(vector<int> answers) 
{
    int count = 0;
    int corrects = 0;
    while(true)
    {
        for(int i = 1; i<= 5; i++)
        {
            if(answers.size() <= count) return corrects;
            else
            {
               if(answers[count] == i) corrects++; 
            }
            
            count++;
        }
        
    }

}


int second_per(vector<int> answers)
{
    int count = 0;
    int corrects = 0;
    int even_element = 1;
    while (true)
    {
        if( answers.size() <= count) return corrects;
        else if(count % 2 == 0)
        {
            if( 2 == answers[count]) corrects++;
        }
        else
        {
            if(even_element == answers[count] ) corrects;
            if(even_element == 1) even_element+2;
            else if(even_element == 5) even_element = 1;
            else even_element++;
        }
        count++;
    }
    
}

int third_per(vector<int> answers)
{
    int count = 0;
    int corrects = 0;
    vector<int> pattern = {3,3,1,1,2,2,4,4,5,5};
    while (true)
    {
        for(int i = 0; i< 10; i++)
        {
            if(answers.size() <= count) return corrects;
            else if(answers[count] == pattern[i]) corrects++;
            count++;
        }
    }
    
}

vector<int> ret_max(vector<int> sc)
{
    int mx = 0;
    vector<int> answer;
    for(int i = 0; i<sc.size(); i++)
    {
        if(mx < sc[i])
        {
            mx = sc[i];
            answer.clear();
            answer.push_back(i+1);
        }
        else if(mx == sc[i])
        {
            answer.push_back(i+1);
        }

    }
    return answer;
}

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> scores = {fisrt_per(answers), second_per(answers), third_per(answers)};
    return ret_max(scores);
}