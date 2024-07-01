#include <iostream>
#include <mpi.h>

int main(){

  int size, rank;
  int sendbuff, recvbuff;

  int tag = 0;

  MPI_Init(NULL, NULL);

  MPI_Comm_size(MPI_COMM_WORLD, &size);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);

  sendbuff = rank;
  MPI_Status stat;

  if(size != 2) MPI_Abort(MPI_COMM_WORLD, 1);

  if(rank == 0){
    MPI_Sendrecv_replace(&sendbuff, 1, MPI_INT, 1, tag, 1, tag, MPI_COMM_WORLD, &stat);
   // MPI_Send(&sendbuff, 1, MPI_INT, 1, tag, MPI_COMM_WORLD);
   // MPI_Recv(&recvbuff, 1, MPI_INT, 1, tag, MPI_COMM_WORLD, &stat);
  }
  else if(rank == 1){
    // Este es el orden correcto
    MPI_Sendrecv_replace(&sendbuff, 1, MPI_INT, 0, tag, 0, tag, MPI_COMM_WORLD, &stat);
   // MPI_Send(&sendbuff, 1, MPI_INT, 0, tag, MPI_COMM_WORLD);
   // MPI_Recv(&recvbuff, 1, MPI_INT, 0, tag, MPI_COMM_WORLD, &stat); 
  }

  std::cout << "I'm: " << rank << " and my recv is: " << sendbuff << std::endl;

  MPI_Finalize();

  return 0;
}

