#pragma once

#include <memory>
#include <unordered_map>
#include <string>


namespace Social {

    namespace Events {

        class EventManager {

        public:
            void getPlayerGlobalProperty(unsigned int, std::string const&)const;
            void getPlayerCommonProperty(unsigned int, std::string const&)const;
            void sendEvents(bool);
            bool hasListeners(int);
            void removePlayerCommonProperty(unsigned int, std::string const&);
            void getNextSequenceNumber();
            ~EventManager();
            EventManager();
            void tick();
            void setupCommonProperties();
            void recordEvent(Social::Events::Event &);
            void setAcceptNewEvents(bool);
            std::string buildCommonProperties(unsigned int)const;
            void addListener(std::unique_ptr<Social::Events::IEventListener>);
            void removePlayerCommonPropertyForAllPlayers(std::string const&);
            void buildCommonProperties(std::unordered_map<std::string, Social::Events::Property, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, Social::Events::Property>>> &, unsigned int)const;
            void removeCommonProperty(std::string const&);
            void removeGlobalProperty(std::string const&);
            void getCommonProperty(std::string const&)const;
            void removePlayerGlobalProperty(unsigned int, std::string const&);
            void stopDebugEventLoggingForAllListeners();
            void getGlobalProperty(std::string const&)const;
        };
    }
}
