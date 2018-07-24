# Interesting resource: https://www.andriydruk.com/post/introduction-to-c-for-android-developers/

lib_static_source=fast-inverse-square-root
lib_static_name=libstatic.a

lib_dynamic_source=standart-inverse-square-root
lib_dynamic_name=libdynamic.so

hello_world_source=helloworld

all: exec-demo

gen-static-lib:
	clang ${lib_static_source}.c -c
	nm ${lib_static_source}.o
	ar rcs ${lib_static_name} ${lib_static_source}.o

gen-dynamic-lib:
	clang -shared -o ${lib_dynamic_name} -Xlinker -soname=${lib_dynamic_name} -lm ${lib_dynamic_source}.c
	nm -D ${lib_dynamic_name}
	readelf -d ${lib_dynamic_name} | grep -E "NEEDED|SONAME"


gen-demo: gen-static-lib gen-dynamic-lib
	clang -L./ -o ${hello_world_source} ${hello_world_source}.c ${lib_static_name} ${lib_dynamic_name} -fPIE -pie

exec-demo: gen-demo
	LD_LIBRARY_PATH=./ ./${hello_world_source}
