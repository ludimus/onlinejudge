#include <iostream>
#include <cstdio>
#include <cstring>
#include <stdlib.h>

// assume 31 days 12 months = 372;

using namespace std;





int main()
{
    int ncases;
    int casenum=0;
    int d1,d2;
    char line [100];
    char date1 [100];
    char date2 [100];
    char *dd;
    char *mm;
    char *yyyy;
    char * pch;

   // freopen("11219.in","r",stdin);
    gets(line);
    sscanf(line,"%d",&ncases);
    while(ncases--)
    {
        casenum++;
        gets(line);
        gets(date1);
        gets(date2);
        pch=strtok(date1,"/");
        dd=pch;
        pch = strtok (NULL, "/");
        mm=pch;
        pch = strtok (NULL, "/");
        yyyy=pch;
        d1=atoi(yyyy)*372+atoi(mm)*31+atoi(dd);
        pch=strtok(date2,"/");
        dd=pch;
        pch = strtok (NULL, "/");
        mm=pch;
        pch = strtok (NULL, "/");
        yyyy=pch;
        d2=atoi(yyyy)*372+atoi(mm)*31+atoi(dd);

        cout<<"Case #"<<casenum<<": ";
        if(d2>d1) cout<<"Invalid birth date"<<endl;
        else if((d1-d2)>=(131*372))cout<<"Check birth date"<<endl;
          else cout<<(d1-d2)/372<<endl;


    }

    return 0;
}
