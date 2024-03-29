# Assessing the interplay between human mobility and mosquito borne diseases in urban environments

We share the code we used in Massaro et al. "Assessing the interplay between human mobility and mosquito borne diseases in urban environments" (2019).

You can find a simpliefied version of the code here https://github.com/emanuelemassaro/mosquitoes

The code is written in c++ and use MPI programs in a single machine to parallel process the code. You can run the code from a `unix` terminal in the following way

`mpicxx -o main1 main1.cpp Node.cpp Agent.cpp -std=gnu++11`

`-dmSL main1 mpirun -np 10 ./mainreal 1 2014 5`

10 ## Number of cores you want to use

1  ## 0 Mobile phone data, 1 random model, 2 levy model, 3 radiation model

5  ## Number of runs for each couple of parameters `xv` and `br`

### Few considerations:

##### The main is the file `main.cpp` that calls the different functions

##### `epidemic.h` contains the epidemiological model for both mosquitoes and humans

##### `mobiliy.h` contains the mobility dynamics for humans agents

##### You can change the values of number of mosquitoes per person `xv` and the bite rate `br` in the file `main.cpp` lines `61` and `62`.



