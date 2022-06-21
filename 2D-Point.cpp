#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    string ipath;
    cout<<"Enter Input File Path";
    cin>>ipath;
    ifstream IFile;
    IFile.open(ipath);
    string line;
    int count=0;
    while (getline(IFile, line))
        count++;
    IFile.close();
    IFile.open(ipath);
    float ar[count][2];
    int i=0,j=0;
    while(IFile>>ar[i][j])
    {
        if(j==1)
        {
            i++;
            j=0;
        }
        else j++;
    }
    IFile.close();
    vector< pair <float,float> > vect;
    for (int m = 0; m < count; m++)
    {
        vect.push_back(make_pair(sqrt(((ar[m][0]*ar[m][0])+(ar[m][1]*ar[m][1]))),m));
    }
    sort(vect.begin(),vect.end());
    cout<<endl;
    string opath;
    cout<<"Enter Output File Path";
    cin>>opath;
    ofstream OFile(opath);
    for (int i=0; i<count; i++)
    {
        for (int j=0; j<2; j++)
        {
            OFile << ar[(int)vect[i].second][j] << " ";
        }
        OFile<<"\t\t"<<vect[i].first;
        OFile<<endl;
    }
    return 0;
}