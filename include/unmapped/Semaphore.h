#pragma once



class Semaphore {

public:

    ~Semaphore();
    Semaphore();
    void notify();
    void wait();
};
