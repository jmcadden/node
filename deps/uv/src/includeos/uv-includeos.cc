#include "uv.h"
#include "../src/uv-common.h"

//TODO(jmcadden): fix this
#define EBBRT_UNIMPLEMENTED() while(true);

int uv_async_init(uv_loop_t *loop, uv_async_t *handle, uv_async_cb async_cb) {
  EBBRT_UNIMPLEMENTED();
}

int uv_async_send(uv_async_t *handle) { EBBRT_UNIMPLEMENTED(); }

//uv_loop_t *uv_default_loop(void) { EBBRT_UNIMPLEMENTED(); }

int uv_run(uv_loop_t *loop, uv_run_mode mode) { EBBRT_UNIMPLEMENTED(); }

int uv_translate_sys_error(int sys_errno) { EBBRT_UNIMPLEMENTED(); }

uv_handle_type uv_guess_handle(uv_file file) { EBBRT_UNIMPLEMENTED(); }

int uv_is_active(const uv_handle_t *handle) { EBBRT_UNIMPLEMENTED(); }

void uv_close(uv_handle_t *handle, uv_close_cb cb) { EBBRT_UNIMPLEMENTED(); }

int uv_idle_init(uv_loop_t *loop, uv_idle_t *handle) { EBBRT_UNIMPLEMENTED(); }

int uv_idle_start(uv_idle_t *handle, uv_idle_cb cb) { EBBRT_UNIMPLEMENTED(); }

int uv_idle_stop(uv_idle_t *handle) { EBBRT_UNIMPLEMENTED(); }

int uv_check_init(uv_loop_t *loop, uv_check_t *handle) {
  EBBRT_UNIMPLEMENTED();
}

int uv_check_start(uv_check_t *handle, uv_check_cb cb) {
  EBBRT_UNIMPLEMENTED();
}

int uv_check_stop(uv_check_t *handle) { EBBRT_UNIMPLEMENTED(); }

int uv_pipe_init(uv_loop_t *loop, uv_pipe_t *handle, int ipc) {
  EBBRT_UNIMPLEMENTED();
}

int uv_pipe_bind(uv_pipe_t *handle, const char *name) { EBBRT_UNIMPLEMENTED(); }

void uv_pipe_connect(uv_connect_t *req, uv_pipe_t *handle, const char *name,
                     uv_connect_cb cb) {
  EBBRT_UNIMPLEMENTED();
}

int uv_pipe_open(uv_pipe_t *pipe, uv_file file) { 
  EBBRT_UNIMPLEMENTED(); 
}

int uv_pipe_getsockname(const uv_pipe_t* handle,
                                  char* buffer,
                                  size_t* size){ 
  EBBRT_UNIMPLEMENTED(); 
}

int uv_pipe_getpeername(const uv_pipe_t* handle,
                                  char* buffer,
                                  size_t* size){ 
  EBBRT_UNIMPLEMENTED(); 
}

void uv_pipe_pending_instances(uv_pipe_t* handle, int count){ 
  EBBRT_UNIMPLEMENTED(); 
}
int uv_pipe_pending_count(uv_pipe_t* handle){ 
  EBBRT_UNIMPLEMENTED(); 
}

uv_handle_type uv_pipe_pending_type(uv_pipe_t* handle){ 
  EBBRT_UNIMPLEMENTED(); 
}


int uv_tty_reset_mode(void) { EBBRT_UNIMPLEMENTED(); }

int uv_cwd(char *buffer, size_t* size) { EBBRT_UNIMPLEMENTED(); }

int uv_chdir(const char *dir) { EBBRT_UNIMPLEMENTED(); }

int uv_uptime(double *uptime) { EBBRT_UNIMPLEMENTED(); }

int uv_resident_set_memory(size_t *rss) { EBBRT_UNIMPLEMENTED(); }

int uv_kill(int pid, int signum) { EBBRT_UNIMPLEMENTED(); }

uint64_t uv_hrtime(void) { EBBRT_UNIMPLEMENTED(); }

int uv_get_process_title(char *buffer, size_t size) {
  EBBRT_UNIMPLEMENTED();
}

int uv_set_process_title(const char *title) { EBBRT_UNIMPLEMENTED(); }

int uv_exepath(char *buffer, size_t *size_ptr) { EBBRT_UNIMPLEMENTED(); }

void uv_disable_stdio_inheritance(void) { EBBRT_UNIMPLEMENTED(); }

char **uv_setup_args(int argc, char **argv) { EBBRT_UNIMPLEMENTED(); }

int uv_cpu_info(uv_cpu_info_t **cpu_infos, int *count) {
  EBBRT_UNIMPLEMENTED();
}

void uv_free_cpu_info(uv_cpu_info_t *cpu_infos, int count) {
  EBBRT_UNIMPLEMENTED();
}

uint64_t uv_get_free_memory(void) { EBBRT_UNIMPLEMENTED(); }

uint64_t uv_get_total_memory(void) { EBBRT_UNIMPLEMENTED(); }

void uv_loadavg(double avg[3]) { EBBRT_UNIMPLEMENTED(); }

int uv_interface_addresses(uv_interface_address_t **addresses,
                                int *count) {
  EBBRT_UNIMPLEMENTED();
}

void uv_free_interface_addresses(uv_interface_address_t *addresses, int count) {
  EBBRT_UNIMPLEMENTED();
}

int uv_listen(uv_stream_t *stream, int backlog, uv_connection_cb cb) {
  EBBRT_UNIMPLEMENTED();
}

int uv_accept(uv_stream_t *server, uv_stream_t *client) {
  EBBRT_UNIMPLEMENTED();
}

int uv_signal_init(uv_loop_t *loop, uv_signal_t *handle) {
  EBBRT_UNIMPLEMENTED();
}

int uv_signal_start(uv_signal_t *handle, uv_signal_cb signal_cb, int signum) {
  EBBRT_UNIMPLEMENTED();
}

int uv_signal_stop(uv_signal_t *handle) { EBBRT_UNIMPLEMENTED(); }

int uv_read_start(uv_stream_t *stream, uv_alloc_cb alloc_cb,
                  uv_read_cb read_cb) {
  EBBRT_UNIMPLEMENTED();
}

int uv_read_stop(uv_stream_t *stream) { EBBRT_UNIMPLEMENTED(); }

int uv_write(uv_write_t* req,
                       uv_stream_t* handle,
                       const uv_buf_t bufs[],
                       unsigned int nbufs,
                       uv_write_cb cb){
  EBBRT_UNIMPLEMENTED();
}

int uv_write2(uv_write_t* req,
                        uv_stream_t* handle,
                        const uv_buf_t bufs[],
                        unsigned int nbufs,
                        uv_stream_t* send_handle,
                        uv_write_cb cb){
  EBBRT_UNIMPLEMENTED();
}

int uv_try_write(uv_stream_t* handle,
                           const uv_buf_t bufs[],
                           unsigned int nbufs){
  EBBRT_UNIMPLEMENTED();
}

int uv_shutdown(uv_shutdown_t *req, uv_stream_t *handle, uv_shutdown_cb cb) {
  EBBRT_UNIMPLEMENTED();
}

int uv_timer_init(uv_loop_t *loop, uv_timer_t *handle) {
  EBBRT_UNIMPLEMENTED();
}

int uv_timer_start(uv_timer_t *handle, uv_timer_cb cb, uint64_t timeout,
                   uint64_t repeat) {
  EBBRT_UNIMPLEMENTED();
}

int uv_timer_stop(uv_timer_t *handle) { EBBRT_UNIMPLEMENTED(); }

int uv_timer_again(uv_timer_t *handle) { EBBRT_UNIMPLEMENTED(); }

void uv_timer_set_repeat(uv_timer_t *handle, uint64_t repeat) {
  EBBRT_UNIMPLEMENTED();
}

uint64_t uv_timer_get_repeat(const uv_timer_t *handle) {
  EBBRT_UNIMPLEMENTED();
}

int uv_tty_init(uv_loop_t *loop, uv_tty_t *handle, uv_file fd, int readable) {
  EBBRT_UNIMPLEMENTED();
}

int uv_tty_set_mode(uv_tty_t*, uv_tty_mode_t mode){ EBBRT_UNIMPLEMENTED(); }

int uv_tty_get_winsize(uv_tty_t *handle, int *width, int *height) {
  EBBRT_UNIMPLEMENTED();
}


int uv_spawn(uv_loop_t* loop,
                       uv_process_t* handle,
                       const uv_process_options_t* options){
  EBBRT_UNIMPLEMENTED();
}

int uv_process_kill(uv_process_t *handle, int signum) { EBBRT_UNIMPLEMENTED(); }

int uv_udp_init(uv_loop_t *loop, uv_udp_t *handle) { EBBRT_UNIMPLEMENTED(); }

int uv_udp_set_ttl(uv_udp_t *handle, int ttl) { EBBRT_UNIMPLEMENTED(); }

int uv_udp_getsockname(uv_udp_t *handle, struct sockaddr *name, int *namelen) {
  EBBRT_UNIMPLEMENTED();
}

int uv_udp_set_membership(uv_udp_t *handle, const char *multicast_addr,
                          const char *interface_addr,
                          uv_membership membership) {
  EBBRT_UNIMPLEMENTED();
}

int uv_udp_set_multicast_loop(uv_udp_t *handle, int on) {
  EBBRT_UNIMPLEMENTED();
}

int uv_udp_set_multicast_ttl(uv_udp_t *handle, int ttl) {
  EBBRT_UNIMPLEMENTED();
}

int uv_udp_set_broadcast(uv_udp_t *handle, int on) { EBBRT_UNIMPLEMENTED(); }

int uv_tcp_init(uv_loop_t *loop, uv_tcp_t *handle) { EBBRT_UNIMPLEMENTED(); }

int uv_tcp_open(uv_tcp_t *handle, uv_os_sock_t sock) { EBBRT_UNIMPLEMENTED(); }

int uv_tcp_nodelay(uv_tcp_t *handle, int enable) { EBBRT_UNIMPLEMENTED(); }

int uv_tcp_keepalive(uv_tcp_t *handle, int enable, unsigned int delay) {
  EBBRT_UNIMPLEMENTED();
}

int uv_tcp_simultaneous_accepts(uv_tcp_t *handle, int enable) {
  EBBRT_UNIMPLEMENTED();
}

int uv_tcp_getsockname(const uv_tcp_t* handle,
                                 struct sockaddr* name,
                                 int* namelen) {
  EBBRT_UNIMPLEMENTED();
}

int uv_tcp_getpeername(const uv_tcp_t* handle,
                                 struct sockaddr* name,
                                 int* namelen) {
  EBBRT_UNIMPLEMENTED();
}

in_addr_t inet_addr(const char* cp) {
    EBBRT_UNIMPLEMENTED();
}

int uv__udp_recv_start(uv_udp_t* handle, uv_alloc_cb alloccb,
                       uv_udp_recv_cb recv_cb) {
    EBBRT_UNIMPLEMENTED();
}

int uv__udp_recv_stop(uv_udp_t* handle) {
    EBBRT_UNIMPLEMENTED();
}

int uv_mutex_init(uv_mutex_t* handle){
    EBBRT_UNIMPLEMENTED();
}

void uv_mutex_destroy(uv_mutex_t* handle){
    EBBRT_UNIMPLEMENTED();
}

void uv_mutex_lock(uv_mutex_t* handle){
    EBBRT_UNIMPLEMENTED();
}

int uv_mutex_trylock(uv_mutex_t* handle){
    EBBRT_UNIMPLEMENTED();
}

void uv_mutex_unlock(uv_mutex_t* handle){
    EBBRT_UNIMPLEMENTED();
}

int uv_cond_init(uv_cond_t* cond){
    EBBRT_UNIMPLEMENTED();
}

void uv_cond_destroy(uv_cond_t* cond){
    EBBRT_UNIMPLEMENTED();
}

void uv_cond_signal(uv_cond_t* cond){
    EBBRT_UNIMPLEMENTED();
}

void uv_cond_broadcast(uv_cond_t* cond){
    EBBRT_UNIMPLEMENTED();
}

void uv_cond_wait(uv_cond_t* cond, uv_mutex_t* mutex){
    EBBRT_UNIMPLEMENTED();
}

int uv_cond_timedwait(uv_cond_t* cond,
                                uv_mutex_t* mutex,
                                uint64_t timeout){
    EBBRT_UNIMPLEMENTED();
}


int uv_thread_create(uv_thread_t* tid, uv_thread_cb entry, void* arg){
    EBBRT_UNIMPLEMENTED();
}

uv_thread_t uv_thread_self(void){
    EBBRT_UNIMPLEMENTED();
}

int uv_thread_join(uv_thread_t *tid){
    EBBRT_UNIMPLEMENTED();
}

int uv_thread_equal(const uv_thread_t* t1, const uv_thread_t* t2){
    EBBRT_UNIMPLEMENTED();
}

void uv_once(uv_once_t* guard, void (*callback)(void)){
    EBBRT_UNIMPLEMENTED();
}

int uv_loop_init(uv_loop_t* loop){
    EBBRT_UNIMPLEMENTED();
}

void uv__loop_close(uv_loop_t* loop){
    EBBRT_UNIMPLEMENTED();
}

int uv__loop_configure(uv_loop_t* loop, uv_loop_option option, va_list ap){
    EBBRT_UNIMPLEMENTED();
}

int uv_fileno(const uv_handle_t* handle, uv_os_fd_t* fd){
    EBBRT_UNIMPLEMENTED();
}


int uv_udp_getsockname(const uv_udp_t* handle,
                                 struct sockaddr* name,
                                 int* namelen){
    EBBRT_UNIMPLEMENTED();
}

int uv_dlopen(const char* filename, uv_lib_t* lib){
    EBBRT_UNIMPLEMENTED();
}

void uv_dlclose(uv_lib_t* lib){
    EBBRT_UNIMPLEMENTED();
}

int uv_dlsym(uv_lib_t* lib, const char* name, void** ptr){
    EBBRT_UNIMPLEMENTED();
}

const char* uv_dlerror(const uv_lib_t* lib){
    EBBRT_UNIMPLEMENTED();
}


void uv_update_time(uv_loop_t*){
    EBBRT_UNIMPLEMENTED();
}

int uv_backend_fd(const uv_loop_t*){
    EBBRT_UNIMPLEMENTED();
}

int uv_backend_timeout(const uv_loop_t*){
    EBBRT_UNIMPLEMENTED();
}


int uv_key_create(uv_key_t* key){
    EBBRT_UNIMPLEMENTED();
}

void uv_key_delete(uv_key_t* key){
    EBBRT_UNIMPLEMENTED();
}

void* uv_key_get(uv_key_t* key){
    EBBRT_UNIMPLEMENTED();
}

void uv_key_set(uv_key_t* key, void* value){
    EBBRT_UNIMPLEMENTED();
}

int uv_loop_alive(const uv_loop_t* loop){
    EBBRT_UNIMPLEMENTED();
}

int uv_loop_fork(uv_loop_t* loop){
    EBBRT_UNIMPLEMENTED();
}

int uv_getrusage(uv_rusage_t* rusage){
    EBBRT_UNIMPLEMENTED();
}

int uv_sem_init(uv_sem_t* sem, unsigned int value){
    EBBRT_UNIMPLEMENTED();
}

void uv_sem_destroy(uv_sem_t* sem){
    EBBRT_UNIMPLEMENTED();
}

void uv_sem_post(uv_sem_t* sem){
    EBBRT_UNIMPLEMENTED();
}

void uv_sem_wait(uv_sem_t* sem){
    EBBRT_UNIMPLEMENTED();
}

int uv_sem_trywait(uv_sem_t* sem){
    EBBRT_UNIMPLEMENTED();
}

int uv_getaddrinfo(uv_loop_t* loop,
                             uv_getaddrinfo_t* req,
                             uv_getaddrinfo_cb getaddrinfo_cb,
                             const char* node,
                             const char* service,
                             const struct addrinfo* hints){
    EBBRT_UNIMPLEMENTED();
}

void uv_freeaddrinfo(struct addrinfo* ai){
    EBBRT_UNIMPLEMENTED();
}

int uv_getnameinfo(uv_loop_t* loop,
                             uv_getnameinfo_t* req,
                             uv_getnameinfo_cb getnameinfo_cb,
                             const struct sockaddr* addr,
                             int flags){
    EBBRT_UNIMPLEMENTED();
}

int uv_prepare_init(uv_loop_t*, uv_prepare_t* prepare){
    EBBRT_UNIMPLEMENTED();
}

int uv_prepare_start(uv_prepare_t* prepare, uv_prepare_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_prepare_stop(uv_prepare_t* prepare){
    EBBRT_UNIMPLEMENTED();
}

int uv__tcp_bind(uv_tcp_t* tcp,
                 const struct sockaddr* addr,
                 unsigned int addrlen,
                 unsigned int flags){
    EBBRT_UNIMPLEMENTED();
}


int uv__tcp_connect(uv_connect_t* req,
                   uv_tcp_t* handle,
                   const struct sockaddr* addr,
                   unsigned int addrlen,
                   uv_connect_cb cb){
    EBBRT_UNIMPLEMENTED();
}


int uv__udp_bind(uv_udp_t* handle,
                 const struct sockaddr* addr,
                 unsigned int  addrlen,
                 unsigned int flags){
    EBBRT_UNIMPLEMENTED();
}


int uv__udp_send(uv_udp_send_t* req,
                 uv_udp_t* handle,
                 const uv_buf_t bufs[],
                 unsigned int nbufs,
                 const struct sockaddr* addr,
                 unsigned int addrlen,
                 uv_udp_send_cb send_cb){
    EBBRT_UNIMPLEMENTED();
}


int uv__udp_try_send(uv_udp_t* handle,
                     const uv_buf_t bufs[],
                     unsigned int nbufs,
                     const struct sockaddr* addr,
                     unsigned int addrlen){
    EBBRT_UNIMPLEMENTED();
}

int uv_poll_init(uv_loop_t* loop, uv_poll_t* handle, int fd){
    EBBRT_UNIMPLEMENTED();
}

int uv_poll_init_socket(uv_loop_t* loop,
                        uv_poll_t* handle,
                        uv_os_sock_t socket){
    EBBRT_UNIMPLEMENTED();
}

int uv_poll_start(uv_poll_t* handle, int events, uv_poll_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_poll_stop(uv_poll_t* handle){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_event_init(uv_loop_t* loop, uv_fs_event_t* handle){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_event_start(uv_fs_event_t* handle,
                                uv_fs_event_cb cb,
                                const char* path,
                                unsigned int flags){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_event_stop(uv_fs_event_t* handle){
    EBBRT_UNIMPLEMENTED();
}

void uv_fs_req_cleanup(uv_fs_t* req){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_close(uv_loop_t* loop,
                uv_fs_t* req,
                uv_file file,
                uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}
int uv_fs_open(uv_loop_t* loop,
               uv_fs_t* req,
               const char* path,
               int flags,
               int mode,
               uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_read(uv_loop_t* loop,
               uv_fs_t* req,
               uv_file file,
               const uv_buf_t bufs[],
               unsigned int nbufs,
               int64_t offset,
               uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_unlink(uv_loop_t* loop,
                 uv_fs_t* req,
                 const char* path,
                 uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_write(uv_loop_t* loop,
                uv_fs_t* req,
                uv_file file,
                const uv_buf_t bufs[],
                unsigned int nbufs,
                int64_t offset,
                uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_mkdir(uv_loop_t* loop,
                uv_fs_t* req,
                const char* path,
                int mode,
                uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_mkdtemp(uv_loop_t* loop,
                  uv_fs_t* req,
                  const char* tpl,
                  uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_rmdir(uv_loop_t* loop,
                uv_fs_t* req,
                const char* path,
                uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_scandir(uv_loop_t* loop,
                  uv_fs_t* req,
                  const char* path,
                  int flags,
                  uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_stat(uv_loop_t* loop,
               uv_fs_t* req,
               const char* path,
               uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_fstat(uv_loop_t* loop,
                uv_fs_t* req,
                uv_file file,
                uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_rename(uv_loop_t* loop,
                 uv_fs_t* req,
                 const char* path,
                 const char* new_path,
                 uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_fsync(uv_loop_t* loop,
                uv_fs_t* req,
                uv_file file,
                uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_fdatasync(uv_loop_t* loop,
                    uv_fs_t* req,
                    uv_file file,
                    uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_ftruncate(uv_loop_t* loop,
                    uv_fs_t* req,
                    uv_file file,
                    int64_t offset,
                    uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_sendfile(uv_loop_t* loop,
                   uv_fs_t* req,
                   uv_file out_fd,
                   uv_file in_fd,
                   int64_t in_offset,
                   size_t length,
                   uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_access(uv_loop_t* loop,
                 uv_fs_t* req,
                 const char* path,
                 int mode,
                 uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_chmod(uv_loop_t* loop,
                uv_fs_t* req,
                const char* path,
                int mode,
                uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_utime(uv_loop_t* loop,
                uv_fs_t* req,
                const char* path,
                double atime,
                double mtime,
                uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_futime(uv_loop_t* loop,
                 uv_fs_t* req,
                 uv_file file,
                 double atime,
                 double mtime,
                 uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_lstat(uv_loop_t* loop,
                uv_fs_t* req,
                const char* path,
                uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_link(uv_loop_t* loop,
                uv_fs_t* req,
                const char* path,
                const char* new_path,
                uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_symlink(uv_loop_t* loop,
                  uv_fs_t* req,
                  const char* path,
                  const char* new_path,
                  int flags,
                  uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_readlink(uv_loop_t* loop,
                   uv_fs_t* req,
                   const char* path,
                   uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_realpath(uv_loop_t* loop,
                   uv_fs_t* req,
                   const char* path,
                   uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_fchmod(uv_loop_t* loop,
                 uv_fs_t* req,
                 uv_file file,
                 int mode,
                 uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_fs_chown(uv_loop_t* loop,
                uv_fs_t* req,
                const char* path,
                uv_uid_t uid,
                uv_gid_t gid,
                uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}


int uv_fs_fchown(uv_loop_t* loop,
                 uv_fs_t* req,
                 uv_file file,
                 uv_uid_t uid,
                 uv_gid_t gid,
                 uv_fs_cb cb){
    EBBRT_UNIMPLEMENTED();
}

int uv_os_homedir(char* buffer, size_t* size){
    EBBRT_UNIMPLEMENTED();
}

int uv_os_tmpdir(char* buffer, size_t* size){
    EBBRT_UNIMPLEMENTED();
}

int uv_os_get_passwd(uv_passwd_t* pwd){
    EBBRT_UNIMPLEMENTED();
}

void uv_os_free_passwd(uv_passwd_t* pwd){
    EBBRT_UNIMPLEMENTED();
}

int uv_is_readable(const uv_stream_t* handle){
    EBBRT_UNIMPLEMENTED();
}
int uv_is_writable(const uv_stream_t* handle){
    EBBRT_UNIMPLEMENTED();
}


int uv_stream_set_blocking(uv_stream_t* handle, int blocking){
    EBBRT_UNIMPLEMENTED();
}

int uv_is_closing(const uv_handle_t* handle){
    EBBRT_UNIMPLEMENTED();
}

