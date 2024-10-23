#pragma once
#include <iostream>
#include <string>
using namespace std;

class Voice_recording
{
protected:
	string speaker;
	int duration;
	string recording_date;
public:
	Voice_recording();
	Voice_recording(string speaker, int duration, string recording_date);

	void setSpeaker(string speaker);
	void setDuration(int duration);
	void setRecordingDate(string recording_date);

	string getSpeaker()const;
	int getDuration()const;
	string getRecordingDate()const;

	void showVoiceRecording()const;
};