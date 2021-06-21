﻿// my_test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

int main(int argc, char* argv[])
{
	char* file = NULL;
	if (argc == 1) {
		file = "test.lua";
	}
	else {
		file = argv[1];
	}
	lua_State* L = lua_open();
	luaL_openlibs(L);
	luaL_dofile(L, file);

	return 0;
}
