#include "halfadder.h"

void halfadder::ha_function(){
	sum = a.read() ^ b.read();
	carry = a.read() & b.read();


}
