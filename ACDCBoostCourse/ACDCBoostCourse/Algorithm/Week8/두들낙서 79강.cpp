#include <iostream>
#include <string>
using namespace std;

class Image {
public:
	operator string() {
		return "사진";
	}
};
class Message { // 부모 클래스
public:
	Message(int sendTime, string sendName) {
		this->sendTime = sendTime;
		this->sendName = sendName;
	}
	int GetSendTime() const { return sendTime; }
	string GetSendName() const { return sendName; }
	virtual string GetContent() const { return ""; }
private:
	string sendName;
	int sendTime;
};

class TextMessage : public Message{ // 상속
public:
	TextMessage(int sendTime, string sendName, string text) 
	: Message(sendTime, sendName) {
		this->text = text;
	}
	string GetText() const { return text; }
	string GetContent() const { return text; }
private:
	string text;

	
};
class ImageMessage : public Message{ // 상속
public:
	ImageMessage(int sendTime, string sendName, Image* image)
		: Message(sendTime, sendName), p_image(image) {}
	Image *GetImage() const { return p_image; }
	string GetContent() const{ return (string)*p_image; }

private:

	Image* p_image;
};
void printMessage(const Message &m) {
	cout << "보낸 시간 : " << m.GetSendTime() << endl;
	cout << "보낸 사람 : " << m.GetSendName() << endl;
	cout << "보낸 내용 : " << m.GetContent() << endl << endl;
}

int main() {
	Image* p_dogImage = new Image();
	Message* messages[2] = {
		new TextMessage(10, "두들", "안녕"),
		new ImageMessage(20, "두들", p_dogImage)
	};
	for (Message* m : messages) {
		printMessage(*m);
	}
	
}