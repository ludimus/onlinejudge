#include <iostream>
#include <vector>
using namespace std;

vector<int> primelist;

int numbers[50000];


void genprimelist()
{
    int i;
    int cpi,ni;
    int curprime;

    primelist.push_back(2);
    for (i=0;i<50000;i++) numbers[i]=1;
    numbers[0]=0;
    numbers[1]=0;
    numbers[2]=1;//prime

       cpi=0;
       while(cpi<3501){

        curprime=primelist.at(cpi);

        for(i=curprime*2;i<(50000);i=i+curprime){
            numbers[i]=0;
            }
        ni=curprime+1;
        while (numbers[ni]==0)ni++;
        primelist.push_back(ni);
        cpi++;
       }
}

int main()
{
 int i,n,curpos,q;
 vector<int> people;

 genprimelist();

 n=6;

 for(i=0;i<n;i++)
    people.push_back(i+1);
 curpos=0;
 for(i=0;i<n-1;i++){
    cout<< "curpos " << curpos << " curprime " << primelist.at(i) << endl;
    people.erase(people.begin()+((curpos+primelist.at(i)-1)%(n-i)));
    curpos=curpos%(n-1);
    for(q=0;q<people.size();q++) cout<< people.at(q) <<" ";
    cout<<endl;
    curpos=(curpos+(primelist.at(i))-1)%people.size();
        //cout<< people.at(0);
 }


return 0;
}
