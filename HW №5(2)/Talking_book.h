#pragma once
#include "Book.h"
#include "Voice_recording.h"

class Talking_book : public Book, public Voice_recording
{
protected:
	int tapes;
public:
	Talking_book();
	Talking_book(Book a, Voice_recording b, int tapes);

	void setTapes(int tapes);

	int getTapes()const;

	void showTalkingBook()const;
};