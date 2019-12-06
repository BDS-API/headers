#pragma once

class Social::Events::EventManager {

public:

    void EventManager(void);
    void setupCommonProperties(void);
    void addListener(std::unique_ptr<Social::Events::IEventListener, std::default_delete<Social::Events::IEventListener>>);
    void recordEvent(Social::Events::Event &);
    void tick(void);
    void sendEvents(bool);
    void stopDebugEventLoggingForAllListeners(void);
    void setAcceptNewEvents(bool);
    void getCommonProperty(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void removeCommonProperty(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getGlobalProperty(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void removeGlobalProperty(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getPlayerCommonProperty(unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void removePlayerCommonProperty(unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void removePlayerCommonPropertyForAllPlayers(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getPlayerGlobalProperty(unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void removePlayerGlobalProperty(unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void buildCommonProperties(std::unordered_map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, Social::Events::Property, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, Social::Events::Property>>> &, unsigned int)const;
    bool hasListeners(int);
};
