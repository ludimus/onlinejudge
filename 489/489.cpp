#include <iostream>
#include <set>
#include <string>
#include <cstdio>


using namespace std;

set<char> W;
set<char> W2;
set<char> FG;
set<char>::iterator it;


void printsets(){



  cout << "W contains:";
  for ( it=W.begin() ; it != W.end(); it++ )
    cout << " " << *it;
    cout<<endl;

    cout << "G contains:";
  for ( it=FG.begin() ; it != FG.end(); it++ )
    cout << " " << *it;
    cout<<"("<<FG.size()<<")"<<endl;

}

int main()
{
   int r,i;

   string solution,guesses;

 //  freopen("489.in","r",stdin);
   cin>>r;
   while(r!=-1)
   {
       cout<<"Round "<<r<<endl;
       W.clear();
       W2.clear();
       FG.clear();

       cin>>solution;
       //insert unique chars in W
       for(i=0;i<solution.size();i++){
        W.insert(solution[i]);
        W2.insert(solution[i]);
       }
    //   printsets();

       cin>>guesses;
       for(i=0;i<guesses.size();i++){
         //  cout<<guesses[i];
           it=W2.find(guesses[i]);
           if(it!=W2.end())W.erase(guesses[i]);
              else FG.insert(guesses[i]);
           if(FG.size()==7)i=guesses.size();
       }
      // printsets();



      // printsets();
       if (W.size()==0) cout<<"You win."<<endl;
       else if (FG.size()<7) cout<<"You chickened out."<<endl;
            else cout<<"You lose."<<endl;
       cin>>r;


   }
    return 0;
}
