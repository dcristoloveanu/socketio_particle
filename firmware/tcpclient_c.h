#ifndef TCPCLIENT_C_H
#define TCPCLIENT_C_H

#ifdef __cplusplus
extern "C" {
#endif

	typedef void* TCPCLIENT_HANDLE;

	TCPCLIENT_HANDLE tcpclient_create(void);
	void tcpclient_destroy(TCPCLIENT_HANDLE tcp_client);

#ifdef __cplusplus
}
#endif

#endif /* TCPCLIENT_C_H */
