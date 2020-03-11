#pragma once



namespace Bedrock::Threading {

class ThreadUtil {

public:

//  void setCurrentThreadPriority(Bedrock::Threading::OSThreadPriority const&); //TODO: incomplete function definition
//  void setThreadPriority(void const*, Bedrock::Threading::OSThreadPriority const&); //TODO: incomplete function definition
//  void setThreadPriority(unsigned long const&, Bedrock::Threading::OSThreadPriority const&); //TODO: incomplete function definition
    void setCurrentThreadCoreAffinity(int, unsigned long);
//  void setCoreAffinity(void const*, int, unsigned long); //TODO: incomplete function definition
    void setCoreAffinity(unsigned long const&, int, unsigned long);
};

}