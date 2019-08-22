#include "stdafx.h"
#include <mpi.h>
#include <cassert>
#include <random>
#include <iomanip>
#include <vector>
#include <iostream>
#include "Agent.h"
#include "Node.h"


Node *initialize_nodes(int N, int V, int net, int Inet)
{
	 /*
     Inet = 0   real network
     Inet = 1   random network with same degree distibution
     Inet = 2   random rewiring
	 Inet = 3   Levy Network
	 Inet = 4   Radial Network
     */
    Node *K = new Node[V];
    if (Inet == 0){
        Agent  *A = new Agent[N];
        char fileN[1024] = "networkSimulations/realNetwork.dat";
        FILE *f = fopen(fileN, "r"); // Binary File Home Work
        int k = 0;
        int v = 0;
        while (!feof(f))
        {
            int i, j;
            fscanf(f, "%d %d", &i, &j);
            K[i].work.push_back(k);
            K[j].home.push_back(k);
            k++;
        }
        return(K);
        
    } else if (Inet == 1){
        Agent  *A = new Agent[N];
        char fileN[1024] =  "networkSimulations/sameDistNet.dat";
        FILE *f = fopen(fileN, "r"); // Binary File Home Work
        int k = 0;
        int v = 0;
        while (!feof(f))
        {
            int i, j;
            fscanf(f, "%d %d", &i, &j);
            K[i].work.push_back(k);
            K[j].home.push_back(k);
            k++;
        }
        return(K);
        
    } else if (Inet == 2){
        Agent  *A = new Agent[N];
        char fileN[1024] =  "networkSimulations/realNetwork.dat";
        FILE *f = fopen(fileN, "r"); // Binary File Home Work
        int k = 0;
        int v = 0;
        while (!feof(f))
        {
            int i, j;
            fscanf(f, "%d %d", &i, &j);
            K[i].work.push_back(k);
            K[j].home.push_back(k);
            k++;
        }
        return(K);
    } else if (Inet == 3){
        Agent  *A = new Agent[N];
        char fileN[1024] =  "networkSimulations/levyNetwork.dat";
        FILE *f = fopen(fileN, "r"); // Binary File Home Work
        int k = 0;
        int v = 0;
        while (!feof(f))
        {
            int i, j;
            fscanf(f, "%d %d", &i, &j);
            K[i].work.push_back(k);
            K[j].home.push_back(k);
            k++;
        }
        return(K);
    } else if (Inet == 4){
        Agent  *A = new Agent[N];
        char fileN[1024] =  "networkSimulations/radialNetwork.dat";
        FILE *f = fopen(fileN, "r"); // Binary File Home Work
        int k = 0;
        int v = 0;
        while (!feof(f))
        {
            int i, j;
            fscanf(f, "%d %d", &i, &j);
            K[i].work.push_back(k);
            K[j].home.push_back(k);
            k++;
        }
        return(K);
    }
    
    for (int i = 0; i < V; i++)
    {
        K[i].Smosquito = 0;   //
        K[i].Emosquito = 0;
        K[i].Imosquito = 0;
        K[i].mosquito =  0;
        K[i].Amosquito = 0;
    }
    return(K);
}

