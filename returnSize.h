#include "stdafx.h"
#include <mpi.h>
#include <cassert>
#include <random>
#include <iomanip>
#include <vector>
#include <iostream>



void returnSize(int& V, int& N, int net, int Inet)
{
    
    /*
     Inet = 0   real network
     Inet = 1   random network with same degree distibution
     Inet = 2   random rewiring
	 Inet = 3   Levy Network
	 Inet = 4   Radial Network
     */
    if (Inet == 0){
        char fileN[1024] =  "networkSimulations/realNetwork.dat";
        FILE *f = fopen(fileN, "r");
        while (!feof(f))
        {
            N += 1;
            int i, j;
            fscanf(f, "%d %d", &i, &j);
            if (i > V)
                V = i;
            if (j > V)
                V = j;
        }
        V++;
        fclose(f);
    } else if (Inet == 1){
        char fileN1[1024];
        sprintf(fileN1, "networkSimulations/sameDistNet.dat");
        FILE *f1 = fopen(fileN1, "r"); // Binary File Home Work
        // Create the network from File
        while (!feof(f1))
        {
            N += 1;
            int i, j;
            fscanf(f1, "%d %d", &i, &j);
            if (i > V)
                V = i;
            if (j > V)
                V = j;
        }
        V++;
        fclose(f1);
    } else if (Inet == 2){
        char fileN[1024] =  "networkSimulations/realNetwork.dat";
        FILE *f = fopen(fileN, "r");
        while (!feof(f))
        {
            N += 1;
            int i, j;
            fscanf(f, "%d %d", &i, &j);
            if (i > V)
                V = i;
            if (j > V)
                V = j;
        }
        V++;
        fclose(f);
        
    } else if (Inet == 3){
        char fileN[1024] =  "networkSimulations/levyNetwork.dat";
        FILE *f = fopen(fileN, "r");
        while (!feof(f))
        {
            N += 1;
            int i, j;

            fscanf(f, "%d %d", &i, &j);
            if (i > V)
            V = i;
            if (j > V)
            V = j;
        }
        V++;
        fclose(f);
    } else if (Inet == 4){
        char fileN[1024] =  "networkSimulations/radialNetwork.dat";
        FILE *f = fopen(fileN, "r");
        while (!feof(f))
        {
            N += 1;
            int i, j;

            fscanf(f, "%d %d", &i, &j);
			
			
            if (i > V)
            V = i;
            if (j > V)
            V = j;
        }
        V++;
        fclose(f);
	}
	
}
