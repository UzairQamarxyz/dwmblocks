//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"$HOME/.local/bin/dwmblocks/cmus.sh",              1,		20},

	{"$HOME/.local/bin/dwmblocks/network.sh",	        10,		0},
	
	{"$HOME/.local/bin/dwmblocks/battery.sh",		5,		0},

	{"$HOME/.local/bin/dwmblocks/volume.sh",		1,		10},

	{"$HOME/.local/bin/dwmblocks/time.sh",	        60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static const char * delim = "  ";
