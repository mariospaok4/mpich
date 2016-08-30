/* -*- Mode: C ; c-basic-offset:4 ; indent-tabs-mode:nil ; -*- */
/*
 *  (C) 2006 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 *  Portions of this code were written by Intel Corporation.
 *  Copyright (C) 2011-2016 Intel Corporation.  Intel provides this material
 *  to Argonne National Laboratory subject to Software Grant and Corporate
 *  Contributor License Agreement dated February 8, 2012.
 */
#ifndef CH4_COLL_H_INCLUDED
#define CH4_COLL_H_INCLUDED

#include "ch4_impl.h"
#include "ch4r_proc.h"

MPL_STATIC_INLINE_PREFIX int MPIDI_Barrier(MPIR_Comm * comm, MPIR_Errflag_t * errflag)
{
    return MPIDI_NM_mpi_barrier(comm, errflag);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Bcast(void *buffer, int count, MPI_Datatype datatype,
                                         int root, MPIR_Comm * comm, MPIR_Errflag_t * errflag)
{
    return MPIDI_NM_mpi_bcast(buffer, count, datatype, root, comm, errflag);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Allreduce(const void *sendbuf, void *recvbuf, int count,
                                             MPI_Datatype datatype, MPI_Op op, MPIR_Comm * comm,
                                             MPIR_Errflag_t * errflag)
{
    return MPIDI_NM_mpi_allreduce(sendbuf, recvbuf, count, datatype, op, comm, errflag);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Allgather(const void *sendbuf, int sendcount,
                                             MPI_Datatype sendtype, void *recvbuf, int recvcount,
                                             MPI_Datatype recvtype, MPIR_Comm * comm,
                                             MPIR_Errflag_t * errflag)
{
    return MPIDI_NM_mpi_allgather(sendbuf, sendcount, sendtype, recvbuf,
                                  recvcount, recvtype, comm, errflag);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Allgatherv(const void *sendbuf, int sendcount,
                                              MPI_Datatype sendtype, void *recvbuf,
                                              const int *recvcounts, const int *displs,
                                              MPI_Datatype recvtype, MPIR_Comm * comm,
                                              MPIR_Errflag_t * errflag)
{
    return MPIDI_NM_mpi_allgatherv(sendbuf, sendcount, sendtype, recvbuf,
                                   recvcounts, displs, recvtype, comm, errflag);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Scatter(const void *sendbuf, int sendcount,
                                           MPI_Datatype sendtype, void *recvbuf, int recvcount,
                                           MPI_Datatype recvtype, int root, MPIR_Comm * comm,
                                           MPIR_Errflag_t * errflag)
{
    return MPIDI_NM_mpi_scatter(sendbuf, sendcount, sendtype, recvbuf,
                                recvcount, recvtype, root, comm, errflag);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Scatterv(const void *sendbuf, const int *sendcounts,
                                            const int *displs, MPI_Datatype sendtype,
                                            void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                            int root, MPIR_Comm * comm_ptr,
                                            MPIR_Errflag_t * errflag)
{
    return MPIDI_NM_mpi_scatterv(sendbuf, sendcounts, displs, sendtype,
                                 recvbuf, recvcount, recvtype, root, comm_ptr, errflag);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Gather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                          void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                          int root, MPIR_Comm * comm, MPIR_Errflag_t * errflag)
{
    return MPIDI_NM_mpi_gather(sendbuf, sendcount, sendtype, recvbuf,
                               recvcount, recvtype, root, comm, errflag);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Gatherv(const void *sendbuf, int sendcount,
                                           MPI_Datatype sendtype, void *recvbuf,
                                           const int *recvcounts, const int *displs,
                                           MPI_Datatype recvtype, int root, MPIR_Comm * comm,
                                           MPIR_Errflag_t * errflag)
{
    return MPIDI_NM_mpi_gatherv(sendbuf, sendcount, sendtype, recvbuf,
                                recvcounts, displs, recvtype, root, comm, errflag);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Alltoall(const void *sendbuf, int sendcount,
                                            MPI_Datatype sendtype, void *recvbuf, int recvcount,
                                            MPI_Datatype recvtype, MPIR_Comm * comm,
                                            MPIR_Errflag_t * errflag)
{
    return MPIDI_NM_mpi_alltoall(sendbuf, sendcount, sendtype, recvbuf,
                                 recvcount, recvtype, comm, errflag);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Alltoallv(const void *sendbuf, const int *sendcounts,
                                             const int *sdispls, MPI_Datatype sendtype,
                                             void *recvbuf, const int *recvcounts,
                                             const int *rdispls, MPI_Datatype recvtype,
                                             MPIR_Comm * comm, MPIR_Errflag_t * errflag)
{
    return MPIDI_NM_mpi_alltoallv(sendbuf, sendcounts, sdispls, sendtype,
                                  recvbuf, recvcounts, rdispls, recvtype, comm, errflag);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Alltoallw(const void *sendbuf, const int sendcounts[],
                                             const int sdispls[], const MPI_Datatype sendtypes[],
                                             void *recvbuf, const int recvcounts[],
                                             const int rdispls[], const MPI_Datatype recvtypes[],
                                             MPIR_Comm * comm_ptr, MPIR_Errflag_t * errflag)
{
    return MPIDI_NM_mpi_alltoallw(sendbuf, sendcounts, sdispls, sendtypes,
                                  recvbuf, recvcounts, rdispls, recvtypes, comm_ptr, errflag);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Reduce(const void *sendbuf, void *recvbuf,
                                          int count, MPI_Datatype datatype, MPI_Op op,
                                          int root, MPIR_Comm * comm_ptr, MPIR_Errflag_t * errflag)
{
    return MPIDI_NM_mpi_reduce(sendbuf, recvbuf, count, datatype, op, root, comm_ptr, errflag);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Reduce_scatter(const void *sendbuf, void *recvbuf,
                                                  const int recvcounts[], MPI_Datatype datatype,
                                                  MPI_Op op, MPIR_Comm * comm_ptr,
                                                  MPIR_Errflag_t * errflag)
{
    return MPIDI_NM_mpi_reduce_scatter(sendbuf, recvbuf, recvcounts, datatype, op, comm_ptr,
                                       errflag);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Reduce_scatter_block(const void *sendbuf, void *recvbuf,
                                                        int recvcount, MPI_Datatype datatype,
                                                        MPI_Op op, MPIR_Comm * comm_ptr,
                                                        MPIR_Errflag_t * errflag)
{
    return MPIDI_NM_mpi_reduce_scatter_block(sendbuf, recvbuf, recvcount,
                                             datatype, op, comm_ptr, errflag);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Scan(const void *sendbuf, void *recvbuf, int count,
                                        MPI_Datatype datatype, MPI_Op op, MPIR_Comm * comm,
                                        MPIR_Errflag_t * errflag)
{
    return MPIDI_NM_mpi_scan(sendbuf, recvbuf, count, datatype, op, comm, errflag);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Exscan(const void *sendbuf, void *recvbuf, int count,
                                          MPI_Datatype datatype, MPI_Op op, MPIR_Comm * comm,
                                          MPIR_Errflag_t * errflag)
{
    return MPIDI_NM_mpi_exscan(sendbuf, recvbuf, count, datatype, op, comm, errflag);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Neighbor_allgather(const void *sendbuf, int sendcount,
                                                      MPI_Datatype sendtype, void *recvbuf,
                                                      int recvcount, MPI_Datatype recvtype,
                                                      MPIR_Comm * comm)
{
    return MPIDI_NM_mpi_neighbor_allgather(sendbuf, sendcount, sendtype,
                                           recvbuf, recvcount, recvtype, comm);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Neighbor_allgatherv(const void *sendbuf, int sendcount,
                                                       MPI_Datatype sendtype, void *recvbuf,
                                                       const int *recvcounts, const int *displs,
                                                       MPI_Datatype recvtype, MPIR_Comm * comm)
{
    return MPIDI_NM_mpi_neighbor_allgatherv(sendbuf, sendcount, sendtype,
                                            recvbuf, recvcounts, displs, recvtype, comm);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Neighbor_alltoallv(const void *sendbuf, const int *sendcounts,
                                                      const int *sdispls, MPI_Datatype sendtype,
                                                      void *recvbuf, const int *recvcounts,
                                                      const int *rdispls, MPI_Datatype recvtype,
                                                      MPIR_Comm * comm)
{
    return MPIDI_NM_mpi_neighbor_alltoallv(sendbuf, sendcounts, sdispls,
                                           sendtype, recvbuf, recvcounts, rdispls, recvtype, comm);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Neighbor_alltoallw(const void *sendbuf, const int *sendcounts,
                                                      const MPI_Aint * sdispls,
                                                      const MPI_Datatype * sendtypes, void *recvbuf,
                                                      const int *recvcounts,
                                                      const MPI_Aint * rdispls,
                                                      const MPI_Datatype * recvtypes,
                                                      MPIR_Comm * comm)
{
    return MPIDI_NM_mpi_neighbor_alltoallw(sendbuf, sendcounts, sdispls,
                                           sendtypes, recvbuf, recvcounts, rdispls, recvtypes,
                                           comm);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Neighbor_alltoall(const void *sendbuf, int sendcount,
                                                     MPI_Datatype sendtype, void *recvbuf,
                                                     int recvcount, MPI_Datatype recvtype,
                                                     MPIR_Comm * comm)
{
    return MPIDI_NM_mpi_neighbor_alltoall(sendbuf, sendcount, sendtype,
                                          recvbuf, recvcount, recvtype, comm);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Ineighbor_allgather(const void *sendbuf, int sendcount,
                                                       MPI_Datatype sendtype, void *recvbuf,
                                                       int recvcount, MPI_Datatype recvtype,
                                                       MPIR_Comm * comm, MPI_Request * req)
{
    return MPIDI_NM_mpi_ineighbor_allgather(sendbuf, sendcount, sendtype,
                                            recvbuf, recvcount, recvtype, comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Ineighbor_allgatherv(const void *sendbuf, int sendcount,
                                                        MPI_Datatype sendtype, void *recvbuf,
                                                        const int *recvcounts, const int *displs,
                                                        MPI_Datatype recvtype, MPIR_Comm * comm,
                                                        MPI_Request * req)
{
    return MPIDI_NM_mpi_ineighbor_allgatherv(sendbuf, sendcount, sendtype,
                                             recvbuf, recvcounts, displs, recvtype, comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Ineighbor_alltoall(const void *sendbuf, int sendcount,
                                                      MPI_Datatype sendtype, void *recvbuf,
                                                      int recvcount, MPI_Datatype recvtype,
                                                      MPIR_Comm * comm, MPI_Request * req)
{
    return MPIDI_NM_mpi_ineighbor_alltoall(sendbuf, sendcount, sendtype,
                                           recvbuf, recvcount, recvtype, comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Ineighbor_alltoallv(const void *sendbuf, const int *sendcounts,
                                                       const int *sdispls, MPI_Datatype sendtype,
                                                       void *recvbuf, const int *recvcounts,
                                                       const int *rdispls, MPI_Datatype recvtype,
                                                       MPIR_Comm * comm, MPI_Request * req)
{
    return MPIDI_NM_mpi_ineighbor_alltoallv(sendbuf, sendcounts, sdispls,
                                            sendtype, recvbuf, recvcounts, rdispls, recvtype, comm,
                                            req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Ineighbor_alltoallw(const void *sendbuf, const int *sendcounts,
                                                       const MPI_Aint * sdispls,
                                                       const MPI_Datatype * sendtypes,
                                                       void *recvbuf, const int *recvcounts,
                                                       const MPI_Aint * rdispls,
                                                       const MPI_Datatype * recvtypes,
                                                       MPIR_Comm * comm, MPI_Request * req)
{
    return MPIDI_NM_mpi_ineighbor_alltoallw(sendbuf, sendcounts, sdispls,
                                            sendtypes, recvbuf, recvcounts, rdispls, recvtypes,
                                            comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Ibarrier(MPIR_Comm * comm, MPI_Request * req)
{
    return MPIDI_NM_mpi_ibarrier(comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Ibcast(void *buffer, int count, MPI_Datatype datatype,
                                          int root, MPIR_Comm * comm, MPI_Request * req)
{
    return MPIDI_NM_mpi_ibcast(buffer, count, datatype, root, comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Iallgather(const void *sendbuf, int sendcount,
                                              MPI_Datatype sendtype, void *recvbuf, int recvcount,
                                              MPI_Datatype recvtype, MPIR_Comm * comm,
                                              MPI_Request * req)
{
    return MPIDI_NM_mpi_iallgather(sendbuf, sendcount, sendtype, recvbuf,
                                   recvcount, recvtype, comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Iallgatherv(const void *sendbuf, int sendcount,
                                               MPI_Datatype sendtype, void *recvbuf,
                                               const int *recvcounts, const int *displs,
                                               MPI_Datatype recvtype, MPIR_Comm * comm,
                                               MPI_Request * req)
{
    return MPIDI_NM_mpi_iallgatherv(sendbuf, sendcount, sendtype, recvbuf,
                                    recvcounts, displs, recvtype, comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Iallreduce(const void *sendbuf, void *recvbuf, int count,
                                              MPI_Datatype datatype, MPI_Op op, MPIR_Comm * comm,
                                              MPI_Request * req)
{
    return MPIDI_NM_mpi_iallreduce(sendbuf, recvbuf, count, datatype, op, comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Ialltoall(const void *sendbuf, int sendcount,
                                             MPI_Datatype sendtype, void *recvbuf, int recvcount,
                                             MPI_Datatype recvtype, MPIR_Comm * comm,
                                             MPI_Request * req)
{
    return MPIDI_NM_mpi_ialltoall(sendbuf, sendcount, sendtype, recvbuf,
                                  recvcount, recvtype, comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Ialltoallv(const void *sendbuf, const int *sendcounts,
                                              const int *sdispls, MPI_Datatype sendtype,
                                              void *recvbuf, const int *recvcounts,
                                              const int *rdispls, MPI_Datatype recvtype,
                                              MPIR_Comm * comm, MPI_Request * req)
{
    return MPIDI_NM_mpi_ialltoallv(sendbuf, sendcounts, sdispls, sendtype,
                                   recvbuf, recvcounts, rdispls, recvtype, comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Ialltoallw(const void *sendbuf, const int *sendcounts,
                                              const int *sdispls, const MPI_Datatype * sendtypes,
                                              void *recvbuf, const int *recvcounts,
                                              const int *rdispls, const MPI_Datatype * recvtypes,
                                              MPIR_Comm * comm, MPI_Request * req)
{
    return MPIDI_NM_mpi_ialltoallw(sendbuf, sendcounts, sdispls, sendtypes,
                                   recvbuf, recvcounts, rdispls, recvtypes, comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Iexscan(const void *sendbuf, void *recvbuf, int count,
                                           MPI_Datatype datatype, MPI_Op op, MPIR_Comm * comm,
                                           MPI_Request * req)
{
    return MPIDI_NM_mpi_iexscan(sendbuf, recvbuf, count, datatype, op, comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Igather(const void *sendbuf, int sendcount,
                                           MPI_Datatype sendtype, void *recvbuf, int recvcount,
                                           MPI_Datatype recvtype, int root, MPIR_Comm * comm,
                                           MPI_Request * req)
{
    return MPIDI_NM_mpi_igather(sendbuf, sendcount, sendtype, recvbuf,
                                recvcount, recvtype, root, comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Igatherv(const void *sendbuf, int sendcount,
                                            MPI_Datatype sendtype, void *recvbuf,
                                            const int *recvcounts, const int *displs,
                                            MPI_Datatype recvtype, int root, MPIR_Comm * comm,
                                            MPI_Request * req)
{
    return MPIDI_NM_mpi_igatherv(sendbuf, sendcount, sendtype, recvbuf,
                                 recvcounts, displs, recvtype, root, comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Ireduce_scatter_block(const void *sendbuf, void *recvbuf,
                                                         int recvcount, MPI_Datatype datatype,
                                                         MPI_Op op, MPIR_Comm * comm,
                                                         MPI_Request * req)
{
    return MPIDI_NM_mpi_ireduce_scatter_block(sendbuf, recvbuf, recvcount, datatype, op, comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Ireduce_scatter(const void *sendbuf, void *recvbuf,
                                                   const int *recvcounts, MPI_Datatype datatype,
                                                   MPI_Op op, MPIR_Comm * comm, MPI_Request * req)
{
    return MPIDI_NM_mpi_ireduce_scatter(sendbuf, recvbuf, recvcounts, datatype, op, comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Ireduce(const void *sendbuf, void *recvbuf, int count,
                                           MPI_Datatype datatype, MPI_Op op, int root,
                                           MPIR_Comm * comm, MPI_Request * req)
{
    return MPIDI_NM_mpi_ireduce(sendbuf, recvbuf, count, datatype, op, root, comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Iscan(const void *sendbuf, void *recvbuf, int count,
                                         MPI_Datatype datatype, MPI_Op op, MPIR_Comm * comm,
                                         MPI_Request * req)
{
    return MPIDI_NM_mpi_iscan(sendbuf, recvbuf, count, datatype, op, comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Iscatter(const void *sendbuf, int sendcount,
                                            MPI_Datatype sendtype, void *recvbuf, int recvcount,
                                            MPI_Datatype recvtype, int root, MPIR_Comm * comm,
                                            MPI_Request * req)
{
    return MPIDI_NM_mpi_iscatter(sendbuf, sendcount, sendtype, recvbuf,
                                 recvcount, recvtype, root, comm, req);
}

MPL_STATIC_INLINE_PREFIX int MPIDI_Iscatterv(const void *sendbuf, const int *sendcounts,
                                             const int *displs, MPI_Datatype sendtype,
                                             void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                             int root, MPIR_Comm * comm, MPI_Request * req)
{
    return MPIDI_NM_mpi_iscatterv(sendbuf, sendcounts, displs, sendtype,
                                  recvbuf, recvcount, recvtype, root, comm, req);
}

#endif /* CH4_COLL_H_INCLUDED */
