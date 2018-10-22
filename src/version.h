/*
 * version.h
 *
 *  Created on: Sep 17, 2018
 *      Author: meir
 */

#ifndef SRC_VERSION_H_
#define SRC_VERSION_H_

#define REDISEARCH_VERSION_MAJOR 0
#define REDISEARCH_VERSION_MINOR 1
#define REDISEARCH_VERSION_PATCH 0

#define REDISEARCH_MODULE_VERSION \
  (REDISEARCH_VERSION_MAJOR * 10000 + REDISEARCH_VERSION_MINOR * 100 + REDISEARCH_VERSION_PATCH)

/* API versions. */
#define REDISMODULE_APIVER_1 1

#endif /* SRC_VERSION_H_ */