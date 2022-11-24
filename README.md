# Hogdkin-Huxley-Neuron-Model

Sequential and Parallel implementation of the Hogdkin-Huxley Neuron Model to analyze performance gains
varying runtime and algorithmic parameters. 

## Introduction

The program utilizes the Message Passing Interface (Open MPI) to implement parallel computation for
the given complex computational problem and analyzes the effect of problem parameters on the performance. 
A sequential implementation is also in place that extends for the parallelization. 
Parametric simulations with different algorithmic variables like dendrites, compartments per dendrite,
load imbalance and allocated processors were performed to analyze performance attributes in the parallel model. 
The simulation jobs were performed on the SPORC Research Cluster at Kate Gleason College of Engineering, 
Rochester Institute of Technology with high performance hardware.
