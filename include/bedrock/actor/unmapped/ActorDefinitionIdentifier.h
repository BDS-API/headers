#pragma once

#include <string>


class ActorDefinitionIdentifier {

public:
    static std::string NAMESPACE_SEPARATOR;
    static std::string EVENT_BEGIN;
    static std::string EVENT_END;

    void _initialize();
    std::string getNamespace()const;
    std::string getFullName()const;
    ActorDefinitionIdentifier(ActorDefinitionIdentifier const&);
    void setInitEvent(std::string const&);
    ActorDefinitionIdentifier(std::string, std::string, std::string);
    ~ActorDefinitionIdentifier();
    ActorDefinitionIdentifier(ActorDefinitionIdentifier &&);
    void initialize(std::string const&);
    ActorDefinitionIdentifier();
    std::string getIdentifier()const;
    void _extractIdentifier(std::string const&, ActorDefinitionIdentifier &);
    void getCanonicalHash()const;
    std::string getCanonicalName()const;
    bool isVanilla()const;
    std::string getInitEvent()const;
    void operator==(ActorDefinitionIdentifier const&)const;
    ActorDefinitionIdentifier(char const*);
//  ActorDefinitionIdentifier(ActorType); //TODO: incomplete function definition
    bool isEmpty()const;
    void _getLegacyActorType()const;
    void setIdentifier(std::string const&);
    ActorDefinitionIdentifier(std::string const&);
    void initialize(std::string const&, std::string const&, std::string const&);
    void clear();
};
