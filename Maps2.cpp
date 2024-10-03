#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;
void insertmps(map<string, vector<string> > &crmp)
{
    crmp["kaushal"]={{"aisha"}};
    crmp["yug"]={{"aisha","himani","mona lisa"}};
    map<string, vector<string> >:: iterator itr;
    for(itr=crmp.begin();itr!=crmp.end();itr++)
    {
        cout<<(*itr).first<<" : ";
        for(string s:(*itr).second)
        {
            cout<<s<<" , ";
        }
        cout<<"\n";
    }
}
 
void mps()
{
    map<string, vector<string> > crmp;
    insertmps(crmp);
}

int main() {   
    mps();
    // mps(marks);
    // for (const auto& entry : marks) {
    //     cout << entry.first << " = " << entry.second << "\n";
    // }
    
    return 0;
}
