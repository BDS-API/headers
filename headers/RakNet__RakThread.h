#pragma once

class RakNet::RakThread {

public:

    void Create(void * (*)(void *), void *, int);
};
