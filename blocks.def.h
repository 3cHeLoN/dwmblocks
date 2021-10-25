//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "sb-news",     60,     1},
    {"", "sb-rain",     300,    2},
    {"", "sb-moon",     1800,   3},
    {"", "sb-cpu",      30,     4},
    {"", "sb-memory",   30,     5},
    {"", "sb-clock",    5,      6},
    {"", "sb-volume",   0,      7},
    {"", "sb-internet", 30,     8},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
//static char delim[] = " | ";
//static unsigned int delimLen = 5;
static char delim[] = " ";
static unsigned int delimLen = 5;
