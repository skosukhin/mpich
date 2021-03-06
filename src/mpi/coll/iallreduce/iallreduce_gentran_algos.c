/* -*- Mode: C; c-basic-offset:4 ; indent-tabs-mode:nil ; -*- */
/*
 *  (C) 2006 by Argonne National Laboratory.
 *  See COPYRIGHT in top-level directory.
 *
 *  Portions of this code were written by Intel Corporation.
 *  Copyright (C) 2011-2017 Intel Corporation.  Intel provides this material
 *  to Argonne National Laboratory subject to Software Grant and Corporate
 *   Contributor License Agreement dated February 8, 2012.
 */

#include "mpiimpl.h"

#include "tsp_gentran.h"

/* instantiate iallreduce recexch algorithms for the gentran transport */
#include "iallreduce_tsp_recexch_algos_prototypes.h"
#include "iallreduce_tsp_recexch_algos.h"
#include "iallreduce_tsp_recexch_algos_undef.h"

/* instantiate iallreduce tree algorithms for the gentran transport */
#include "iallreduce_tsp_tree_algos_prototypes.h"
#include "iallreduce_tsp_tree_algos.h"
#include "iallreduce_tsp_tree_algos_undef.h"

/* instantiate iallreduce ring algorithms for the gentran transport */
#include "iallreduce_tsp_ring_algos_prototypes.h"
#include "iallreduce_tsp_ring_algos.h"
#include "iallreduce_tsp_ring_algos_undef.h"

#include "iallreduce_tsp_recursive_exchange_common_prototypes.h"
#include "iallreduce_tsp_recursive_exchange_common.h"
#include "iallreduce_tsp_recursive_exchange_common_undef.h"

/* instantiate iallreduce recexch_reduce_scatter_recexch_allgatherv algorithms for the gentran transport */
#include "iallreduce_tsp_recexch_reduce_scatter_recexch_allgatherv_algos_prototypes.h"
#include "iallreduce_tsp_recexch_reduce_scatter_recexch_allgatherv_algos.h"
#include "iallreduce_tsp_recexch_reduce_scatter_recexch_allgatherv_algos_undef.h"

#include "tsp_undef.h"
