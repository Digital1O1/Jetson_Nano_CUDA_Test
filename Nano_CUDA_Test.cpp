#include <iostream>
#include <opencv2/dnn.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core/cuda.hpp>

using namespace std;
using namespace cv;
using namespace dnn;
using namespace cuda;

int main()
{

	printCudaDeviceInfo(0);
	printf("It's done...\r\n");

	return 0;
}
/*
    Linux
        - cd <directory>
        - mkdir build
        - cd build
        - cmake -DCMAKE_BUILD_TYPE=Release ..
        - make
            - cmake --build . --config Release 
*/
