sleepdisplay: sleepdisplay.c
	gcc -o sleepdisplay sleepdisplay.c -framework IOKit -framework CoreFoundation

install: sleepdisplay
	install -m 0755 sleepdisplay /usr/local/bin
