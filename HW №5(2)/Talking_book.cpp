#include "Talking_book.h"

Talking_book::Talking_book()
{
    tapes = 0;
}

Talking_book::Talking_book(Book a, Voice_recording b, int tapes) : Book(a), Voice_recording(b)
{
    this->tapes = tapes;
}

void Talking_book::setTapes(int tapes)
{
    this->tapes = tapes;
}

int Talking_book::getTapes() const
{
    return tapes;
}

void Talking_book::showTalkingBook() const
{
    cout << "--------------------------------------------------------------------------\n";
    cout << "\tTALKING BOOK\n";
    Book::showBook();
    Voice_recording::showVoiceRecording();
    cout << "Tapes: " << tapes << endl;
    cout << "--------------------------------------------------------------------------\n";
}