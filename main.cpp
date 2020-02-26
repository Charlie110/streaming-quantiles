#include <iostream>
#include "kll_interface.h"
using namespace std;
int main(){
	int N = 1000;
	string type = "zoomin";
	string f_name = "numbers.txt";
	stream_maker(N,type,f_name);
	
	string sketch_name = "cdf.csv";
	int K = 32;

	create_sketch(f_name,K,sketch_name);
	return 0;
}
