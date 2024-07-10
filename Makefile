

all: build/Makefile
	make -C build VERBOSE=1

build/Makefile: CMakeLists.txt
	mkdir -p build
	#cmake -S . -B build -DCMAKE_TOOLCHAIN_FILE="/home/skamath/Projects/vcpkg/scripts/buildsystems/vcpkg.cmake" -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
	cmake -S . -B build -DCMAKE_EXPORT_COMPILE_COMMANDS=ON

