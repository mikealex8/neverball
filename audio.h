#ifndef AUDIO_H
#define AUDIO_H

/*---------------------------------------------------------------------------*/

#define AUD_MENU   1
#define AUD_START  2
#define AUD_READY  3
#define AUD_SET    4
#define AUD_GO     5
#define AUD_BALL   6
#define AUD_BUMP   7
#define AUD_COIN   8
#define AUD_TICK   9
#define AUD_TOCK  10
#define AUD_JUMP  11
#define AUD_GOAL  12
#define AUD_SCORE 13
#define AUD_FALL  14
#define AUD_TIME  15
#define AUD_OVER  16
#define AUD_COUNT 17

/*---------------------------------------------------------------------------*/

#ifdef _WIN32
#define AUD_BUFF_HI 4096
#define AUD_BUFF_LO 2048
#else
#define AUD_BUFF_HI 2048
#define AUD_BUFF_LO 1024
#endif

/*---------------------------------------------------------------------------*/

int  audio_init(int, int);
void audio_play(int, float);
void audio_free(void);

void audio_music_play(const char *);
void audio_music_fade(float);
void audio_music_stop(void);

/*---------------------------------------------------------------------------*/

#endif
