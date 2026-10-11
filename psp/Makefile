TARGET = sdlpal

SOURCES  = . .. ../adplug ../sdl_compat ../libmad ../timidity ../native_midi

CFILES   = $(foreach dir, $(SOURCES), $(wildcard $(dir)/*.c))
CPPFILES = $(foreach dir, $(SOURCES), $(wildcard $(dir)/*.cpp))

OBJS = $(CFILES:.c=$(INTER).o) $(CPPFILES:.cpp=$(INTER).o)

PSPSDK = $(shell psp-config --pspsdk-path)

INCDIR = 
CFLAGS = -O2 -G0 -Wall -g -I$(PSPDEV)/psp/include/SDL3 -I$(PSPDEV)/psp/include/opus \
-DPSP=1 -Wno-incompatible-pointer-types -std=gnu99 -D_GNU_SOURCE -DHAVE_CONFIG_H -I../sdl_compat -I../timidity -I../ -I./

CXXFLAGS = $(CFLAGS) -fno-exceptions -fno-rtti -std=c++11 -I. -I../
ASFLAGS = $(CFLAGS)

LIBDIR =

LIBS =  -L$(PSPDEV)/psp/lib -lSDL3 -logg -lvorbis -lvorbisfile -lopus -lopusfile -lm -lGL -lpspvram -lpspaudio -lpspvfpu -lpspdisplay -lpspgu -lpspge -lpsphprm -lpspctrl -lpsppower -lpspdebug -lstdc++ -L$(PSPDEV)/psp/sdk/lib \
-lpspdebug -lpspgu -lpspctrl -lpspge -lpspdisplay -lpsphprm -lpspsdk -lpspaudio -lpspmp3 -lc \
-lpspirkeyb -lpsppower

EXTRA_TARGETS = EBOOT.PBP
PSP_EBOOT_TITLE = SDLPal
#PSP_EBOOT_ICON = icon0.png
#PSP_EBOOT_PIC1 = PIC1.png

BUILD_PRX = 1
PSP_FW_VERSION = 371
#PSP_LARGE_MEMORY=1 

include $(PSPSDK)/lib/build.mak
