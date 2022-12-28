//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "dwm-cmus", 1, 20},

    {"", "dwm-network", 1, 0},

    {"", "dwm-battery", 1, 0},

    {"", "dwm-volume", 1, 10},

    {"", "dwm-date", 1, 0},

    {"", "dwm-time", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 10;
