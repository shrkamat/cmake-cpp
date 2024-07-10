#include <iostream>
#include <thread>
#include <chrono>
#include <sstream>

// #include "cpp-trace.h"
#include "task_annotator_tracepoints.h"


int main(int argc, const char** argv)
{
    std::cout << "Hello,World" << std::endl;
    int count = 0;


    while(1) {
        std::stringstream ss;

        ss << "AllIsWell count=" << count; 

	    tracepoint(task_annotator, event, ">>", ss.str().c_str());

	    tracepoint(task_annotator, event, "<<", ss.str().c_str());

	    count++;

	    std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
