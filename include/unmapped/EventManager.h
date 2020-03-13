#pragma once

#include <string>
#include <memory>
#include <unordered_map>


namespace Social {

    namespace Events {

        class EventManager {

        public:
            ~EventManager(); // _ZN6Social6Events12EventManagerD2Ev
            EventManager(); // _ZN6Social6Events12EventManagerC2Ev
            void setupCommonProperties(); // _ZN6Social6Events12EventManager21setupCommonPropertiesEv
            void addListener(std::unique_ptr<Social::Events::IEventListener>); // _ZN6Social6Events12EventManager11addListenerESt10unique_ptrINS0_14IEventListenerESt14default_deleteIS3_EE
            void recordEvent(Social::Events::Event &); // _ZN6Social6Events12EventManager11recordEventERNS0_5EventE
            void tick(); // _ZN6Social6Events12EventManager4tickEv
            void sendEvents(bool); // _ZN6Social6Events12EventManager10sendEventsEb
            void stopDebugEventLoggingForAllListeners(); // _ZN6Social6Events12EventManager36stopDebugEventLoggingForAllListenersEv
            void setAcceptNewEvents(bool); // _ZN6Social6Events12EventManager18setAcceptNewEventsEb
            void getCommonProperty(std::string const&)const; // _ZNK6Social6Events12EventManager17getCommonPropertyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
            void removeCommonProperty(std::string const&); // _ZN6Social6Events12EventManager20removeCommonPropertyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
            void getGlobalProperty(std::string const&)const; // _ZNK6Social6Events12EventManager17getGlobalPropertyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
            void removeGlobalProperty(std::string const&); // _ZN6Social6Events12EventManager20removeGlobalPropertyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
            void getPlayerCommonProperty(unsigned int, std::string const&)const; // _ZNK6Social6Events12EventManager23getPlayerCommonPropertyEjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
            void removePlayerCommonProperty(unsigned int, std::string const&); // _ZN6Social6Events12EventManager26removePlayerCommonPropertyEjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
            void removePlayerCommonPropertyForAllPlayers(std::string const&); // _ZN6Social6Events12EventManager39removePlayerCommonPropertyForAllPlayersERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
            void getPlayerGlobalProperty(unsigned int, std::string const&)const; // _ZNK6Social6Events12EventManager23getPlayerGlobalPropertyEjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
            void removePlayerGlobalProperty(unsigned int, std::string const&); // _ZN6Social6Events12EventManager26removePlayerGlobalPropertyEjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
            void buildCommonProperties(std::unordered_map<std::string, Social::Events::Property, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, Social::Events::Property>>> &, unsigned int)const; // _ZNK6Social6Events12EventManager21buildCommonPropertiesERSt13unordered_mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS0_8PropertyESt4hashIS8_ESt8equal_toIS8_ESaISt4pairIKS8_S9_EEEj
            std::string buildCommonProperties(unsigned int)const; // _ZNK6Social6Events12EventManager21buildCommonPropertiesB5cxx11Ej
            bool hasListeners(int); // _ZN6Social6Events12EventManager12hasListenersEi
            void getNextSequenceNumber(); // _ZN6Social6Events12EventManager21getNextSequenceNumberEv
        };
    }
}
