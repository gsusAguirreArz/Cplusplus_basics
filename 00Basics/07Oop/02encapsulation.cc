#include <iostream>
#include <list>
using namespace std;

// principle of encapsulation
// properties should not be public
// use methods to change data

class YoutubeChannel{
    private:
        string Name;
        string OwnerName;
        int SubscriberCount;
        list<string> PublishedVideoTitles;
    
    public:
        YoutubeChannel(string name, string owner, int subs){
            Name = name;
            OwnerName = owner;
            SubscriberCount = subs;
        }

        void GetInfo(){
            cout << "Name: " << getName() << endl;
            cout << "OwnerName: " << OwnerName << endl;
            cout << "SubscriberCount: " << SubscriberCount << endl;
            cout << "Videos: " << endl;
            for ( string videoTitle: PublishedVideoTitles){
                cout << videoTitle << endl;
            }
        }

        void Subscribe(){
            SubscriberCount++;
        }
        void unSubscribe(){
            if (SubscriberCount > 0)
                SubscriberCount--;
        }
        void publishVideo(string title){
            PublishedVideoTitles.push_back(title);
        }
        string getName(){
            return Name;
        }
        void setName(string name) {
            Name = name;
        }
};

int main() {

    YoutubeChannel ytChannel1("CodeBeauty", "Saldina", 1800);
    YoutubeChannel ytChannel2("AmySings", "Amy", 2000);

    ytChannel1.publishVideo("title1");
    ytChannel1.publishVideo("title2");
    ytChannel1.publishVideo("title3");

    ytChannel1.GetInfo();
    ytChannel1.Subscribe();
    ytChannel1.GetInfo();
    ytChannel1.unSubscribe();
    ytChannel1.GetInfo();
    ytChannel1.setName("laniakshopo");
    ytChannel1.GetInfo();

    // ytChannel2.GetInfo();


    return 0;
}