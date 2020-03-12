#pragma once



class Semaphore {

public:
    ~Semaphore();
    void notify();
    void wait();
    Semaphore();
};
