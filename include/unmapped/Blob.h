#pragma once

#include <string>


namespace ClientBlobCache {

    namespace Server {

        class Blob {

        public:
            ~Blob();
            Blob(unsigned long, std::string &&);
        };
    }
}
