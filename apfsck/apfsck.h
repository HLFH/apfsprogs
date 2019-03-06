/*
 *  apfsprogs/apfsck/apfsck.h
 *
 * Copyright (C) 2018 Ernesto A. Fernández <ernesto.mnd.fernandez@gmail.com>
 */

#ifndef _APFSCK_H
#define _APFSCK_H

/* Declarations for global variables */
extern unsigned int options;		/* Command line options */
extern struct super_block *sb;		/* Filesystem superblock */
extern struct volume_superblock *vsb;	/* Volume superblock */
extern int fd;				/* File descriptor for the device */

/* Option flags */
#define	OPT_REPORT_CRASH	1 /* Report on-disk signs of a past crash */
#define OPT_REPORT_UNKNOWN	2 /* Report unknown or unsupported features */
#define OPT_REPORT_WEIRD	4 /* Report issues that may not be corruption */

extern __attribute__((noreturn, format(printf, 2, 3)))
		void report(const char *context, const char *message, ...);
extern void report_crash(const char *context);
extern void report_unknown(const char *feature);
extern void report_weird(const char *context);

#endif	/* _APFSCK_H */
