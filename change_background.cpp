#include "change_background.h"
#include <windows.h>
#include <iostream>
#include <time.h>

using namespace std;

void change_background::start() {
	srand((int)time(NULL));
	select = size(filenm);
	int random = rand() % select;
	SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (void *)filenm[random], SPIF_UPDATEINIFILE);
	
}
change_background::change_background() {
	int b;
}
