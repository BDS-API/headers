#pragma once

#include "./Trade.h"


class Trade {

public:

    void getWeight()const;
    Trade(Trade &&);
    ~Trade();
    Trade();
};
