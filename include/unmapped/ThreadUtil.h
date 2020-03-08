#pragma once



using namespace Bedrock::Threading;

class ThreadUtil {

public:

    void setCurrentThreadPriority(Bedrock::Threading::OSThreadPriority const&);
    void setThreadPriority(void const*, Bedrock::Threading::OSThreadPriority const&);
    void setThreadPriority(unsigned long const&, Bedrock::Threading::OSThreadPriority const&);
    void setCurrentThreadCoreAffinity(int, unsigned long);
    void setCoreAffinity(void const*, int, unsigned long);
    void setCoreAffinity(unsigned long const&, int, unsigned long);
};
