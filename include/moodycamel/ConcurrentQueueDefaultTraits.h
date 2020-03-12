#pragma once



namespace moodycamel {

    namespace ConcurrentQueueDefaultTraits {

        void malloc(unsigned long);
        void free(void *);
    };
}
