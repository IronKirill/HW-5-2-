#include "Book.h"
#include "Voice_recording.h"
#include "Talking_book.h"

int main()
{
	Book a("Alex", "1st Edition", "01/01/2000", 123456789);
	a.showBook();

	Book a2("Nick", "2st Edition", "01/01/2002", 987654321);

	Voice_recording b2("Jason", 120, "01/01/2003");

	Voice_recording b("Bob", 60, "01/01/2001");
	b.showVoiceRecording();

	Talking_book c(a2, b2, 500);
	c.showTalkingBook();
}