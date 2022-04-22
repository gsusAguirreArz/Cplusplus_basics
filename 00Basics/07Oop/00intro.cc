#include <iostream>
#include <list>
using namespace std;
// class is a tempalte ( user defined dtype)
// an object of that class is an instance of that object

class YoutubeChannel{
    public: // if not added you cant cahnge the attributes
        string Name;
        string OwnerName;
        int SubscriberCount;
        list<string> PublishedVideoTitles;
};

int main() {

    YoutubeChannel ytChannel;
    ytChannel.Name = "CodeBeauty";
    ytChannel.OwnerName = "Saldina";
    ytChannel.SubscriberCount = 1800;
    ytChannel.PublishedVideoTitles = {"title1", "title2", "title3"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscriberCount: " << ytChannel.SubscriberCount << endl;
    cout << "Videos: " << endl;
    for ( string videoTitle: ytChannel.PublishedVideoTitles){
        cout << videoTitle << endl;
    }


    return 0;
}