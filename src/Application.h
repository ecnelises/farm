#ifndef APPLICATION_H
#define APPLICATION_H

#include "Singleton.h"

class Application : public Singleton<Application> {
public:
    void run(void);
};

#endif
