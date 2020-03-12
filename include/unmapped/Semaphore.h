#pragma once



class Semaphore {

public:
    void wait();
    ~Semaphore();
    void notify();
    Semaphore();
};
