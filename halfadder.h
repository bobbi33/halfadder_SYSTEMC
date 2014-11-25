#include <systemc.h>

SC_MODULE(halfadder){
	sc_in<bool> a,b;
	sc_out<bool> sum, carry;
	
	void ha_function();
	
	SC_CTOR(halfadder){
		SC_METHOD(ha_function);
		sensitive << a << b;
	}



};
