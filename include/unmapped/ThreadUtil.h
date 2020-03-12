#pragma once



namespace Bedrock {

    namespace Threading {

        namespace ThreadUtil {

//          void setCurrentThreadPriority(Bedrock::Threading::OSThreadPriority const&); //TODO: incomplete function definition
            void setCurrentThreadCoreAffinity(int, unsigned long);
//          void setThreadPriority(void const*, Bedrock::Threading::OSThreadPriority const&); //TODO: incomplete function definition
            void setCoreAffinity(unsigned long const&, int, unsigned long);
//          void setThreadPriority(unsigned long const&, Bedrock::Threading::OSThreadPriority const&); //TODO: incomplete function definition
            void setCoreAffinity(void const*, int, unsigned long);
        };
    }
}
