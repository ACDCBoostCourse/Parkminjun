﻿#include <iostream>
#include <string>
using namespace std;

class Image {
public:
	operator string() {
		return "사진";
	}
};
class Message {
public:
	Message(int sendTime, string sendName) {
		this->sendTime = sendTime;
		this->sendName = sendName;
	}
	int GetSendTime() const { return sendTime; }
	string GetSendName() const { return sendName; }
private:
	string sendName;
	int sendTime;
};

class TextMessage : public Message{
public:
	TextMessage(int sendTime, string sendName, string text) 
	: Message(sendTime, sendName) {
		this->text = text;
	}
	string GetText() const { return text; }
private:
	string text;

	
};
class ImageMessage : public Message{
public:
	ImageMessage(int sendTime, string sendName, Image *image)
	: Message(sendTime, sendName){
		this->image = image;
	}
	Image *GetImage() const { return image; }

private:

	Image* image;
};
int main() {
	Image* p_dogImage = new Image();
	TextMessage *hello = new TextMessage(10, "두들", "안녕");
	ImageMessage* dog = new ImageMessage(20, "두들", p_dogImage);

	cout << "보낸 시간 : " << hello->GetSendTime()<< endl;
	cout << "보낸 사람 : " << hello->GetSendName() << endl;
	cout << "보낸 내용 : " << hello->GetText() << endl << endl;

	cout << "보낸 시간 : " << dog->GetSendTime() << endl;
	cout << "보낸 사람 : " << dog->GetSendName() << endl;
	cout << "보낸 내용 : " << (string)*dog->GetImage() << endl;

	delete hello;
	delete dog;
	delete p_dogImage;
}