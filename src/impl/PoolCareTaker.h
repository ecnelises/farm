//
// Created by natrue on 2017/10/30.
//

#ifndef FARM_POOLCARETAKER_H
#define FARM_POOLCARETAKER_H

#include "Pool.h"
#include "PoolMemento.h"
#include <vector>

class PoolCaretake
{
public:
    PoolCaretake() = default;
    void Save(PoolMemento menento) { m_vecMemento.push_back(menento); }
    PoolMemento Load(int state) { return m_vecMemento[state]; }
private:
    std::vector<PoolMemento> m_vecMemento;
};

#endif //FARM_POOLCARETAKER_H
