#include "kll_interface.h"

void stream_maker(int size, string type, string output_file){
	string str  = "python3 streamMaker.py -n "+to_string(size)+" -o "+type+" > "+output_file;
	const char* script = str.c_str();
	system(script);
}

void create_sketch(string input_file, int k, string output_file){
	string str = "cat "+input_file+" | python3 kll.py -k "+to_string(k)+" -t int > "+output_file;
	const char* script = str.c_str();
	system(script);
}
