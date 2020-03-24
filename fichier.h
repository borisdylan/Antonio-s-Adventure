#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_getenv.h>

typedef struct
  {
    SDL_Surface *imageD[3];
    SDL_Surface *imageG[3];
    SDL_Rect positionE;
    int direction;
  }Entite;
typedef struct
  {
    SDL_Surface *imageD[3];
     SDL_Surface *imageG[3];
    SDL_Rect positionP;
    int nb_score;
    int nb_vie;
    int direction;
  }Perso;

typedef struct
  {
    SDL_Surface *background;
    SDL_Rect positionb;
  }Back;
