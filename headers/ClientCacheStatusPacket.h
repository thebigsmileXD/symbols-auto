#pragma once

class ClientCacheStatusPacket : Packet {

    virtual ~ClientCacheStatusPacket();
    virtual ~ClientCacheStatusPacket();
    virtual void getId(void)const;
    virtual void _ZNK23ClientCacheStatusPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
