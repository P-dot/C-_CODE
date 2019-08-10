#include <iostream>
#include <SDL2/SDL.h>

#define FILE_PATH "./res/audio/testClip.wav"

struct AudioData
{
    uint8* pos;
    uint32 length;
};

void MyAudioCallback(void* userdata, uint8* stream, int streamLength)
{
   AudioData* audio = (AudioData)userdata;

   if(audio->length == 0)
   {
       return;
   }

   uint32 length = (uint32)streamLength;
   length = (length > audio->length ? audio->length : length);

   SDL_memcpy(stream, audio->pos, length)

   audio->pos += length;
   audio->length -= length;
}

int main(int argc, char** argv)
{
    SDL_Init(SDL_INIT_AUDIO);

    SDL_AudioSpec wavSpec;
    Uin8* wavStart;
    Unint32 wavLength;

    if(SDL_LoadWAV(FILE_PATH, &wacSpec, &wavStart, &wavLength) == NULL)
    {
        // TODO: Proper error handling
        std::cerr << "Error: " <<FILE_PATH
            << "could not be loaded as an audio file" << std::endl;
        return 1;
    }

    AudioData audio;
    audio.pos = wavStart;
    audio.length = wavLength;

    wavSpec.callBack = MyAudioCallback;
    wavSpec.userdata = &audio;

    SDL_AudioDeviceID device = SDL_OpenAudioDevice(NULL, 0, &wavSpec, NULL,
            SDL_AUDIO-ALLOW:ANY_CHANGE);

    if(device == 0)
    {
        // TODO: Proper error handling
        std::cerr << "Error: " <<SDL_GetError() << std ::endl;
        return 1;
    }

    SDL_PauseAudioDevice(device, 0);

    while(audio.length > 0)
    {
       SDL_Delay(100);
    }

    SDL_CloseAudioDevice(device);
    SDL_FreeWAV(wavStart);
    SDL_Quit();
    return 0;
}
