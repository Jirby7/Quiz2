all: build doczip

clean:
	rm -rf *.o *~ a.out mywc html/ latex/ *# config config.bak *.tgz

build:
	gcc collegemain.cc -o mywc

doc: html/index.html

html/index.html: wc.c
ifneq ("$(wildcard config)","")
	doxygen -u config
else
	doxygen -g config
endif
	doxygen config

mywc:
	gcc collegemain.cc -o mywc

doczip: doc.tgz

doc.tgz: html/index.html
	tar -cvzf doc.tgz html/
