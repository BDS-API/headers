#pragma once

#include "Event.h"
#include <string>
#include <unordered_map>
#include "Property.h"
#include <functional>
#include <memory>
#include <utility>


namespace Social {

    namespace Events {

        class EventManager {

        public:
            void removeCommonProperty(std::string const&);
            void removePlayerCommonProperty(unsigned int, std::string const&);
            void stopDebugEventLoggingForAllListeners();
            void sendEvents(bool);
            void getGlobalProperty(std::string const&)const;
            void removePlayerGlobalProperty(unsigned int, std::string const&);
            void getPlayerCommonProperty(unsigned int, std::string const&)const;
            ~EventManager();
            void tick();
            EventManager();
            void setupCommonProperties();
//          void buildCommonProperties(std::unordered_map<std::string, Social::Events::Property, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, Social::Events::Property>>> &, unsigned int)const; //TODO: incomplete function definition
//          void addListener(std::unique_ptr<Social::Events::IEventListener>); //TODO: incomplete function definition
            void getPlayerGlobalProperty(unsigned int, std::string const&)const;
            void removeGlobalProperty(std::string const&);
            void recordEvent(Social::Events::Event &);
            void setAcceptNewEvents(bool);
            void removePlayerCommonPropertyForAllPlayers(std::string const&);
            void getCommonProperty(std::string const&)const;
            std::string buildCommonProperties(unsigned int)const;
            bool hasListeners(int);
            void getNextSequenceNumber();
        };
    }
}
