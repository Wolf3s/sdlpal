#ifndef PAL_CONFIG_H
# define PAL_CONFIG_H

# define PAL_HAS_JOYSTICKS     1
# define PAL_HAS_MP3           1
# define PAL_HAS_OGG           1
# define PAL_HAS_OPUS          1

# define PAL_PREFIX            ""
# define PAL_SAVE_PREFIX       ""

# if SDL_VERSION_ATLEAST(2,0,0)
#  define PAL_VIDEO_INIT_FLAGS  (SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE)
# else
#  define PAL_VIDEO_INIT_FLAGS  (SDL_SWSURFACE | (gConfig.fFullScreen ? SDL_FULLSCREEN : 0))
# endif

# define PAL_SDL_INIT_FLAGS	(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_JOYSTICK)
# define PAL_SCALE_SCREEN     TRUE

# define PAL_PLATFORM         "PSP"
# define PAL_CREDIT           "156692474, Wolf3s & SDLPal Team"
# define PAL_PORTYEAR         "2010-2026"

# define PAL_FILESYSTEM_IGNORE_CASE         1
# define PAL_HAS_PLATFORM_SPECIFIC_UTILS    1
# define PAL_HAS_PLATFORM_STARTUP           1

# define PAL_FORCE_UPDATE_ON_PALETTE_SET    1

# include <strings.h>

// For "struct timeval tv" of VIDEO_SaveScreenshot
# include <pspkernel.h>

# define printf pspDebugScreenPrintf
# define PAL_FATAL_OUTPUT(s) screenPrintf(s)

#endif
