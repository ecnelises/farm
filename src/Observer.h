#ifndef OBSERVER_H

#include "Subject.h"

class Observer
{
protected:
	Subject subject;
public:
	virtual void update();
};


#endif // !BACKPACKOBSERVER_H
