#ifndef TEXTURE_H
#define TEXTURE_H

#include "../headers/header.h"
#include "../headers/upng.h" // Corrected include statement

/* Functions-variables-structs for textures */

/**
 * struct texture_s - struct for the textures
 * @width: texture width
 * @height: texture height
 * @texture_buffer: pointer to texture buffer
 * @upngTexture: pointer to upng buffer
 *
 */

typedef struct texture_s
{
    int width;
    int height;
    color_t *texture_buffer;
    upng_t *upngTexture;
} texture_t;

texture_t wallTextures[NUM_TEXTURES];

/* Functions-variables-structs for walls */

void renderWall();
extern void freeWallTextures();
extern void WallTexturesready();
extern void wallTextuers();
#endif // TEXTURE_H