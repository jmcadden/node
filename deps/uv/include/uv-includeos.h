#ifndef UV_INCLUDEOS_H
#define UV_INCLUDEOS_H

#include "uv-threadpool.h"

#include <sys/socket.h>

//#define SO_RCVBUF 0
//#define SO_SNDBUF 0

#define UV_PLATFORM_SEM_T int

#define UV_ONCE_INIT { 0, NULL }

#define UV_PLATFORM_LOOP_FIELDS                                               \
  void* ep;                                                                   \

typedef struct {} pthread_once_t;

typedef struct { const char* d_name;} uv__dirent_t;

typedef struct {} orig_termios;

struct termios {};


/*
 * Define constants based on RFC 883, RFC 1034, RFC 1035
 */
#define NS_PACKETSZ	512	/*%< default UDP packet size */
#define NS_MAXDNAME	1025	/*%< maximum domain name */
#define NS_MAXMSG	65535	/*%< maximum message size */
#define NS_MAXCDNAME	255	/*%< maximum compressed domain name */
#define NS_MAXLABEL	63	/*%< maximum length of domain label */
#define NS_HFIXEDSZ	12	/*%< #/bytes of fixed data in header */
#define NS_QFIXEDSZ	4	/*%< #/bytes of fixed data in query */
#define NS_RRFIXEDSZ	10	/*%< #/bytes of fixed data in r record */
#define NS_INT32SZ	4	/*%< #/bytes of data in a uint32_t */
#define NS_INT16SZ	2	/*%< #/bytes of data in a uint16_t */
#define NS_INT8SZ	1	/*%< #/bytes of data in a uint8_t */
#define NS_INADDRSZ	4	/*%< IPv4 T_A */
#define NS_IN6ADDRSZ	16	/*%< IPv6 T_AAAA */
#define NS_CMPRSFLGS	0xc0	/*%< Flag bits indicating name compression. */
#define NS_DEFAULTPORT	53	/*%< For both TCP and UDP. */
/*
 * These can be expanded with synonyms, just keep ns_parse.c:ns_parserecord()
 * in synch with it.
 */
typedef enum __ns_sect {
	ns_s_qd = 0,		/*%< Query: Question. */
	ns_s_zn = 0,		/*%< Update: Zone. */
	ns_s_an = 1,		/*%< Query: Answer. */
	ns_s_pr = 1,		/*%< Update: Prerequisites. */
	ns_s_ns = 2,		/*%< Query: Name servers. */
	ns_s_ud = 2,		/*%< Update: Update. */
	ns_s_ar = 3,		/*%< Query|Update: Additional records. */
	ns_s_max = 4
} ns_sect;

typedef enum __ns_type
	  {
	    ns_t_invalid = 0,
	
	    ns_t_a = 1,
	    ns_t_ns = 2,
	    ns_t_md = 3,
	    ns_t_mf = 4,
	    ns_t_cname = 5,
	    ns_t_soa = 6,
	    ns_t_mb = 7,
	    ns_t_mg = 8,
	    ns_t_mr = 9,
	    ns_t_null = 10,
	    ns_t_wks = 11,
	    ns_t_ptr = 12,
	    ns_t_hinfo = 13,
	    ns_t_minfo = 14,
	    ns_t_mx = 15,
	    ns_t_txt = 16,
	    ns_t_rp = 17,
	    ns_t_afsdb = 18,
	    ns_t_x25 = 19,
	    ns_t_isdn = 20,
	    ns_t_rt = 21,
	    ns_t_nsap = 22,
	    ns_t_nsap_ptr = 23,
	    ns_t_sig = 24,
	    ns_t_key = 25,
	    ns_t_px = 26,
	    ns_t_gpos = 27,
	    ns_t_aaaa = 28,
	    ns_t_loc = 29,
	    ns_t_nxt = 30,
	    ns_t_eid = 31,
	    ns_t_nimloc = 32,
	    ns_t_srv = 33,
	    ns_t_atma = 34,
	    ns_t_naptr = 35,
	    ns_t_kx = 36,
	    ns_t_cert = 37,
	    ns_t_a6 = 38,
	    ns_t_dname = 39,
	    ns_t_sink = 40,
	    ns_t_opt = 41,
	    ns_t_apl = 42,
	    ns_t_ds = 43,
	    ns_t_sshfp = 44,
	    ns_t_ipseckey = 45,
	    ns_t_rrsig = 46,
	    ns_t_nsec = 47,
	    ns_t_dnskey = 48,
	    ns_t_dhcid = 49,
	    ns_t_nsec3 = 50,
	    ns_t_nsec3param = 51,
	    ns_t_tlsa = 52,
	    ns_t_smimea = 53,
	    ns_t_hip = 55,
	    ns_t_ninfo = 56,
	    ns_t_rkey = 57,
	    ns_t_talink = 58,
	    ns_t_cds = 59,
	    ns_t_cdnskey = 60,
	    ns_t_openpgpkey = 61,
	    ns_t_csync = 62,
	    ns_t_spf = 99,
	    ns_t_uinfo = 100,
	    ns_t_uid = 101,
	    ns_t_gid = 102,
	    ns_t_unspec = 103,
	    ns_t_nid = 104,
	    ns_t_l32 = 105,
	    ns_t_l64 = 106,
	    ns_t_lp = 107,
	    ns_t_eui48 = 108,
	    ns_t_eui64 = 109,
	    ns_t_tkey = 249,
	    ns_t_tsig = 250,
	    ns_t_ixfr = 251,
	    ns_t_axfr = 252,
	    ns_t_mailb = 253,
	    ns_t_maila = 254,
	    ns_t_any = 255,
	    ns_t_uri = 256,
	    ns_t_caa = 257,
	    ns_t_avc = 258,
	    ns_t_ta = 32768,
	    ns_t_dlv = 32769,
	
	    ns_t_max = 65536
	  } ns_type;
	
	/*%
	 * Values for class field
	 */
	typedef enum __ns_class {
		ns_c_invalid = 0,	/*%< Cookie. */
		ns_c_in = 1,		/*%< Internet. */
		ns_c_2 = 2,		/*%< unallocated/unsupported. */
		ns_c_chaos = 3,		/*%< MIT Chaos-net. */
		ns_c_hs = 4,		/*%< MIT Hesiod. */
		/* Query class values which do not appear in resource records */
		ns_c_none = 254,	/*%< for prereq. sections in update requests */
		ns_c_any = 255,		/*%< Wildcard match. */
		ns_c_max = 65536
	} ns_class;
	
	/* Certificate type values in CERT resource records.  */
	typedef enum __ns_cert_types {
		cert_t_pkix = 1,	/*%< PKIX (X.509v3) */
		cert_t_spki = 2,	/*%< SPKI */
		cert_t_pgp  = 3,	/*%< PGP */
		cert_t_url  = 253,	/*%< URL private type */
		cert_t_oid  = 254	/*%< OID private type */
	} ns_cert_types;

//struct addrinfo {
//  void *p;
//};

//#define AF_INET 2
//#define AF_INET6 10

//typedef uint16_t sa_family_t;

//struct sockaddr {
//  sa_family_t sa_family;
//  char sa_data[14];
//};

//typedef unsigned long in_addr_t;

//struct in_addr {
//  in_addr_t s_addr;
//};

//struct sockaddr_in {
//  sa_family_t sin_family;
//  unsigned short sin_port;
//  struct in_addr sin_addr;
//  char sin_zero[8];
//};

//struct in6_addr {
//  unsigned char s6_addr[16];
//};
//
//struct sockaddr_in6 {
//  sa_family_t sin6_family;
//  uint16_t sin6_port;
//  uint32_t sin6_flowinfo;
//  struct in6_addr sin6_addr;
//  uint32_t sin6_scope_id;
//};

#define _SS_MAXSIZE 128
#define _SS_ALIGNSIZE (sizeof(int64_t))

#define _SS_PAD1SIZE (_SS_ALIGNSIZE - sizeof(sa_family_t))
#define _SS_PAD2SIZE                                                           \
  (_SS_MAXSIZE - (sizeof(sa_family_t) + _SS_PAD1SIZE + _SS_ALIGNSIZE))

//struct sockaddr_storage {
//  sa_family_t ss_family;
//
//  char _ss_pad1[_SS_PAD1SIZE];
//  int64_t _ss_align;
//  char _ss_pad2[_SS_PAD2SIZE];
//};

#define INET6_ADDRSTRLEN 46

uint16_t htons(uint16_t n);
uint16_t ntohs(uint16_t n);

in_addr_t inet_addr(const char *cp);

typedef struct {
  int fd;
} uv__io_t;

typedef struct {
  char *base;
  size_t len;
} uv_buf_t;

typedef struct {
  uint64_t st_dev;
  uint64_t st_ino;
  uint64_t st_mode;
  uint64_t st_nlink;
  uint64_t st_uid;
  uint64_t st_gid;
  uint64_t st_rdev;
  uint64_t st_size;
  uint64_t st_atime;
  uint64_t st_mtime;
  uint64_t st_ctime;
} uv_statbuf_t;

typedef int uv_os_sock_t;

typedef int uv_file;
typedef int uv_os_sock_t;
typedef int uv_os_fd_t;

typedef uint32_t uv_uid_t;

typedef uint32_t uv_gid_t;

typedef struct {
  void* handle;
  char* errmsg;
} uv_lib_t;

typedef struct {
  void *p;
} uv_mutex_t;

typedef struct {
  void *p;
} uv_rwlock_t;

typedef struct {
  void *p;
} uv_sem_t;

typedef struct {
  void *p;
} uv_cond_t;

typedef struct {
  void *p;
} uv_barrier_t;

typedef struct {
  void *p;
} uv_once_t;

typedef struct {
  void *p;
} uv_thread_t;

typedef struct {
  void *p;
} uv_key_t;

#define UV_REQ_TYPE_PRIVATE /* empty */

#define UV_REQ_PRIVATE_FIELDS /* empty */

#define UV_PRIVATE_REQ_TYPES /* empty */

#define UV_SHUTDOWN_PRIVATE_FIELDS /* empty */

#define UV_HANDLE_PRIVATE_FIELDS                                               \
  int flags;                                                                   \
  uv_handle_t *next_closing;

#define UV_STREAM_PRIVATE_FIELDS /* empty */

#define UV_WRITE_PRIVATE_FIELDS /* empty */

#define UV_TCP_PRIVATE_FIELDS /* empty */

#define UV_CONNECT_PRIVATE_FIELDS /* empty */

#define UV_UDP_PRIVATE_FIELDS uv__io_t io_watcher;

#define UV_UDP_SEND_PRIVATE_FIELDS /* empty */

#define UV_TTY_PRIVATE_FIELDS /* empty */

#define UV_PIPE_PRIVATE_FIELDS /* empty */

#define UV_POLL_PRIVATE_FIELDS /* empty */

#define UV_PREPARE_PRIVATE_FIELDS /* empty */

#define UV_GETNAMEINFO_PRIVATE_FIELDS                                         \
  struct uv__work work_req;                                                   \

#define UV_CHECK_PRIVATE_FIELDS /* empty */

#define UV_IDLE_PRIVATE_FIELDS /* empty */

#define UV_ASYNC_PRIVATE_FIELDS /* empty */

#define UV_TIMER_PRIVATE_FIELDS /* empty */

#define UV_GETADDRINFO_PRIVATE_FIELDS                                         \
  struct uv__work work_req;                                                   \

#define UV_PROCESS_PRIVATE_FIELDS /* empty */

#define UV_WORK_PRIVATE_FIELDS                                                \
  struct uv__work work_req; \

#define UV_FS_PRIVATE_FIELDS                                                  \
  const char *new_path;                                                       \
  uv_file file;                                                               \
  int flags;                                                                  \
  mode_t mode;                                                                \
  unsigned int nbufs;                                                         \
  uv_buf_t* bufs;                                                             \
  off_t off;                                                                  \
  uv_uid_t uid;                                                               \
  uv_gid_t gid;                                                               \
  double atime;                                                               \
  double mtime;                                                               \
  struct uv__work work_req;                                                   \
  uv_buf_t bufsml[4];                                                         \

#define UV_FS_EVENT_PRIVATE_FIELDS /* empty */

#define UV_SIGNAL_PRIVATE_FIELDS /* empty */

#define UV_LOOP_PRIVATE_FIELDS uint64_t time; \
  void* wq[2];                                                                \
  uv_mutex_t wq_mutex;                                                        \
  uv_async_t wq_async;                                                        \

#define UV_DYNAMIC /* empty */

#endif /* UV_EBBRT_H */

