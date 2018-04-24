#pragma once
#include <Windows.h>
#include <string.h>
#include <vector>

#include "resource.h"
#include "SnowSetting.h"
#include "ConvertOption.h"
#include "Converter.h"

using namespace std;

#undef MAX_PATH
#define MAX_PATH SHRT_MAX

extern HINSTANCE g_hInst;
extern BOOL is64bit;

BOOL Execute(HWND hWnd, ConvertOption *convertOption, LPCWSTR fileName, bool noLabel = false);
LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK SettingDlgProc(HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam);
void prtTextBorder(HDC hdc, int x, int y, LPCWSTR str, int c, COLORREF borderColor, int borderSize, COLORREF textColor = NULL);