/*
 * Copyright (c) 2013 Todd Mortimer
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TERMINAL_H_
#define TERMINAL_H_

/* #define DEBUGMSGS 0 */
#ifdef DEBUGMSGS
#define PRINT(args...) do { fprintf(args); } while (0)
#else
#define PRINT(args...) do { } while (0)
#endif

#define NIPRINT(args...)
//#define NIPRINT(args...) fprintf(args)

#define BETWEEN(x, low, high) ((x) >= (low) && (x) <= (high))

#define TERM_SUCCESS 0
#define TERM_FAILURE 1

#define READ_BUFFER_SIZE 5000
#define CHARACTER_BUFFER 10
#define MIN_FONT_SIZE 4

// sym = f0d3 // z = 0x007a
#define KEYCODE_BB_ALT_KEY 0xF0E9
#define KEYCODE_BB_SYM_KEY 0xF0D3

void rescreen();
void setup_screen_size(int w, int h);
void set_screen_cols(int cols);

int init();
void uninit();

#define SDL_BLACK       {.r = 0,   .g = 0,   .b = 0}
#define SDL_RED         {.r = 205, .g = 0,   .b = 0}
#define SDL_GREEN       {.r = 0,   .g = 205, .b = 0}
#define SDL_YELLOW      {.r = 205, .g = 205, .b = 0}
#define SDL_BLUE        {.r = 0,   .g = 0,   .b = 238}
#define SDL_MAGENTA     {.r = 205, .g = 0,   .b = 205}
#define SDL_CYAN        {.r = 0,   .g = 205, .b = 205}
#define SDL_GRAY        {.r = 229, .g = 229, .b = 229}
#define SDL_BT_GRAY     {.r = 127, .g = 127, .b = 127}
#define SDL_BT_RED      {.r = 255, .g = 0,   .b = 0}
#define SDL_BT_GREEN    {.r = 0,   .g = 255, .b = 0}
#define SDL_BT_YELLOW   {.r = 255, .g = 255, .b = 0}
#define SDL_BT_BLUE     {.r = 92,  .g = 92,  .b = 255}
#define SDL_BT_MAGENTA  {.r = 255, .g = 0,   .b = 255}
#define SDL_BT_CYAN     {.r = 0,   .g = 255, .b = 255}
#define SDL_WHITE       {.r = 255, .g = 255, .b = 255}

#define SYMKEY_BORDER_SIZE 4
#define SYMMENU_FRET_SIZE 8
#define SYMMENU_FRET       {.r = 130, .g = 130, .b = 130}
#define SYMMENU_BORDER     {.r = 90,  .g = 90,  .b = 90}
#define SYMMENU_BACKGROUND {.r = 38,  .g = 38,  .b = 38}
#define SYMMENU_CORNER     {.r = 153, .g = 153, .b = 153}
#define SYMMENU_FONT       {.r = 255, .g = 255, .b = 255}

#endif /* TERMINAL_H_ */
