#ifndef SUBJECT_H
#define SUBJECT_H

#include <list>
#include <Observer.h>

class Subject {
public:
	void attach(Observer observer) {
		observers.push_back(observer);
	}
	void setState(int s) {
		state = s;
		notifyAllObservers();
	}
	void notifyAllObservers() {
		std::list<Observer>::iterator i;
		for (i = observers.begin; i < observers.end; i++) {
			i->update();
		}
	}

private:
	std::list<Observer> observers;
	int state;


};

#endif // !SUBJECT_H
