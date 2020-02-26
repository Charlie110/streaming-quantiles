#include <stdlib.h>
#include <string>
#include <iostream> 
using namespace std;
#ifndef KLL_INTERFACE_H_
#define KLL_INTERFACE_H

void stream_maker(int size, string type, string output_file);
void create_sketch(string input_file, int k, string output_file);

#endif
