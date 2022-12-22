#ifndef PLOT_H
#define PLOT_H	

typefef struct PlotInfo {
	int sim_time; 
	double int_step; 
	int num_comps;
	int num_dendrs;
	double exec_time;
	int slaves;
} PlotInfo;

void plotData(PlotInfo *pinfo, char *data_name, char *image_name);

#endif
