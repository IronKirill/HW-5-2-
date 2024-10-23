#include "Voice_recording.h"

Voice_recording::Voice_recording()
{
    speaker = "undefined";
    duration = 0;
    recording_date = "undefined";
}

Voice_recording::Voice_recording(string speaker, int duration, string recording_date)
{
    this->speaker = speaker;
    this->duration = duration;
    this->recording_date = recording_date;
}

void Voice_recording::setSpeaker(string speaker)
{
    this->speaker = speaker;
}

void Voice_recording::setDuration(int duration)
{
    this->duration = duration;
}

void Voice_recording::setRecordingDate(string recording_date)
{
    this->recording_date = recording_date;
}

string Voice_recording::getSpeaker() const
{
    return speaker;
}

int Voice_recording::getDuration() const
{
    return duration;
}

string Voice_recording::getRecordingDate() const
{
    return recording_date;
}

void Voice_recording::showVoiceRecording() const
{
    cout << "Speaker: " << speaker << endl;
    cout << "Duration: " << duration << endl;
    cout << "Recording date: " << recording_date << endl;
    cout << "\n";
}