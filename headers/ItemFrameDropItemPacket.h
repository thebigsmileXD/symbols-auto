#pragma once

class ItemFrameDropItemPacket : Packet {

    virtual ~ItemFrameDropItemPacket();
    virtual ~ItemFrameDropItemPacket();
    virtual void getId(void)const;
    virtual void _ZNK23ItemFrameDropItemPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
