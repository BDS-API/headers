#pragma once



using namespace Social::Events;

class EventManager {

public:

    EventManager(void);
    void setupCommonProperties();
    void addListener(std::unique_ptr<Social::Events::IEventListener, std::default_delete<Social::Events::IEventListener>>);
    void recordEvent(Social::Events::Event &);
    void tick();
    void sendEvents(bool);
    void stopDebugEventLoggingForAllListeners();
    void setAcceptNewEvents(bool);
    void getCommonProperty(std::string const&)const;
    void removeCommonProperty(std::string const&);
    void getGlobalProperty(std::string const&)const;
    void removeGlobalProperty(std::string const&);
    void getPlayerCommonProperty(unsigned int, std::string const&)const;
    void removePlayerCommonProperty(unsigned int, std::string const&);
    void removePlayerCommonPropertyForAllPlayers(std::string const&);
    void getPlayerGlobalProperty(unsigned int, std::string const&)const;
    void removePlayerGlobalProperty(unsigned int, std::string const&);
    void buildCommonProperties(std::unordered_map<std::string, Social::Events::Property, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, Social::Events::Property>>> &, unsigned int)const;
    bool hasListeners(int);
    void getNextSequenceNumber();
};
