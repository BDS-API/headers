#pragma once

#include <string>


namespace ClientBlobCache::Server {

class Blob {

public:

    Blob(unsigned long, std::string &&);
    ~Blob();
};

}