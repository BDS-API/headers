#pragma once

class RakNet::SimpleMutex {

public:

    void SimpleMutex(void);
    void Init(void);
    void Lock(void);
    void Unlock(void);
};
