#include <iosteeam>
using name std;

#include "tb_halfadder.h"

int sc_mian(int argc, char* argv[]){
	tb_halfadder top("testbench_halfadder");
		cout << "this is a1" << top.a1;
		cout << "this is b1" << top.b1;
		
		sc_trace_file *tf = sc_creat_vcd_trace_file("testbench_halfadder");
		sc_trace(tf,top.a1,"a1");
		sc_trace(tf,top.b1,"b1");
		sc_trace(tf,top.sum,"sum");
		sc_trace(tf,top.carry_out,"carry_out");
		sc_start(1000);
		sc_close_vcd_trace_file(tf);
		
		return 0;
}
