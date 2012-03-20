#ifndef PACKAGELIST_H
#define PACKAGELIST_H

// libsolv
#include "solv/queue.h"

// hawkey
#include "package.h"
#include "sack.h"
#include "types.h"

PackageList packagelist_create(void);
PackageList packagelist_of_obsoletes(Sack sack, Package pkg);
void packagelist_free(PackageList plist);
int packagelist_count(PackageList plist);
Package packagelist_get(PackageList plist, int index);
void packagelist_push(PackageList plist, Package pkg);

PackageListIter packagelist_iter_create(PackageList plist);
void packagelist_iter_free(PackageListIter iter);
Package packagelist_iter_next(PackageListIter iter);

#endif // PACKAGELIST_H