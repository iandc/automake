#ifndef __MSG__
#define __MSG__
#include "msg/msg.h"
class queue {

 public:
	queue() {
		head_=0;
		tail_=0;
	}

	int push(msg * m) {
		if(tail_>50000) return -1;
		q_[tail_] = m;
		tail_++;
	}

	int pop(msg  ** m) {
		*m=q_[head_];
		head_++;
		return 1;
	}	
	~queue() {
	
	}
private:
	msg * q_[50000];
	int head_;
	int tail_;

};



#endif
