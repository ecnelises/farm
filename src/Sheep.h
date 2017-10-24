#ifndef SHEEP_H
#define SHEEP_H

#include "Animal.h"

class Sheep : public Animal {
public:
    enum Color {
        BLACK,
        WHITE,
        GRAY,
        BROWN
    };

    Sheep(Color c);
    Color getColor(void) const;
    virtual ~Sheep();
    virtual Food* produce(void) override;
    virtual Sheep* clone(void) const override;
private:
    Color color;
};

#endif
