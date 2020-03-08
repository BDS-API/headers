#pragma once



class Lockless {

public:

    void fence(Lockless::MemoryOrder);
    void compiler_fence(Lockless::MemoryOrder);
};
