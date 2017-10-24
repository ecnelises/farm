#ifndef MUTTON_H
#define MUTTON_H

class Mutton : public Food {
public:
    virtual ~Mutton();
    virtual int consume() const override;
    virtual const char* name() const override;
};

#endif
