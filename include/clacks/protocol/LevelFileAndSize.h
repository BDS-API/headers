#pragma once

#include <string>


namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class LevelFileAndSize /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    virtual void New()const;
                    virtual void GetCachedSize()const;
                    ~LevelFileAndSize();
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
                    virtual bool IsInitialized()const;
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    virtual void GetMetadata()const;
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
                    virtual void SetCachedSize(int)const;
                    virtual void Clear();
                    virtual void ByteSizeLong()const;
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
                    void InitAsDefaultInstance();
                    void Swap(com::mojang::clacks::protocol::LevelFileAndSize *);
                    std::string mutable_value();
                    void descriptor();
                    LevelFileAndSize();
                    void set_value(std::string &&);
                    void default_instance();
                    void SharedCtor();
                    void InternalSwap(com::mojang::clacks::protocol::LevelFileAndSize *);
                    void GetArenaNoVirtual()const;
                    void MergeFrom(com::mojang::clacks::protocol::LevelFileAndSize const&);
                    void internal_default_instance();
                    void SharedDtor();
                    std::string value()const;
                    void CopyFrom(com::mojang::clacks::protocol::LevelFileAndSize const&);
                    LevelFileAndSize(com::mojang::clacks::protocol::LevelFileAndSize const&);
                };
            }
        }
    }
}
