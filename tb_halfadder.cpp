#include "tb_halfadder.h"

void tb_halfadder::data_a1(){
	while(true){
		a1 = (bool)1;
		wait(25,SC_NS);
		a1 = (bool)0;
		wait(25,SC_NS);
		a1 = (bool)1;
		wait(25,SC_NS);
		a1 = (bool)0;
		wait();	
	}
}

void tb_halfadder::data_b1(){
	while(true){
		b1 = (bool)0;
		wait(50,SC_NS);
		b1 = (bool)1;
		wait();	
	}
}

void tb_halfadder::data_display(){
	while(true){
		cout << "a1:" << a1 << "b1:" << b1 << "\n";
		cout << "sum:" << sum << "carry_out:" << carry_out << "\n";
		wait(5,SC_NS);
		cout << "a1:" << a1 << "b1:" << b1 << "\n";
		cout << "sum:" << sum << "carry_out:" << carry_out << "\n";
		wait(5,SC_NS);
		cout << "a1:" << a1 << "b1:" << b1 << "\n";
		wait(5,SC_NS);
		cout << "a1:" << a1 << "b1:" << b1 << "\n";
		wait(5,SC_NS);
		cout << "a1:" << a1 << "b1:" << b1 << "\n";
		wait(5,SC_NS);
		cout << "a1:" << a1 << "b1:" << b1 << "\n";
		wait(5,SC_NS);
		cout << "a1:" << a1 << "b1:" << b1 << "\n";
		wait(5,SC_NS);
		cout << "a1:" << a1 << "b1:" << b1 << "\n";
		wait(5,SC_NS);
		cout << "a1:" << a1 << "b1:" << b1 << "\n";
		wait(5,SC_NS);
		cout << "a1:" << a1 << "b1:" << b1 << "\n";
		wait();
	}
}
