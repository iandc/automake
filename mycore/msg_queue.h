#ifndef __MSG1__
#define __MSG1__

#include "queue/queue.h"

class msg_queue {
	public:
		msg_queue() {
		}

		~msg_queue() {
		}

		int push(msg * m) {
			return q_.push(m);
		}

		int pop(msg ** m) {
			return q_.pop(m);

		}


	private:
		queue q_;
};








#endif


