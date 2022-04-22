#include <iostream>
#include <list>
using namespace std;

// principle of encapsulation
// properties should not be public
// use methods to change data

class YoutubeChannel{
    private:
        string Name;
        // string OwnerName;
        int SubscriberCount;
        list<string> PublishedVideoTitles;
    protected: // to give acces on derived objects!
        string OwnerName;
    
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

// create a vvery specific yt channel

class CookingYTChannel:public YoutubeChannel{
    public:
        CookingYTChannel(string name, string owner, int subs):YoutubeChannel(name, owner, subs){
        }
        void Practice(){
            cout << OwnerName << " practcing cooking, learning new recipes, experimenting with spices..." << endl;
        }

};

int main(){

    CookingYTChannel cookytchannel("AMys kitchen", "amy", 2000);
    cookytchannel.publishVideo("APple pie");
    cookytchannel.publishVideo("APple pie 2");
    cookytchannel.GetInfo();

    cookytchannel.Practice();

    //YoutubeChannel ytchannel("laniakashopo", "jesus", 2000); // u canonot use practice here

    CookingYTChannel cookytchannel2("laniakashopo", "jesus", 2000);
    cookytchannel2.Practice();

    return 0;
}