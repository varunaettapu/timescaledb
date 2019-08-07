/*
 * This file and its contents are licensed under the Timescale License.
 * Please see the included NOTICE for copyright information and
 * LICENSE-TIMESCALE for a copy of the license.
 */
#ifndef TIMESCALEDB_TSL_COMPRESSION_CREATE_H
#define TIMESCALEDB_TSL_COMPRESSION_CREATE_H
#include <postgres.h>
#include <nodes/parsenodes.h>

#include "with_clause_parser.h"
#include "hypertable.h"

bool tsl_process_compress_table(AlterTableCmd *cmd, Hypertable *ht,
								WithClauseResult *with_clause_options);

#endif /* TIMESCALEDB_TSL_COMPRESSION_CREATE_H */