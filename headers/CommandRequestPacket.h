#pragma once

class CommandRequestPacket : Packet {

    virtual ~CommandRequestPacket();
    virtual ~CommandRequestPacket();
    virtual void getId(void)const;
    virtual void _ZNK20CommandRequestPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
