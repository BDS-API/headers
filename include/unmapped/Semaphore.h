#pragma once

class Semaphore {

public:

    Semaphore(void);
    void notify(void);
    void wait(void);
};
