.PHONY: build clean

build:
	mkdir -p build
	cd build && cmake ../ && make

clean:
	rm -rf ./**/CMakeFiles
	rm -rf ./**/cmake_install.cmake
	rm -f ./src/Makefile ./test/Makefile
	rm -rf ./extern/** ./lib/** ./bin/** ./build/**
	rm -f ./MakeUpTest_run ./MakeUpTest_tst ./libMakeUpTest_lib.a
