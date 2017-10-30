#ifndef HANDLER_H
#define HANDLER_H

class Handler {
protected:
	Handler* m_handler;
public:
	Handler(Handler* handler):m_handler(handler){}
	virtual void dealWith(int prio) {}
};

#endif