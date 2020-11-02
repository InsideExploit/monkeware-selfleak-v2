#pragma once

#include <Windows.h>
#include <iostream>
#include <TlHelp32.h>

class Interface
{
public:
	~Interface();
	Interface(unsigned int pID);
	Interface(std::string pName);

	unsigned __int32 GetPID(std::string pName);

	bool WriteMemory(unsigned __int64 pAddress, void* pBuffer, unsigned __int32 pLength);
	bool ReadMemory(unsigned __int64 pAddress, void* pBuffer, unsigned __int32 pLength);
	unsigned __int64 GetProcessModule();

private:
	HANDLE pDriverHandle;
	unsigned __int32 pID;
};