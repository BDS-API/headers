#pragma once

class DedicatedServer : IMinecraftApp, BedrockEngine::AppIsland {

public:
    virtual ~DedicatedServer();
    virtual void getPrimaryMinecraft(void);
    virtual void getAutomationClient(void)const;
    virtual bool isEduMode(void)const;
    virtual bool isDedicatedServer(void)const;
    virtual void onNetworkMaxPlayersChanged(unsigned int);
    virtual void getGameModule(void);
    virtual void stop(void);

    void DedicatedServer(void);
    void initalizeAppConfigs(void);
    void initializeLogging(void);
    void start(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _forceContentLogEnabled(void);
};
