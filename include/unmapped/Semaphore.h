#pragma once



class Semaphore {

public:
    ~Semaphore(); // _ZN9SemaphoreD2Ev
    Semaphore(); // _ZN9SemaphoreC2Ev
    void notify(); // _ZN9Semaphore6notifyEv
    void wait(); // _ZN9Semaphore4waitEv
};
