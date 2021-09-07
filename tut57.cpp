#include<iostream>
using namespace std;

class CodewithDevi{
    protected:
        string title;
        float rating;
    public:
        CodewithDevi(string t, rating r){
            title=t;
            rating=r;
        }
        virtual void display(){};
};
class CodewithDeviVideo:public CodewithDevi{
    float videoLength;
    public:
        CodewithDevi(string t, float r, flaot vl):CodewithDevi(t,r){
            videolength=vl;
        }
        void display(){
            cout<<"This is an amazing video with title"<<title<<endl;
            cout<<"This is an amazing video with rating"<<rating<<endl;
            cout<<"This is an amazing video with length"<<length<<endl;
        }
};
class CodewithDeviText: public CodewithDevi{
    int words;
    public:
        CodewithDeviText(string t, float r, float wc):CodewithDevi(t,r){
            words=wc;
        }
        void display(){
            cout<<"This is an amazing video with title"<<title<<endl;
            cout<<"This is an amazing video with rating"<<rating<<endl;
            cout<<"This is an amazing video with words"<<words<<endl;
        }
};
int main(){
    string title;
    float rating, vlen;
    int words;

    //video
    title="Django tutorial";
    vlen=4.56;
    rating=4.89;
    CodewithDeviVideo djVideo(title,rating,vlen);

    //text
    title="Django tutorial text";
    words=433;
    rating=4.19;
    CodewithDeviText djText(title,rating,words);

    CodewithDevi* tut[2];
    tut[0]=&djVideo;
    tut[1]=&djText;

    tut[0]->display();
    tut[1]->display();
    return 0;
}