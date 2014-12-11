#include "mycore/msg_queue.h"
//#include "common/dlist.h"
//#include "common/hash/ob_hashtable.h"
#include <tbsys/tbsys.h>
//#include <assert.h>

//using namespace oceanbase::common;
using namespace std;

int main() {
	
	msg_queue mq;
	msg m;
	
	m.id = 1;
	
	msg * mp;
	mq.push(&m);
	mq.pop(&mp);
	printf("m.id=%d\n", mp->id); 
	printf("now=%ld\n", tbsys::CTimeUtil::getTime()); 
	
	return 1;
}
