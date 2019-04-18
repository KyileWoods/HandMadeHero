#include <windows.h>

int CALLBACK
WinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)

	WNDCLASS WindowClass = {};

/*typedef struct tagWNDCLASSA{
	UINT      style;
	WNDPROC   lpfnWndProc;
	int       cbClsExtra;
	int       cbWndExtra;
	HINSTANCE hInstance;
	HICON     hIcon;
	HCURSOR   hCursor;
	HBRUSH    hbrBackground;
	LPCSTR    lpszMenuName;
	LPCSTR    lpszClassName;
} WNDCLASSA, *PWNDCLASSA//, *NPWNDCLASSA, *LPWNDCLASSA;*/

{
	MessageBox(0, "This is the message! Hello!", "HandMadeHero Message service", MB_OK | MB_ICONINFORMATION);
	return(0);
}