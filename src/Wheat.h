#ifndef WHEAT_H
#define WHEAT_H

#include "Crop.h"

class Wheat : public Crop{
public:
  virtual ~Wheat();
  virtual Food* produce(void) override;
  virtual Corn* propagate(void) const override;
private:
  Status status;
}
#endif