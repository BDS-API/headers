#pragma once



using namespace moodycamel;

class ConcurrentQueueDefaultTraits {

public:

    void malloc(unsigned long);
    void free(void *);
};
