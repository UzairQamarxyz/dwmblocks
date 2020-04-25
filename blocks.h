//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"~/.cache/dwmbar/scripts/cmus.sh",              1,		20},

	{"~/.cache/dwmbar/scripts/network.sh",	        10,		0},
	
	{"~/.cache/dwmbar/scripts/battery.sh",		5,		0},

	{"~/.cache/dwmbar/scripts/volume.sh",		1,		10},

	{"~/.cache/dwmbar/scripts/time.sh",	        60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static const char * delim = "  ";
