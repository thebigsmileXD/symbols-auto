#pragma once

class BlockPickRequestPacket : Packet {

    virtual ~BlockPickRequestPacket();
    virtual ~BlockPickRequestPacket();
    virtual void getId(void)const;
    virtual void _ZNK22BlockPickRequestPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
