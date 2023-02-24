
function shoganai-hello-build()
{
	echo "Building CPP source"
	cd ${SHOGANAI_PATH}/hello
	g++ hello.cpp -o hello.exe
}

function shoganai-hello-run()
{
	cd ${SHOGANAI_PATH}/hello
	./hello.exe

}