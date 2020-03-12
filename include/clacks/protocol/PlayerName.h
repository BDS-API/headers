#pragma once

#include <string>


namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class PlayerName /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    virtual void New()const;
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
                    virtual void SetCachedSize(int)const;
                    ~PlayerName();
                    virtual bool IsInitialized()const;
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
                    virtual void ByteSizeLong()const;
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    virtual void GetCachedSize()const;
                    virtual void Clear();
                    virtual void GetMetadata()const;
                    void InitAsDefaultInstance();
                    void set_value(std::string const&);
                    void InternalSwap(com::mojang::clacks::protocol::PlayerName *);
                    PlayerName();
                    PlayerName(com::mojang::clacks::protocol::PlayerName const&);
                    void default_instance();
                    void descriptor();
                    void SharedDtor();
                    void CopyFrom(com::mojang::clacks::protocol::PlayerName const&);
                    void GetArenaNoVirtual()const;
                    std::string value()const;
                    void internal_default_instance();
                    void Swap(com::mojang::clacks::protocol::PlayerName *);
                    std::string mutable_value();
                    void MergeFrom(com::mojang::clacks::protocol::PlayerName const&);
                    void SharedCtor();
                };
            }
        }
    }
}
