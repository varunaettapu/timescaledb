/*
 * This file and its contents are licensed under the Timescale License.
 * Please see the included NOTICE for copyright information and
 * LICENSE-TIMESCALE for a copy of the license.
 */

#ifndef TIMESCALEDB_DECOMPRESS_CHUNK_EXEC_H
#define TIMESCALEDB_DECOMPRESS_CHUNK_EXEC_H

#include <postgres.h>
#include <nodes/bitmapset.h>
#include <nodes/extensible.h>
#include <nodes/relation.h>

#include "compression/compression.h"

extern Node *decompress_chunk_state_create(CustomScan *cscan);

#endif /* TIMESCALEDB_DECOMPRESS_CHUNK_EXEC_H */