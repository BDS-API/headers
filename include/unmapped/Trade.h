#pragma once



class Trade {

public:
    ~Trade();
    Trade(Trade &&);
    Trade();
    void getWeight()const;
};
