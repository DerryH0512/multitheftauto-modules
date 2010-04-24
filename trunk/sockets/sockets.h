#ifndef __MTA_SOCK_H
#define __MTA_SOCK_H

//#include "CFunctions.h"
#include "ml_base.h"
#include "CThread.h"

#define WIN32_MEAN_AND_LEAN

#include <winsock2.h>
#include <windows.h>
#include <string>
#include <vector>

using namespace std;

class Socket {
public:
	Socket();
	Socket(lua_State *luaVM, string host, unsigned short port);
	~Socket();

	bool isConnected();
	bool sendData(string data);

	void* getUserdata();

private:
	SOCKET      m_sock;
	SOCKADDR_IN m_addr;

	void* m_userdata;

	bool m_connected;
	bool m_connecting;

	CThread*     m_thread;
	CThreadData* m_threadData;

	bool Socket::VerifyIP(sockaddr_in* sockAddr, string host);
};

#endif