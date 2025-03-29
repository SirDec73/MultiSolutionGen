#include "UDP_Server.h"
#include <iostream>
#include <string>

CRITICAL_SECTION cs;

DWORD WINAPI CallThread(void* param) {

	int* value = (int*)param;
	while (true) {
		Sleep(300);
		EnterCriticalSection(&cs);
		(*value)++;
		LeaveCriticalSection(&cs);
	}
}

int main() {
	InitializeCriticalSection(&cs);
	int value = 5;

	CreateThread(nullptr, 0, CallThread, &value, 0, nullptr);
	while (true) {
		EnterCriticalSection(&cs);
		std::cout << value << std::endl;
		LeaveCriticalSection(&cs);
		Sleep(100);
	}

	return 1;
}