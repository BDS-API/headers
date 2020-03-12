#pragma once

#include <string>


namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class PlayerName /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    ~PlayerName();
                    virtual void Clear();
                    virtual bool IsInitialized()const;
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void SetCachedSize(int)const;
                    virtual void GetMetadata()const;
                    virtual void GetCachedSize()const;
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
                    virtual void ByteSizeLong()const;
                    virtual void New()const;
                    void internal_default_instance();
                    void set_value(std::string const&);
                    void descriptor();
                    void InternalSwap(com::mojang::clacks::protocol::PlayerName *);
                    PlayerName(com::mojang::clacks::protocol::PlayerName const&);
                    void Swap(com::mojang::clacks::protocol::PlayerName *);
                    std::string mutable_value();
                    void GetArenaNoVirtual()const;
                    void default_instance();
                    void InitAsDefaultInstance();
                    std::string value()const;
                    void CopyFrom(com::mojang::clacks::protocol::PlayerName const&);
                    void SharedCtor();
                    void MergeFrom(com::mojang::clacks::protocol::PlayerName const&);
                    void SharedDtor();
                    PlayerName();
                };
            }
        }
    }
}
