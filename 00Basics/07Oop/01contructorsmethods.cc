#include <iostream>
#include <list>
using namespace std;

// contructors have the same name as the class and do not have a return type

class YoutubeChannel{
    public:
        string Name;
        string OwnerName;
        int SubscriberCount;
        list<string> PublishedVideoTitles;
    
    // constructor
    YoutubeChannel(string name, string owner, int subs){
        Name = name;
        OwnerName = owner;
        SubscriberCount = subs;
    }

    //class methods
    void GetInfo(){
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscriberCount: " << SubscriberCount << endl;
        cout << "Videos: " << endl;
        for ( string videoTitle: PublishedVideoTitles){
            cout << videoTitle << endl;
        }
    }
};

int main() {

    YoutubeChannel ytChannel1("CodeBeauty", "Saldina", 1800);
    YoutubeChannel ytChannel2("AmySings", "Amy", 2000);
    ytChannel1.PublishedVideoTitles.push_back("vtitle1");
    ytChannel1.PublishedVideoTitles.push_back("vtitle2");
    ytChannel1.PublishedVideoTitles.push_front("vtitle3");

    ytChannel1.GetInfo();
    ytChannel2.GetInfo();


    return 0;
}