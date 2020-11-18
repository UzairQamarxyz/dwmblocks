//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "$HOME/.local/bin/dwmblocks/cmus.sh", 0, 20},

    {"", "$HOME/.local/bin/dwmblocks/network.sh", 0, 0},

    {"", "$HOME/.local/bin/dwmblocks/battery.sh", 0, 0},

    {"", "$HOME/.local/bin/dwmblocks/volume.sh", 0, 10},

    {"", "$HOME/.local/bin/dwmblocks/date.sh", 0, 0},

    {"", "$HOME/.local/bin/dwmblocks/time.sh", 0, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
