#pragma once

#include <string>


namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class Message /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    virtual void SetCachedSize(int)const;
                    virtual void New()const;
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
                    virtual void ByteSizeLong()const;
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void GetMetadata()const;
                    virtual void Clear();
                    ~Message();
                    virtual bool IsInitialized()const;
                    virtual void GetCachedSize()const;
                    void InitAsDefaultInstance();
                    std::string value()const;
                    void CopyFrom(com::mojang::clacks::protocol::Message const&);
                    void SharedDtor();
                    void InternalSwap(com::mojang::clacks::protocol::Message *);
                    Message(com::mojang::clacks::protocol::Message const&);
                    void descriptor();
                    void MergeFrom(com::mojang::clacks::protocol::Message const&);
                    void GetArenaNoVirtual()const;
                    Message();
                    void SharedCtor();
                    void internal_default_instance();
                    std::string mutable_value();
                    void Swap(com::mojang::clacks::protocol::Message *);
                    void default_instance();
                };
            }
        }
    }
}
