CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi
VulkanTest: main.cpp
	g++ $(CFLAGS) -o CppVoxelEngine main.cpp $(LDFLAGS)

.PHONY: test clean

test: CppVoxelEngine
	./CppVoxelEngine

clean: test
	rm -f CppVoxelEngine