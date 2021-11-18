/* user and group to drop privileges to */
static const char *user  = "noot";
static const char *group = "noot";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#000",     /* after initialization */
	[INPUT] =  "#565656",   /* during input */
	[FAILED] = "#d10407",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
