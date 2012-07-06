#ifndef MERGE_RUNNER_H
#define MERGE_RUNNER_H

#include <assert.h>
#include <stdlib.h>

#include <cprops/hashtable.h>
#include <omp.h>

#include <commons/file_utils.h>
#include <containers/list.h>
#include <commons/log.h>
#include <bioformats/vcf/vcf_batch.h>
#include <bioformats/vcf/vcf_filters.h>
#include <bioformats/vcf/vcf_file.h>

#include "hpg_vcf_tools_utils.h"
#include "merge.h"

#define MIN(X,Y) ((X) < (Y) ? (X) : (Y))

int run_merge(shared_options_data_t *shared_options_data, merge_options_data_t *options_data);

#endif
