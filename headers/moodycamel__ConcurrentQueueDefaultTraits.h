#pragma once

class moodycamel::ConcurrentQueueDefaultTraits {

public:

    void malloc(unsigned long);
    void free(void *);
};
