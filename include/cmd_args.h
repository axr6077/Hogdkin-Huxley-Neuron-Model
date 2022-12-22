#ifndef CMD_ARGS_H
#define CMD_ARGS_H

typedef struct CmdArgs {
	int num_dendrs;
	int num_comps;
} CmdArgs;

// print usage info
void usage (char *name);
// parse command line arguments
int parseArgs(CmdArgs *cmd_args, int argc, char **argv);

#endif
