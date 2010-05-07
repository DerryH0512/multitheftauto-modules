/*********************************************************
*
*  Multi Theft Auto v1.0 - Module
*  
*  Module:       ml_irc
*  Url:          http://development.mtasa.com/index.php?title=Modules/SebasIRC
*  Project page: http://multitheftauto-modules.googlecode.com/
*  Developers:   Sebas Lamers <sebasdevelopment@gmx.com>
*
*********************************************************/

class CFunctions;

#ifndef __CFUNCTIONS_H
#define __CFUNCTIONS_H

#include "include/ILuaModuleManager.h"
#include <stdio.h>
#include <string>

extern ILuaModuleManager10 *pModuleManager;

class CFunctions
{
	public:
		static int		ircConnect			(lua_State* luaVM);
		static int		ircDisconnect		(lua_State* luaVM);
		static int		ircJoin				(lua_State* luaVM);
		static int		ircRaw				(lua_State* luaVM);
		static int		ircSay				(lua_State* luaVM);
		static int		ircNotice			(lua_State* luaVM);
		static int		ircPart				(lua_State* luaVM);
		//static int		ircChangeNick		(lua_State* luaVM);
		static int		ircSetMode			(lua_State* luaVM);
		//static int		ircSetChannelMode	(lua_State* luaVM);
		//static int      ircIsConnected		(lua_State* luaVM);
		static int		SaveLuaData			(ILuaModuleManager10 *pManager, lua_State* luaVM);

		static int		sendConsole         (char* text);
		static int		search				(char* string, char* substring);

		static int		AddEvent			(lua_State* luaVM, const char* szEventName);
		static int		triggerRawEvent		(char* msg);
};
#endif