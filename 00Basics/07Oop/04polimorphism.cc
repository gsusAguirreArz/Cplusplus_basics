#include <iostream>
#include <list>
using namespace std;

// polimorphism describes the hability of an object to have multiple forms
// mnethos with the same name but with different implemantation 

class YoutubeChannel{
    private:
        string Name;
        int SubscriberCount;
        list<string> PublishedVideoTitles;
    protected:
        string OwnerName;
        int ContentQuality;
    
    public:
        YoutubeChannel(string name, string owner, int subs){
            Name = name;
            OwnerName = owner;
            SubscriberCount = subs;
            ContentQuality = 0;
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
        void CheckAnalytics(){
            if (ContentQuality < 5){
                cout << getName() << " has abad quality content. " << endl;
            }else{
                cout << getName() << " has great quality content. " << endl;
            }
        }
};

class CookingYTChannel:public YoutubeChannel{
    public:
        CookingYTChannel(string name, string owner, int subs):YoutubeChannel(name, owner, subs){
        }
        void Practice(){
            cout << OwnerName << " practcing cooking, learning new recipes, experimenting with spices..." << endl;
            ContentQuality++;
        }

};

class SingersYTChannel:public YoutubeChannel{
    public:
        SingersYTChannel(string name, string owner, int subs):YoutubeChannel(name, owner, subs){
        }
        void Practice(){
            cout << OwnerName << " is practcing singing..." << endl;
            ContentQuality++;
        }

};


int main(){

    CookingYTChannel cookytchannel("AMys kitchen", "amy", 2000);
    SingersYTChannel singytchannel("johnsings", "john", 1000);

    cookytchannel.Practice();
    singytchannel.Practice();
    singytchannel.Practice();
    singytchannel.Practice();
    singytchannel.Practice();
    singytchannel.Practice();

    YoutubeChannel* yt1 = &cookytchannel;
    YoutubeChannel* yt2 = &singytchannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

    return 0;
}