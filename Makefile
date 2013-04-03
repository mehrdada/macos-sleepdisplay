sleepdisplay: sleepdisplay.c
	gcc -o sleepdisplay sleepdisplay.c -framework IOKit -framework CoreFoundation

install: sleepdisplay
	/usr/bin/install sleepdisplay
