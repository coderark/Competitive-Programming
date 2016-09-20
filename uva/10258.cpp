#include<bits/stdc++.h>
using namespace std;

struct team{
        int id, nums, penalty;
        bool submitted;
        vector<int> prob;
        vector<bool> solved;
        team(): nums(0), penalty(0), submitted(false)
        {
            prob.resize(10, 0);
            solved.resize(10, false);
        }
};

bool comp(team a, team b){
    if(!a.submitted){
        return false;
    }
    if(!b.submitted){
        return true;
    }
    if(a.nums==b.nums){
        if(a.penalty==b.penalty){
            return a.id<b.id;
        }
        return a.penalty<b.penalty;
    }
    return a.nums>b.nums;
}

int main(){
    int t;
    string in;
    cin>>t;
    cin.ignore(100, '\n');
    cin.ignore(100, '\n');
    while(t--){
        vector<team> sbd(101);
        int id, problem, tim;
        char res;
        while(cin.peek()!='\n' && cin.peek()!=-1){
            cin>>id>>problem>>tim>>res;
            cin.ignore(100, '\n');
            sbd[id].id=id;
            sbd[id].submitted=true;
            if(!sbd[id].solved[problem] && res=='C'){
                sbd[id].nums++;
                sbd[id].prob[problem]+=tim;
                sbd[id].penalty+=sbd[id].prob[problem];
                sbd[id].solved[problem]=true;
                //cout<<id<<" "<<sbd[id].prob[problem]<<endl;
            }
            else if(!sbd[id].solved[problem] && res=='I'){
                sbd[id].prob[problem]+=20;
                //cout<<id<<" "<<sbd[id].prob[problem]<<endl;
            }
        }
        cin.ignore(100, '\n');
        sort(sbd.begin(), sbd.end(), comp);
        int i=0;
        while(sbd[i].submitted){
            cout<<sbd[i].id<<" "<<sbd[i].nums<<" "<<sbd[i].penalty<<endl;
            i++;
        }
        if(t){
            cout<<endl;
        }
    }
    return 0;
}
