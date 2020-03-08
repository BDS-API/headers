#pragma once



class Stopwatch {

public:
    virtual Stopwatch::~Stopwatch()
    virtual void stop();
    virtual void stopContinue();
    virtual void print(std::string const&);

    Stopwatch(void);
    void getLast();
    void getMax();
    void reset();
    void start();
    void getTotal();
    void getCount();
    void tick();
    bool isReset()const;
    void printEvery(int, std::string const&);
};
