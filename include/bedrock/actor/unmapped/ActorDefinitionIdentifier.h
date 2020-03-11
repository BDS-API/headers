#pragma once

#include "./ActorDefinitionIdentifier.h"
#include <string>


class ActorDefinitionIdentifier {

public:
    static std::string NAMESPACE_SEPARATOR;
    static std::string EVENT_BEGIN;
    static std::string EVENT_END;


    ~ActorDefinitionIdentifier();
    ActorDefinitionIdentifier();
    ActorDefinitionIdentifier(std::string, std::string, std::string);
    void _initialize();
    ActorDefinitionIdentifier(ActorDefinitionIdentifier const&);
    ActorDefinitionIdentifier(ActorDefinitionIdentifier &&);
    void _extractIdentifier(std::string const&, ActorDefinitionIdentifier &);
    ActorDefinitionIdentifier(char const*);
    ActorDefinitionIdentifier(std::string const&);
//  ActorDefinitionIdentifier(ActorType); //TODO: incomplete function definition
    bool isEmpty()const;
    void clear();
    void initialize(std::string const&);
    void initialize(std::string const&, std::string const&, std::string const&);
    void setIdentifier(std::string const&);
    void setInitEvent(std::string const&);
    std::string getNamespace()const;
    std::string getIdentifier()const;
    std::string getInitEvent()const;
    std::string getCanonicalName()const;
    void getCanonicalHash()const;
    std::string getFullName()const;
    bool isVanilla()const;
    void operator==(ActorDefinitionIdentifier const&)const;
    void _getLegacyActorType()const;
};
