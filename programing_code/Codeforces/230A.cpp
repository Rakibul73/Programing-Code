
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/



#include <bits/stdc++.h> 
using namespace std;
struct Game
{
    int x,y;
};
bool comparegame(Game g1, Game g2) {
    if(g1.x < g2.x) {
        return true;
    }
    return false;
}

int main() {
    int n, s;
    cin>>s>>n;
    Game game[n];
    for (int i = 0; i < n; i++)
    {
        cin>>game[i].x>>game[i].y;
    }
    sort(game, game+n, comparegame);
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        if (game[i].x < s) {
            s = s+ game[i].y;
        }
        else {
            p = 0;
            break;
        }
    }
    if (p==1) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    

    return 0;
}