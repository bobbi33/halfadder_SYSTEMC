#include "systemc.h"
#include "halfadder.h"

SC_MODULE(tb_halfadder){
	
	sc_signal<bool> a1,b1;
	sc_signal<bool> sum, carry_out;
	
	void data_a1;
	void data_b1;
	void data_display;
	
	halfadder* UUT1;
	
	SC_CTOR(tb_halfadder){
		
		SC_THREAD(data_a1);
		SC_THREAD(data_b1);
		SC_THREAD(data_display);
		
		UUT1 = new halfadder("UUT1");
		(*UUT1)(a1,b1,sum, carry_out);	
	}

};
