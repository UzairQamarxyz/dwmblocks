//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"$HOME/Scripts/dwmblocks/cmus.sh",              1,		20},

	{"$HOME/Scripts/dwmblocks/network.sh",	        10,		0},
	
	{"$HOME/Scripts/dwmblocks/volume.sh",		5,		0},

	{"$HOME/Scripts/dwmblocks/battery.sh",		1,		10},

	{"$HOME/Scripts/dwmblocks/time.sh",	        60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static const char * delim = "  ";
